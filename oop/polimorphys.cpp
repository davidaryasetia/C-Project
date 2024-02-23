/*
C++ Polimorphysm -> Polimorphism means "many form", and it occurs
when we have many classess that related to each other by inheritance
*/

// Example of polimorphysm -> think of a base class called Animal that has a method call animalSound(). Derived classes of Animals could be Pigs, Cats, Dog, Birds, and they also have their own implementation
#include <iostream>
using namespace std;

// Declare a base class (Parent)
class Animals
{
public:
    void animalSound()
    {
        cout << "The Animals make a sound \n";
    }
};

// Declare a derive class (child : Pigs, Cats, Dog, Birds)
class Pig : public Animals
{
public:
    void animalSound()
    {
        cout << "wug wug wug \n";
    }
};

class Cats : public Animals
{
public:
    void animalSound()
    {
        cout << "meow meow meow \n";
    }
};

class Dog : public Animals
{
public:
    void animalSound()
    {
        cout << "guk guk guk guk \n";
    }
};

class Bird : public Animals
{
public:
    void animalSound()
    {
        cout << "cuit cuit cuit cuit \n";
    }
};

// Make a main program
int main()
{
    // Declare a parent class to make object
    Animals myAnimals;

    // And then declare a object from derived class
    Pig myPig;
    Cats myCats;
    Dog myDog;
    Bird myBird;

    // Print out the animal sound start from myAnimals
    myAnimals.animalSound();
    myPig.animalSound();
    myCats.animalSound();
    myDog.animalSound();
    myBird.animalSound();

    return 0;
};