/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package petshop;

import cliente.User;
import java.util.Date;
import java.util.List;

/**
 *
 * @author Caang
 */
public class Sell {
    int id;
    User vendor;
    Date dataOfSale;
    float total;
    List<SellItem> itens;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public User getVendor() {
        return vendor;
    }

    public void setVendor(User vendor) {
        this.vendor = vendor;
    }

    public Date getDataOfSale() {
        return dataOfSale;
    }

    public void setDataOfSale(Date dataOfSale) {
        this.dataOfSale = dataOfSale;
    }

    public float getTotal() {
        return total;
    }

    public void setTotal(float total) {
        this.total = total;
    }

    public List<SellItem> getItens() {
        return itens;
    }

    public void setItens(List<SellItem> itens) {
        this.itens = itens;
    }
}