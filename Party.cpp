// Peter Ashmore & Michael Yon

#include <iostream>
#include <iomanip>

#include "Party.h"

/**
 * Default constructor; sets leader and member names to empty
 */

Party::Party(){

    name = "";

    for (int i = 0; i < 4; i++){

        partyMembers[i] = "";
    }
}

/**
 * Parameterized constructor; sets leader and member names
 * @param newName inputted name for party leader
 * @param newPartyMembers inputted names for party members
 */

Party::Party(std::string newName, std::string newPartyMembers[4]){

    name = newName;
    
    for (int i = 0; i < 4; i++){

        partyMembers[i] = newPartyMembers[i];
    }
}

/**
 * @return returns number of oxen
 */

int Party::getOxen(){

    return oxen;
}

/**
 * Sets number of oxen to inputted value
 * @param newOxen inputted number of oxen 
 */

void Party::setOxen(int newOxen){

    oxen = newOxen;
}

/**
 * @return returns pounds of food
 */

int Party::getFood(){

    return food;
}

/**
 * Sets pounds of food to inputted value
 * @param newFood inputted pounds of food 
 */

void Party::setFood(int newFood){

    food = newFood;
}

/**
 * @return returns number of bullets
 */

int Party::getBullets(){

    return bullets;
}

/**
 * Sets number of bullets to inputted value
 * @param newBullets inputted number of bullets
 */

void Party::setBullets(int newBullets){

    bullets = newBullets;
}

/**
 * @return returns number of wheels
 */

int Party::getWheels(){

    return wheels;
}

/**
 * Sets number of wheels to inputted value
 * @param newWheels inputted number of wheels 
 */

void Party::setWheels(int newWheels){

    wheels = newWheels;
}

/**
 * @return returns number of axles
 */

int Party::getAxles(){

    return axles;
}

/**
 * Sets number of axles to inputted value
 * @param newAxles inputted number of axles
 */

void Party::setAxles(int newAxles){

    axles = newAxles;
}

/**
 * @return returns number of tongues
 */

int Party::getTongues(){

    return tongues;
}

/**
 * Sets number of tongues to inputted value
 * @param newTongues inputted number of tongues 
 */

void Party::setTongues(int newTongues){

    tongues = newTongues;
}

/**
 * @return returns amount of money
 */

double  Party::getMoney(){

    return money;
}

/**
 * Sets number of money to inputted value
 * @param newMoney inputted amount of money
 */

void Party::setMoney(double newMoney){

    money = newMoney;
}

/**
 * @return returns number of medKits
 */

int Party::getMedKits(){

    return medKits;
}

/**
 * Sets number of medKits to inputted value
 * @param newMedKits inputted number of medKits 
 */

void Party::setMedKits(int newMedKits){

    medKits = newMedKits;
}
/**
 * @param index index of the party member
 * @return If the party member at index is alive or not
 */
bool Party::getPartyLifeAt(int index){
    return partyLife[index];
}
/**
 * setter for the life of party members at index
 * @param index index of the party member
 * @param value if the party member at said index is alive or not
 */
void Party::setPartyLifeAt(int index, bool value){
    partyLife[index] = value;
}

std::string Party::getPartyMembersAt(int index){
    return partyMembers[index];
}

std::string Party::getName(){
    return name;
}