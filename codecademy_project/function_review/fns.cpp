// make a function definition 
#include <iostream>
#include <string>
#include <cmath>
//template <typename T>

// 1 describe int_parameter() function
void parameter_function (int number1, int number2, int number3){
  std::cout << "===================================\n";
  std::cout << "1 describe int_parameter() function";
  int total = number1 + number2 + number3;
  std::cout << "Number 1 :" << number1 << "\n";
  std::cout << "Number 2 :" << number2 << "\n";
  std::cout << "Number 3 :" << number3 << "\n";
  std::cout << "The number1 + number2 + number3" << total << "\n";
  std::cout << "===================================\n";
  std::cout << "\n";
}


// 2 describe default_parameter() function 
void parameter_default_function(std::string name="John", std::string learn="phyton", std::string school="PENS"){
  std::cout << "==============================================================================================\n";
  std::cout << "2 describe default parameter \n";
  std::cout << "My name is " << name << ", and I'm love " << learn << ", And Im shool in " <<  school << "\n";
  std::cout << "\n";
  std::cout << "==============================================================================================\n";
}
/*
// 3 describe template parameter function to make a formula Quadrant
T parameter_function(T fancy_number1, T fancy_number2, T fancy_number3){
  // notes : fancy_number1=a, fancy_number2=b, fancy_number3=c
  // converse input parameter fancy_number to a, b, c
  double a, b, c;
  int x1, x2;
  a = fancy_number1;
  b = fancy_number2;
  c = fancy_number3;

  std::cout << "3 describe template parameter \n";
  std::cout << "fancy number 1 : " << fancy_number1 << "\n";
  std::cout << "fancy number 2 : " << fancy_number2 << "\n";
  std::cout << "fancy number 3 : " << fancy_number3 << "\n";
  // formula x1 -> kuadran x1
  x1 = (-b + (std::sqrt((b*b) - (4*a*c)))) / 2*a;

  // formula x2 -> kuadran x2
  x2 = (-b - (std::sqrt((b*b) - (4*a*c)))) / 2*a;

  std::cout << "sqrt in 1 : " << x1 << "\n";
  std::cout << "sqrt in 2 : " << x2 << "\n";
  std::cout << "\n";
}*/


// 4 input output function parameter with a formula quadrant
void input_output_function(){
  // declare 3 variable to store input from user number1, number2, number3
  double number1, number2, number3;
  double a, b, c;

  // declare 2 variable to store the calculation of x1 and x2
  double x1, x2;
  std::cout << "This is program number 4 Input output function parameter: " << "\n";
  std::cout << "Formula to be calculation is Quadrant formula : \n";
  std::cout << "Enter number 1 : ";
  std::cin >> number1;
  std::cout << "Enter number 2 : ";
  std::cin >> number2;
  std::cout << "Enter number 3 : ";
  std::cin >> number3;
  a = number1;
  b = number2;
  c = number3;
  x1 = -b + (std::sqrt((b*b) - (4*a*c)));
  x2 = -b - (std::sqrt((b*b) - (4*a*c)));
  std::cout << "Formula in X1 : " << x1 << "\n";
  std::cout << "Formula in X2 : " << x2 << "\n";
}
