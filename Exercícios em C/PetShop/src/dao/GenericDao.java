/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Caang
 */
public abstract class GenericDao {

    //Criar método para obter a conexão com um banco de dados
    public Connection getConnect() {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection cx = DriverManager.getConnection("jdbc:mysql://localhost:3306/petshop", "root", "");
            return cx;
        } catch (ClassNotFoundException | SQLException ex) {
            Logger.getLogger(GenericDao.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }
    }

    public Statement getStatement() {
        try {
            return getConnect().createStatement();
        } catch (SQLException ex) {
            Logger.getLogger(GenericDao.class.getName()).log(Level.SEVERE, null, ex);
            return null;
        }
    }

    public PreparedStatement getStatement(String query) throws SQLException {
        return getConnect().prepareStatement(query);
    }

    public ResultSet executeQuery(String query, Object... params) throws SQLException {
        PreparedStatement ps = getStatement(query);
        for (int i = 0; i < params.length; i++) {
            ps.setObject(i + 1, params[i]);
        }
        return ps.executeQuery();
    }

    public int executeCommand(String query, Object... params) throws SQLException {
        int result;
        try (PreparedStatement ps = getStatement(query)) {
            for (int i = 0; i < params.length; i++) {
                ps.setObject(i + 1, params[i]);
            }
            result = ps.executeUpdate();
        }
        return result;
    }

    public Integer getNextId(String tabName) throws SQLException {
        ResultSet rs = executeQuery("SELECT MAX(Id) from petshop." + tabName);
        rs.next();
        Object result = rs.getObject(1);
        if (result == null) {
            rs.close();
            return 1;
        } else {
            return ((Integer) result) + 1;
        }
    }
}