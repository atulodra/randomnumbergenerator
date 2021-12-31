## Random Number Generator

### Introduction
  This header file includes a function that generates (pseudo) random numbers.
  
### How to
  After downloading the header file, the first thing to do is to include the "randomnumbergenerator.h" header file into your file. If the file is in the same directory as your C file you can give include it as:
  ```C
    #include "randomnumbergenerator.h"
  ```
  
  If the header file is in some other location, the path must be included in between the double quotes as well.

  ```C
    #include "path\location\of\randomnumbergenerator.h"
  ```

  From there you can call the function **randomNumberGenerator()** that takes in an array of a certain size and generates random numbers according to the size of the array. 
  The declartion of function is such:
  ```C
    void randomNumnerGenerator(int *array, int size)
  ```
  
  To use the function properly, first we need to create an array of integer type of a certain size and pass the array and the size of the array into the function **randomNumberGenerator()**
  
  For e.g.
  ```C
    int random_numbers[10];
    randomNumberGenerator(random_numbers, 10);
  ```
