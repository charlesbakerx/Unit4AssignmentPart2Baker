## Unit 4 Assignment Plan : Charles Baker

### Scenario
  - Create a program to accept input from the user while the value entered does not equal -1
  - If any number other that -1 is entered by the user output to the screen
    - (n * n) of type Double
    - (n / n) of type Double
    - (n + 3) / 5 of type Double
    - ((n + 3) / 5) + ((n + 7) / 2)
  - Keep count with a variable called counter initialized to 0 and increment it by 1 with each loop.
  - When the program exits output the value of the counter.

### Variable Declarations
  - double formula1, formula2, formula3, formula4, input
  - int counter

### Input
  - Take a validatedDouble from the user and store it in input

### Processing
  - formula1 = (input * input);
  - formula2 = (input / input);
  - formula3 = (input + 3) / 5;
  - formula4 = ((input + 3) / 5) + ((input + 7) / 2);

### Output
  - Output all processes to the console with respective messages
  - On exit output counter to console with a message

### Error Conditions
  - User entering a non-numeric would result in an error
  - User entering a 0 would result in a division error in formula 2