/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dao;

import animal.Animal;
import cliente.User;
import java.sql.SQLException;

/**
 *
 * @author Caang
 */
public class AnimalDao extends GenericDao {

    public int saveAnimal(Animal animal) throws SQLException {
        animal.setId(getNextId("animal"));
        String query = "INSERT INTO PetShop.animal (id, nome, raca, idade, dono, tipo) value(?, ?, ?, ?, ?, ?)";
        executeCommand(query, animal.getId(), animal.getName(), animal.getBreed(), animal.getAge(), animal.getOwer().getId(), animal.getType().getDescription());
        return animal.getId();
    }
    public void removeAnimal(int id) throws SQLException{
            executeCommand("DELETE FROM PetShop.animal WHERE id = ?", id);
    }
    public void upDateAnimal(Animal animal) throws SQLException{
        String query = "UPDATE PetShop.animal SET nome = ?, raca = ?, idade = ?, dono = ?, tipo = ? WHERE id = ? ";
        executeCommand(query, animal.getName(), animal.getBreed(), animal.getAge(), animal.getOwer().getId(), animal.getType().getDescription(), animal.getId());
    }
}