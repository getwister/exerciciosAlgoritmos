/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;
import formularios.ExibirDadosInterface;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.table.DefaultTableModel;
/**
 *
 * @author Caang
 */
public class ExibirDados extends GenericDao{
    ResultSet rs = null;
    public DefaultTableModel pegarDadosC() throws SQLException{
        DefaultTableModel model = new ExibirDadosInterface().pegaModel();
        rs = executeQuery("SELECT * FROM petshop.cliente");
        rs.next();
        
        String[] colunas = new String[]{"ID", "Nome", "Idade", "Endereço", "Telefone"};
        model.setColumnIdentifiers(colunas);
        String[] linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString(), rs.getObject(5).toString()};
        model.addRow(linha);
        while (rs.next()) {            
             linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString(),rs.getObject(5).toString()};
            model.addRow(linha);
        }
        return model;
    }
    
    public DefaultTableModel pegarDadosU() throws SQLException{
        
        DefaultTableModel model = new ExibirDadosInterface().pegaModel();
        rs = executeQuery("SELECT * FROM petshop.usuario");
        rs.next();
        
        String[] colunas = new String[]{"ID", "Nome", "Login", "Senha"};
        model.setColumnIdentifiers(colunas);
        String[] linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString()};
        model.addRow(linha);
        while (rs.next()) {            
             linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString()};
            model.addRow(linha);
        }
        return model;
    }
    
    public DefaultTableModel pegarDadosA() throws SQLException{
        
        DefaultTableModel model = new ExibirDadosInterface().pegaModel();
        rs = executeQuery("SELECT * FROM petshop.animal");
        rs.next();
        
        String[] colunas = new String[]{"ID", "Nome", "Raça", "Idade", "Dono", "Tipo"};
        model.setColumnIdentifiers(colunas);
        
        String[] linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString(), rs.getObject(5).toString(), rs.getObject(6).toString()};
        model.addRow(linha);
        while (rs.next()) {            
             linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString(), rs.getObject(5).toString(), rs.getObject(6).toString()};
            model.addRow(linha);
        }
        return model;
    }
    
        public DefaultTableModel pegarDadosP() throws SQLException{
        
        DefaultTableModel model = new ExibirDadosInterface().pegaModel();
        rs = executeQuery("SELECT * FROM petshop.produto");
        rs.next();
        
        String[] colunas = new String[]{"ID", "Nome", "Preço", "Estoque"};
        model.setColumnIdentifiers(colunas);
        
        String[] linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString()};
        model.addRow(linha);
        while (rs.next()) {            
             linha = new String[]{rs.getObject(1).toString(), rs.getObject(2).toString(), rs.getObject(3).toString(), rs.getObject(4).toString()};
            model.addRow(linha);
        }
        return model;
    }
}
