#include <iostream>
#include <vector>

#include "pokemon.h"


std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.emplace_back("Balbasaur", "leaf", "water");
    pokemons.emplace_back("Pikatchu", "electric", "water");
    pokemons.emplace_back("Charizard", "fire", "leaf");
    pokemons.emplace_back("Squirtle", "water", "fire");
    pokemons.emplace_back("Kingler", "water", "fire");

    return pokemons;
}

int main(int argc, char* args[])
{
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();

    // Every pokemon has a name and a type.
    // Certain types are effective against others, e.g. water is effective against fire.

    // Ash has a few pokemon.
    // A wild pokemon appeared!

    Pokemon wildPokemon("Oddish", "leaf", "water");

    // Which pokemon should Ash use?
    std::string name;
    for (int i = 0; i < pokemonOfAsh.size(); ++i){
         if(pokemonOfAsh[i].isEffectiveAgainst(wildPokemon)){
             name = pokemonOfAsh[i].getName();
         }
    }

    std::cout << "I choose You, " << name <<  std::endl;
    return 0;
}