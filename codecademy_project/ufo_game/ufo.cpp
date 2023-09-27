/*
Description Program : 
UFO
It’s game time! And by that we mean, it’s time for you to roll up your sleeves and build a game: UFO.

ufo abduction
The premise:

Invaders from outer space have arrived and are abducting humans using tractor beams. Players must crack the codeword to stop the abduction!

Ok, we’ll admit it’s quite a bit like that classic game, “Hangman”, but with a better premise. Plus, building this command-line game was the Codecademy 2019 Software Engineer Internship Backend Programming Challenge!
*/
#include <iostream>
#include <string>
#include "ufo_functions.hpp"

int main() {
  // No 3 -> Declare and initialize 2 new variable std::string
  std::string codeword="codecademy";
  std::string answer="__________";

  // No 4 -> initialize integer variable
  int misses = 0;

  std::vector<char> incorrect;
  bool guess = false

  // No 5 -> setup while loop
  while (answer!=codeword && misses<7){
    // No 9 Call display_misses()
    display_misses(misses);
    display_status(incorrect, answer);
    misses++;
  }

  end_game(answer, codeword);
}
