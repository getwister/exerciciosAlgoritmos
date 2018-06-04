/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import cliente.Customer;
import java.sql.SQLException;
import petshop.Product;

/**
 *
 * @author Caang
 */
public class ProductDao extends GenericDao{
    public int saveProduct(Product produtos) throws SQLException {
        produtos.setId(getNextId("produto"));
        String query = "INSERT INTO PetShop.produto (id, nome, preco, estoque) value(?, ?, ?, ?)";
        executeCommand(query, produtos.getId(), produtos.getName(), produtos.getPrice(), produtos.getStock());
        return produtos.getId();
    }
    public void removeProduct(int id) throws SQLException{
            executeCommand("DELETE FROM PetShop.produto WHERE id = ?", id);
    }
    public void upDateProduct(Product produtos) throws SQLException{
        String query = "UPDATE PetShop.produto SET nome = ?, preco = ?, estoque = ? WHERE id = ? ";
        executeCommand(query, produtos.getName(), produtos.getPrice(), produtos.getStock(), produtos.getId());
    }
}