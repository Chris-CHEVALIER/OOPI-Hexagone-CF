#include <iostream>
#include <string>
#pragma once

using namespace std;

class Pokemon
{
    // Attributs
private:
    int number;
    string name;
    string type1;
    string type2;
    int lp;

    // Méthodes
public:
    Pokemon(int newNumber, string newName, string newType1, string newType2, int newLp);
    void attack(Pokemon targetedPokemon) const;
    int getNumber() const;
    void setNumber(int newNumber);
    void setName(string newName);
    string getName() const;
    int getLp() const;
    string getType1() const;
    string getType2() const;
    void display() const;
    ~Pokemon();
};