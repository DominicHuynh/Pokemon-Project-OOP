#include <iostream>
#include <string>
using namespace std;
#include "PokemonJoiningBattle.h"
//Default Constructor
PokemonJoiningBattle :: PokemonJoiningBattle(){

}
//Destructor
PokemonJoiningBattle :: ~PokemonJoiningBattle(){

}
PokemonJoiningBattle :: PokemonJoiningBattle(Pokemon a){
    this->name=a.getName();
    this->damage=a.getDamage();
    this->health=a.getHealth();
    this->armor=a.getArmor();
    this->element=a.getElement();
    this->speed=a.getSpeed();
    
}
bool PokemonJoiningBattle :: stillAlive(){
   return (this->health>0);
}
void PokemonJoiningBattle :: healthAfterGettingDamage(double stats){
    this->health=this->health - stats + armor;
}
//At this point, "stats" is just like the damage received
bool PokemonJoiningBattle :: mutualGeneration(string elementA) // check if pokemon has mutual generation with other pokemons in the same team
{                                                              //at this point, we assume that grass will go with water, light will go with fire,
                                                               // light will go with water!!!
    if(element=="Grass" && elementA=="Water")
        return true;
    if(element=="Light" && elementA=="Fire")
        return true;
    if(element=="Light" && elementA=="Water")
        return true;
    return false;

}
bool PokemonJoiningBattle :: mutualConflict(string elementB){ // we assume that fire will go against water, fire will go against grass,
    if(element=="Fire" && elementB=="Water")                    // grass will go against light
        return true;
    if(element=="Fire" && elementB=="Grass")
        return true;
    if(element=="Grass" && elementB=="Light")
        return true;
    return false;
}
void PokemonJoiningBattle :: setSpeed(double stats){
    this->speed= this->speed + this->speed * stats;
}
void PokemonJoiningBattle :: setHealth(double stats){
    this->health= this->health + this->health * stats;
}
void PokemonJoiningBattle :: setArmor(double stats){
    this->armor= this->armor + this->armor * stats;
}
void PokemonJoiningBattle :: setDamage(double stats){
    this->damage= this->damage + this->damage * stats;
}
// at this stats parameter here, we assume that:
//In the same team: - If Pokemons have mutual generation, they will get a bonus of 15% of health, 
//                  - If Pokemons have mutual conflict, they will get a decrease of 15% of speed( the speed parameter I have innitialized so far
//                     is the speed of for the Pokemon's next turn's attack)

//In the different team: - If Pokemons have mutual generation, there's nothing changed.
//                       - If Pokemons have mutual conflict, so at this part, we will assume:
//              The Pokemon being countered will have a decrease of 30% of damage.
//              The Pokemon who counters the countered Pokemon will have a bonus of 10% 