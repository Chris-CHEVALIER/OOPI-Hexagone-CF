#include "Pokemon.hpp"

Pokemon::Pokemon(int newNumber, string newName, string newType1, string newType2, int newLp)
{
    number = newNumber;
    name = newName;
    type1 = newType1;
    type2 = newType2;
    lp = newLp;
}

void Pokemon::attack(Pokemon targetedPokemon) const
{
    cout << name << " attaque " << targetedPokemon.getName() << " !" << endl;
}

int Pokemon::getNumber() const
{
    return number;
}

void Pokemon::setNumber(int newNumber)
{
    if (newNumber > 0 && newNumber < 1090)
    {
        number = newNumber;
    }
}

string Pokemon::getName() const
{
    return name;
}

void Pokemon::setName(string newName)
{
    name = newName;
}

int Pokemon::getLp() const
{
    return lp;
}
string Pokemon::getType1() const
{
    return type1;
}
string Pokemon::getType2() const
{
    return type2;
}

void Pokemon::display() const
{
    cout << name << " porte le numéro " << number << " et a " << lp << " points de vie." << endl;
    cout << "Il possède les types " << type1 << " et " << type2 << " !" << endl;
}

Pokemon::~Pokemon() 
{
    cout << name << " est détruit !" << endl;
}