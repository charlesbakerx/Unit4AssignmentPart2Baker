/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: Take an input from the user for how many times to loop. Output on every
loop where we are in the loop followed by "Hello"
*/
#include "Input_Validation_Extended.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int input = 0;
  do {
    string promptString =
        "Please enter the number of times you would like to loop (>0): ";
    input = validateInt(input, promptString);
    // Make sure the input is something greater than 0 else we loop until it is.
  } while (input <= 0);

  for (int x = 1; x <= input; x++) {
    string ordinal = "";
    // Check to see if x is an outlier that needs to be a th.
    if (x == 11 || x == 12 || x == 13 || x % 100 == 11 || x % 100 == 12 ||
        x % 100 == 13) {
      ordinal = to_string(x) + "th";
      // Then the rest is just checking if it needs to be a st, nd, rd, else it
      // is a th.
    } else if (x % 10 == 1) {
      ordinal = to_string(x) + "st";
    } else if (x % 10 == 2) {
      ordinal = to_string(x) + "nd";
    } else if (x % 10 == 3) {
      ordinal = to_string(x) + "rd";
    } else {
      ordinal = to_string(x) + "th";
    }

    cout << ordinal << " Hello!" << endl;
  }

  return 0;
}