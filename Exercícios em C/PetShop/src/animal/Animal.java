/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package animal;

import cliente.Customer;

/**
 *
 * @author Caang
 */
public class Animal {
    int id;
    String name;
    String breed;
    int age;
    Customer ower;
    AnimalType type;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBreed() {
        return breed;
    }

    public void setBreed(String breed) {
        this.breed = breed;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public Customer getOwer() {
        return ower;
    }

    public void setOwer(Customer ower) {
        this.ower = ower;
    }

    public AnimalType getType() {
        return type;
    }

    public void setType(AnimalType type) {
        this.type = type;
    }
    
}
