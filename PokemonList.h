#pragma once
#include "Pokemon.h"
#include "PokemonJoiningBattle.h"
#include <vector>
#include <fstream>
class PokemonList : public Pokemon 
{
	protected:
		vector<Pokemon> list;
	public:
		bool openFile(fstream& f, string filename); //Openfile ListHero.txt, & is used as a reference to the 'fstream' object f as a parameter 
		void setPokemonList(fstream& f); //Read file and take data from the PokemonList.txt
		vector<Pokemon> getPokemonList(); //Get PokemonList
		void printPokemonList(); //Print the Pokemon list on the screen

};

