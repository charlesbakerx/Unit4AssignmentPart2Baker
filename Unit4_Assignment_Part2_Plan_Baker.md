## Unit 4 Assignment Part 2 Plan : Charles Baker

### Scenario
  - Create a program to accept input from the user for how many times to loop.
  - Loop as many times as requested.
  - Output the ordinal of that loop followed by "Hello"

### Variable Declarations
  - int input

### Input
  - Take a validateInt from the user and store it in input

### Processing
  - Determine what ordinal each number in the loop is by using the modulus operator.
  - These numbers are a "th" regardless:
    - 11, 111
    - 12, 112
    - 13, 113
  - If the number mod 10 results in:
    - 1 it's a "st"
    - 2 it's a "nd"
    - 3 it's a "rd"
  - Any remain numbers not covered are a "th".

### Output
  - Output the determined ordinal followed by "Hello"

### Error Conditions
  - User entering a non-numeric would result in an error
  - User entering a number <= 0 would result in a logic error