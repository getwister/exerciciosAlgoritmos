/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import cliente.User;
import java.sql.SQLException;
import petshop.Sell;

/**
 *
 * @author Caang
 */
public class SellDao extends GenericDao {

    public int saveSell(Sell vendas) throws SQLException {
        vendas.setId(getNextId("vendas"));
        String query = "INSERT INTO PetShop.vendas (id, vendor, dataOfSale, total, itens) value(?, ?, ?, ?, ?)";
        executeCommand(query, vendas.getId(), vendas.getVendor(), vendas.getDataOfSale(), vendas.getTotal(), vendas.getItens());
        return vendas.getId();
    }
    public void removeSell(int id) throws SQLException{
            executeCommand("DELETE FROM PetShop.vendas WHERE id = ?", id);
    }
    public void upDateSell(Sell vendas) throws SQLException{
        String query = "UPDATE PetShop.vendas SET vendor = ?, dataOfSale = ?, total = ?, itens = ? WHERE id = ? ";
        executeCommand(query, vendas.getVendor(), vendas.getDataOfSale(), vendas.getTotal(), vendas.getItens(), vendas.getId());
    }
}