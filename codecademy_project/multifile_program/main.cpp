/*
This is main program using multifile program : 
1. main.cpp -> main program 
2. coffe.cpp -> to declare a function 
3. coffe.hpp -> to define a function 
4. This program make default parameter argument 
5. A few function store in coffe.cpp and coffe.hpp : 
    - coffe.hpp is to make declare function 
    - coffe.cpp is to make a define function 
*/

#include <iostream>
#include <string>
#include "coffe.cpp"

// make a main program 
int main (){
    coffe_machine (true, true);
    return 0;
}
