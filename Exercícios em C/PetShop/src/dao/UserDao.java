/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import cliente.User;
import java.sql.SQLException;

/**
 *
 * @author Caang
 */
public class UserDao extends GenericDao {

    public int saveUser(User usuario) throws SQLException {
        usuario.setId(getNextId("usuario"));
        String query = "INSERT INTO PetShop.usuario (id, nome, login, senha) value(?, ?, ?, ?)";
        executeCommand(query, usuario.getId(), usuario.getName(), usuario.getLogin(), usuario.getPassword());
        return usuario.getId();
    }
    public void removeUser(int id) throws SQLException{
            executeCommand("DELETE FROM PetShop.usuario WHERE id = ?", id);
    }
    public void upDateUser(User usuario) throws SQLException{
        String query = "UPDATE PetShop.usuario SET nome = ?, login = ?, senha = ? WHERE id = ? ";
        executeCommand(query, usuario.getName(), usuario.getLogin(), usuario.getPassword(), usuario.getId());
    }
}    