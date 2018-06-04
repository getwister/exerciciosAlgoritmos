package dao;

import cliente.Customer;
import cliente.User;
import java.sql.SQLException;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Caang
 */
public class CustomerDao extends GenericDao{
    public int saveCustomer(Customer cliente) throws SQLException {
        cliente.setId(getNextId("cliente"));
        String query = "INSERT INTO PetShop.cliente (id, nome, idade, endereco, telefone) value(?, ?, ?, ?, ?)";
        executeCommand(query, cliente.getId(), cliente.getName(), cliente.getAge(), cliente.getAddress(), cliente.getTelefone());
        return cliente.getId();
    }
    public void removeCustomer(int id) throws SQLException{
            executeCommand("DELETE FROM PetShop.cliente WHERE id = ?", id);
    }
    public void upDateCustomer(Customer cliente) throws SQLException{
        String query = "UPDATE PetShop.cliente SET nome = ?, idade = ?, endereco = ?, telefone = ? WHERE id = ? ";
        executeCommand(query, cliente.getName(), cliente.getAge(), cliente.getAddress(), cliente.getTelefone(), cliente.getId());
    }
}