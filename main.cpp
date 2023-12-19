#include <iostream>
#include <string>
#include "Pokemon.cpp"

using namespace std;
int main()
{
    /* cout << "Hello World!" << endl;
    string firstName = "Chris";
    string lastName = "Chevalier";

    int age = 31;
    string welcome = "Bienvenue " + firstName + " " + lastName + " !";
    cout << welcome << endl; */

    Pokemon carapuce(3, "Carapuce", "Eau", "Eau", 100);
    Pokemon mewtwo(150, "Mewtwo", "Psy", "Psy", 200);
    /*  carapuce.setNumber(3);
     mewtwo.setNumber(150);
     carapuce.setName("Carapuce");
     mewtwo.setName("Mewtwo"); */
    carapuce.display();
    mewtwo.display();
    mewtwo.attack(carapuce);
    return 0;
}
