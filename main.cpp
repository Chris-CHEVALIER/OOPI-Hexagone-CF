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

    Pokemon carapuce;
    carapuce.setNumber(3);
    cout << carapuce.getNumber() << endl;
    carapuce.attack();
    return 0;
}
