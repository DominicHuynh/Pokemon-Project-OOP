
#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Pokemon{
    protected:
        string name;
        string element;
        double health;
        double damage;
        double armor;
        double speed;
    public:
    Pokemon();
    
     
     void setName(string name);
     void setElement(string element);
     virtual void setHealth(double health); 
     virtual void setDamage(double damage);
     virtual void setArmor(double armor);
     virtual void setSpeed(double speed);

     string getName();
     string getElement();
     double getHealth();
     double getDamage();
     double getArmor();
     double getSpeed();
     
     void print();
    
    

    ~Pokemon();





};




#endif
