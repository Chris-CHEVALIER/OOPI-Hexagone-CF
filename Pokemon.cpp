#include <iostream>
#include <string>

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
    void attack(/* Pokemon toto */)
    {
        cout << "Le Pokémon attaque" << endl;
    }

    int getNumber()
    {   
        return number;
    }

    void setNumber(int newNumber)
    {
        if (newNumber > 0 && newNumber < 1090)
        {
             number = newNumber;
        }
    }

    string getName()
    {   
        return name;
    }
    int getLp()
    {   
        return lp;
    }
};