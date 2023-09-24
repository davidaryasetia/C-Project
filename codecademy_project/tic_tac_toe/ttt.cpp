/*
in order to complete this project, you should have completed the following sections of Learn C++:
Loops
Vectors
Functions
Make sure to plan out the program on paper before you start coding and remember to take breaks!

You’ll need to account for the following:

This game will have two players that will input in the same terminal.
This 3x3 game board will need to be represented using a data structure, like a vector or an array.
There are 8 winning combinations.
*/
#include<iostream>
#include"ttt_functions.hpp"
int main()
{
	std::cout << "Please select User\n" << "User1=x\n" << "User2=o\n";
	std::cout << "User1 will be assigned whoever play first";
	resetGrid();
	gamePlay();
}








