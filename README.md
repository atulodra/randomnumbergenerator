## Random Number Generator

### Introduction
  This header file includes a function that generates (pseudo) random numbers.
  
### How to
  The function **randomNumberGenerator()** takes in an array of a certain size and generates random numbers according to the size of the array. 
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
