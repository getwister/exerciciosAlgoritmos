/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package petshop;

/**
 *
 * @author Caang
 */
public class SellItem {
    int id;
    Product product;
    Sell sell;
    int quantity;
    float totalOfItem;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Product getProduct() {
        return product;
    }

    public void setProduct(Product product) {
        this.product = product;
    }

    public Sell getSell() {
        return sell;
    }

    public void setSell(Sell sell) {
        this.sell = sell;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    public float getTotalOfItem() {
        return totalOfItem;
    }

    public void setTotalOfItem(float totalOfItem) {
        this.totalOfItem = totalOfItem;
    }
}