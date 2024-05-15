
#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;
//Default constructor
Pokemon :: Pokemon() {
    name ="";
    element="";
    health=0;
    damage=0;
    armor=0;
    speed=0;
}
// Setter: set the name, element, health, damage and armor for the Pokemom
void Pokemon:: setName(string name){
    this->name=name;
}
void Pokemon:: setElement(string element){
    this->element=element;
}
void Pokemon:: setHealth(double health){
    this->health=health;
}
void Pokemon:: setDamage(double damage){
    this->damage=damage;
}
void Pokemon::setArmor(double armor){
    this->armor=armor;
}
void Pokemon::setSpeed(double speed){
    this->speed=speed;
}

//Getter: return the element, name, health, armor, damage and speed of the Pokemon
string Pokemon::getElement() { return element; }
string Pokemon::getName(){return name;}
double Pokemon::getHealth() { return health; }
double Pokemon::getArmor(){return armor;}
double Pokemon::getDamage(){return damage;}
double Pokemon::getSpeed(){return speed;}

//print the information of the Pokemon on the screen
void Pokemon :: print(){
    cout<< name<<", "<<element<<", ";
    if (health<0){
        cout<<"0";
    }
        else{
        cout<<health;
    }
    cout<< ", "<<damage<<", "<<armor<<", "<<speed<<endl;
}

Pokemon :: ~Pokemon(){}
