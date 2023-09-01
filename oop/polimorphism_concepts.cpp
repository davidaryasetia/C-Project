// Polimorphism Concepts -> like inheritance this inherit from atribute, method, and another class
// polymorphism use those method to perform different task 

// Example of polymorphism concepts that we have a class Animals (base class) -> parent, that have method function AnimalSound()
// and then we have a derived a class Child (Pig, Dog, Cat, Cow) -> With same name of method function 

#include <iostream>
using namespace std;

// Okay from the first time we want to make and declare base class
class Animal {
    // Dont forget to give the access specifiers 
    public :
    // make a method function called animalSound()
    void animalSound (){
        cout << "This is a different animal sound : \n";
    }
// Dont forget to make semicolon 
};

// And then we want to make child class with the different name animal (Pig, Dog, Cat, Cow) , with child class Inherit from base class

class Pig : public Animal {
    public : 
    // make a same method function 
    void animalSound (){
        cout << "This is a Pig Sound : kikekikik ik \n";
    }
};

class Dog : public Animal {
    public : 
    // make a same name method function 
    void animalSound (){
        cout << "This is a Dog Sound : guk guk guk guk guk \n";
    }
};

class Cat : public Animal {
    public : 
    // make a same name method function 
    void animalSound (){
        cout << "This is a Cat Sound : meow meow meow meow \n";
    }
};

class Cow : public Animal {
    public : 
    // make a same name function 
    void animalSound (){
        cout << "This is a Cow Sound : muuuu muuuu muuuu muu \n";
    }
};

// Okay the polimorphysm concepts is overide the same method from other child class
// make a main program 
int main (){
    // make and declare an object with the different class in parent and child 
    
    // Declare and create object parent 
    Animal myAnimal;

    // Declare and create object child 
    Pig myPig;
    Dog myDog;
    Cat myCat;
    Cow myCow;

    // And the we want to call the name function its every object 
    myAnimal.animalSound();
    
    myPig.animalSound();
    myDog.animalSound();
    myCat.animalSound();
    myCow.animalSound();

    return 0;
}
