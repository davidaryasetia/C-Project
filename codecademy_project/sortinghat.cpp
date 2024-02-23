/*
C++ Codecademy project -> sortinghat quiz
description program :
Sorting hat is a talking hat at Hogwartz that magically determines
which of the four school Houses each new student belong most to :
1. gryffindor
2. hufflepuff
3. ravenclaw
4. slytherin
*/
#include <iostream>
#include <string>

int main()
{
    // declare 4 variable
    int gryffindor, /*  */ hufflepuff, ravenclaw, slytherin;
    int answer1, answer2, answer3, answer4;
    std::cout << "==============================\n";
    std::cout << "Program The Sorting Hat Quiz! \n";

    // question 1
    std::cout << "Q1) When I'm dead, I want people to remember me as : \n";
    std::cout << "1) The Good \n";
    std::cout << "2) The Great \n";
    std::cout << "3) The Wise \n";
    std::cout << "4) The Bold \n";
    std::cout << "Answer This Question (1 to 4) : ";
    std::cin >> answer1;
    std::cout << "\n";

    // make conditional logic 1 for answer question 1
    if (answer1 == 1)
    {
        hufflepuff++;
    }
    else if (answer1 == 2)
    {
        slytherin++;
    }
    else if (answer1 == 3)
    {
        ravenclaw++;
    }
    else if (answer1 == 4)
    {
        gryffindor++;
    }
    else
    {
        std::cout << "Invalid input \n";
    }

    // question 2
    std::cout << "Q2) Dawn or Dusk \n";
    std::cout << "1) Dawn \n";
    std::cout << "2) Dusk \n";
    std::cout << "Answer this Question (1 to 2) \n";
    std::cin >> answer2;
    std::cout << "\n";

    // make condition logic for answer question 2
    if (answer2 == 1)
    {
        gryffindor++;
        ravenclaw++;
    }
    else if (answer2 == 2)
    {
        hufflepuff++;
        slytherin++;
    }
    else
    {
        std::cout << "Invalid input \n";
    }

    // question 3
    std::cout << "Q3) which kind of instrument most pleases your ear? \n";
    std::cout << "1) The violin \n";
    std::cout << "2) The trumpet \n";
    std::cout << "3) The piano \n";
    std::cout << "4) The drum \n";
    std::cout << "Answer this question (1 to 4) :";
    std::cin >> answer3;
    std::cout << "\n";

    // make logic question for answer question 3
    if (answer3 == 1)
    {
        slytherin++;
    }
    else if (answer3 == 2)
    {
        hufflepuff++;
    }
    else if (answer3 == 3)
    {
        ravenclaw++;
    }
    else if (answer3 == 4)
    {
        gryffindor++;
    }
    else
    {
        std::cout << "Invalid input \n";
    }

    // question 4
    std::cout << "Q4) Which road tempts you most? \n";
    std::cout << "1) The wide, sunny grassy lane \n";
    std::cout << "2) The narrow, dark, lantern-lift alley \n";
    std::cout << "3) The twisting, leaf-strewn path through woods \n";
    std::cout << "4) The cobbled street lined (anciend buildings) \n";
    std::cout << "Answer this question (1 to 4) : ";
    std::cin >> answer4;
    std::cout << "\n";

    if (answer4 == 1)
    {
        hufflepuff++;
    }
    else if (answer4 == 2)
    {
        slytherin++;
    }
    else if (answer4 == 3)
    {
        gryffindor++;
    }
    else if (answer4 == 4)
    {
        ravenclaw++;
    }
    else
    {
        std::cout << "Invalid input \n";
    }

    std::string house;
    int max = 0;

    // make a logic conditional for search max output
    if (gryffindor > max)
    {
        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max)
    {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max)
    {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max)
    {
        max = slytherin;
        house = "Slytherin";
    }
    std::cout << "\n";
    std::cout << "The result is : " << house << "!\n";
    std::cout << "==============================\n";
    return 0;
}