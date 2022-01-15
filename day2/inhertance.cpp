#include <iostream>
using namespace std;
// Base class
class Animal
{
public:
    string Type = "Cat";
    void Meao()
    {
        cout << "meao, meao! \n";
    }
};

// Derived class
class jasmin : public Animal
{
public:
    string breed = "Pursian";
};

int main()
{
    jasmin myCat;
    myCat.Meao();
    cout << myCat.Type + " " + myCat.breed;
    return 0;
}