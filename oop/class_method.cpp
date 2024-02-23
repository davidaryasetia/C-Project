/*
C++ Class Method -> Method are function that belongs to the class

There are two way to define function that belongs to a class
- Inside class definition
- Outside class definition
*/

// Example define outside a class, and then we can also add parameter in output function definition
#include <iostream>

using namespace std;

// Declare a class
class Car
{
public:
    int speed(int maxspeed);
};

int Car::speed(int maxspeed)
{
    return maxspeed;
}

// Make a main program
int main()
{
    Car myObj;
    int MySpeed = myObj.speed(200);
    cout << "My Speed Car is : " << MySpeed;
    return 0;
}
