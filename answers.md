# CMPS 6100 Lab 07
## Answers

**Name:** _________________________

Place all written answers from `lab-07.md` here.

# Secrets (4 pts)

1. What value is stored in `[rbp-0x4]`, what operations are performed on 
it, and what is the final result of the operations? In assembly, the 
values are given in hexadecimal. Give your answers in decimal (base-10).

# C Variables and Pointers (2.5 pts)

3. Playing in `pointer.c`

    a. Print out the memory addresses of `num1` and `num2`. What values did you assign to `num1` and `num2`? What are the memory addresses of `num1` and of `num2`?

    b. Declare two pointers to ints, `ptr1` and `ptr2` and assign into them the memory addresses of `num1` and `num2`. Using the dereference operator, print out the values pointed to by `ptr1` and `ptr2`.

    c. It is possible to increment or decrement a pointer. Increment `prt2` by 1. Print out the memory address now stored in `ptr2`. How does this relate to `ptr1`?

    d. Finally, using the dereference operator, update the value pointed to by `ptr2` to be a new value. Now print out `num1`. What happened?

    e. What does all of this tell you about memory safety in C? Does C protect variables from indirect access via pointers?

## Arrays (2.5 pts)

4. In `array.c` an array has been declared for you. Print out it's contents using a [`for` loop](https://www.tutorialspoint.com/cprogramming/c_for_loop.htm). What do you see?

    a. Record the contents of your array here.

    b. Run your program several times. Do the values change? Speculate about what you are seeing.

    c. Modify your `for` loop to continue printing values past the end
    of the array. Access and print the values from your array for
    indices 0-14. Does C allow you to do this?

    d. In C, an array variable is a pointer to the first memory address of the array. Where is the array `arr` stored in memory? Print out the memory address of the beginning of `arr`. What is the memory address where arr[0] is stored? What is the memory address where arr[1] stored?

    e. What does the difference between the memory addresses `arr[0]` 
    and `arr[1]` tell you about the size of an integer? How many bytes of
    memory does an int require?

## Command Line Arguments (1 pts)

5. Implement a program, `cmdargs.c` which takes in command line arguments and prints each one to stdout on a new line.

## String Splitting (15 pts)

6. Implement the function `parseline`. 
