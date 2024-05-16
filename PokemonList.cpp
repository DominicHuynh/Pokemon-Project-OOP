#include "PokemonList.h"
#include "PokemonJoiningBattle.h"
#include <fstream>
#include <string>
#include <iostream>
//Read file PokemonList.txt
void PokemonList :: setPokemonList (fstream& f){
    openFile(f, "PokemonList.txt");
    vector<Pokemon> b;
    string str;
    while (getline(f,str)) // This starts a loop that reads lines from the file f one by one and stores them in the str variable until the end of the file is reached.
    {
        Pokemon a;
        size_t pos=0;
        string token;
        string delimiter=";";
        int n=1;
        //This inner loop parses each line of the file, splitting it into tokens separated by ";". It continues until it reaches the end of the line.
        while ((pos = str.find(delimiter)) | (pos = str.find("\n")) != std::string:: npos ){
            token = str.substr(0, pos);
            //Extracts the token from the beginning of the line up to the position of the delimiter.
					if (n == 1) { 
                        a.setName(token); 
                    }
					else if (n == 2) {
						a.setElement(token);
					}
					else if (n == 3) {                  //as the first index is name, second is element, third is health, forth is damage,
						a.setHealth(stof(token));       // fifth is armor and sixth is speed from the PokemonList.txt
					}
                    else if (n == 4) {
						a.setDamage(stof(token));
					}
					else if (n == 5) {
						a.setArmor(stof(token));
					}
					
					else if (n == 6) {
                        a.setSpeed(stof(token));
                    }
					n++;
					str.erase(0, pos + delimiter.length());
					if (n == 7) {
						break;
					}
                    b.push_back(a);
        }
    }
    f << "\n";
    this->list = b;
    f.close();
}
// Get the list of Pokemons
vector <Pokemon> PokemonList::getPokemonList()
{
	return list;
}
// Open the file Pokemon.txt
bool PokemonList::openFile(fstream& f, string filename)
{
	f.open(filename,ios_base::in|ios_base::app); // the file will be opened for input operations (ios_base::in), and if the file does not exist, it will be created. Additionally, all output operations will be performed at the end of the file (ios_base::app)
	if (f.is_open()) {                          //, which allows appending data to the existing content of the file without overwriting it
		return true;

	}
	else return false;
}
// Print the list of Pokemons on the screen
void PokemonList::printPokemonList()
{
	
	for (int i = 0; i < list.size(); i++)   // 
	{
		Pokemon c=list.at(i);       // retrieve the element at the i-th position from the list container and assign it to a variable c of type Pokemon
		cout <<"\t"<< i + 1 << ". ";
		c.print();
		
	}
}