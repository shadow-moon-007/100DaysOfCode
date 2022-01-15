#include <iostream>
using namespace std;
class Mobile
{                                      // The class
public:                                // Access specifier
    string brand;                      // Attribute
    string model;                      // Attribute
    int Ram;                           // Attribute
    Mobile(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Mobile::Mobile(string x, string y, int z)
{
    brand = x;
    model = y;
    Ram = z;
}

int main()
{
    // Create Mobile objects and call the constructor with different values
    Mobile MobileObj1("Samsung", "Fold 3", 8);
    Mobile MobileObj2("Apple", "Iphone 13", 6);

    // Print values
    cout << MobileObj1.brand << " " << MobileObj1.model << " " << MobileObj1.Ram << "\n";
    cout << MobileObj2.brand << " " << MobileObj2.model << " " << MobileObj2.Ram << "\n";
    return 0;
}