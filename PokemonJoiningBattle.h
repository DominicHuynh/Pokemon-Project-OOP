#ifndef POKEMONJOININGBATTLE_H
#define POKEMONJOININGBATTLE_H
#include "Pokemon.h"
class PokemonJoiningBattle : public Pokemon{
    public:
    PokemonJoiningBattle(); // Default Constructor
    PokemonJoiningBattle(Pokemon a); //Constructor
    bool stillAlive(); // check if pokemon is still alive
    void healthAfterGettingDamage(double stats); //update the health after being attacked by the opponent
    bool mutualGeneration(string elementA); //check if pokemon got mutual generation with pokemon B( to upgrade power)
    bool mutualConflict(string elementB);// check if pokemon got mutual conflict with pokemon B (to decrease power)
    void setSpeed(double stats); // overriding function here, to change the speed if pokemon get mutual generation or mutual conflict
    void setHealth(double stats);  // overriding function here, to change the health if pokemon get mutual generation or mutual conflict
    void setArmor (double stats);  // overriding function here, to change the defence if pokemon get mutual generation or mutual conflict
    void setDamage(double stats); // // overriding function here, to change the attack if pokemon get mutual generation or mutual conflict
    
    ~PokemonJoiningBattle(); // Destructor here



};

#endif