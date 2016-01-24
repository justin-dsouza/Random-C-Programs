# Random-C-Programs
Random C++ programs I created in my free-time for pure enjoyment. 

Please note that although these programs vary in terms of difficulty, they all showcase my proficiency with with the C++ language. (The programs are listed below in an increasing level of difficulty).

Num-bits: 
This program takes as input a positive integer, and outputs the fewest number of bits it takes to represent that integer in binary.
For example, on input 12, the output is "12 can be represented using 4 bits."

Transform-char:
This program takes as input a character. If the input is a lower-case letter from the English alphabet, my program outputs the corresponding upper-case letter. If the input is an upper-case letter, my program outputs the corresponding lower-case letter. If the input is anything other than an upper- or lower-case letter, my program simply echoes the input character.
For example, on input d, the output is "D". On input D, the output is "d". On input $, the output is "$".

Parity-check:
This program takes as input an integer between 0 and 255. Note that the input integer can be represented as an 8-bit string. My program interprets the least significant 7-bits of the binary encoding of the input integer as the value of a character from the ASCII table. It interprets the most significant bit as the parity bit, and checks whether the parity bit is consistent with the least significant 7-bits that represent the character.
For example, if the input is 225, this is 11100001 in binary. The least significant 7-bits are 1100001, which is 97 in decimal. Thus, this is the character a. And the XOR of the least significant 7-bits is 1. Which agrees withthe most significant bit, which is the parity bit. So for this input, the output is "Valid". However, if the input is the integer 97, the output is "Invalid", because the parity bit is 0, and it is not equal to the XOR of the least significant 7-bits.

Make-change (A Greedy Algorithm Problem!):
Suppose you live in a country that has the following denominations of coins: $2, $1, 25c, 10c, 5c and 1c. Given as input a currency value, my program identifies how many coins of each denomination make up that value.
This program takes seven numbers as inputs. The first six are the numbers of coins of each denomination that are available. These six inputs will be non-negative integer. (E.g. 5 3 50 5 0 3 means that you have five $2 coins, three $1 coins, and so on). The seventh input number is a real number for which my program determines the number of coins of each type that make up that number.The real number is either a non-negative integer, or has exactly two digits after the decimal point. For example, 14, 30.01 and 2031.50 are all legal inputs.
My program outputs the number of coins of each denomination that make up the seventh input value. If the combination of coins to make up the value is not available, my program outputs an error message.

Three-bit-parity:
This program takes as input a binary string, and outputs a 3-bit parity. The 3-bit parity is computed as follows. We first pad the input with 0's as most significant bits, if needed, so we have a number of bits that is a multiple of 3. We then perform a bit-wise XOR of each 3-bit chunk. 
For example, if the input is 10011, we need to pad this with one 0 as the most-significant bit to get 010011. Now, we perform a bitwise XOR of 101 and 011. Thus, the output for the input 10011 is 001.
Note that even though the input is said to be a "binary string", the input does not have to be a string of characters. THe input could, for example, be taken as an unsigned int. 

Detect-sorted:
This program takes as input a list of positive integers separated by spaces, and detects whether the list is sorted in either non-decreasing or non-increasing order. The ouput is one of three: Sorted non-decreasing, Sorted non-increasing or Not sorted. The end of the input list is indicated with 0. 
For example, on input 1023 3004 3004 3004 3004 3203 3203 4567 0, the output is "Sorted non-decreasing".

Make-change-dp (Greedy Algorithm revisited!):
The problem of making-change (Make-change.cpp) is revisited. As one may note, the greedy algorithm is not always correct. For example, if you have a quarter (1 x 25c) and three dimes (3 x 10c) only, and need to make change of 30 cents, the greedy algorithm says, incorrectly, that change cannot be made. Even if we have an unlimited number of coins of each denomination, and there is the 1c denomination, thereby guaranteeing that we can always make change, it is unclear whether the greedy algorithm guarantees that a minimum number of coins is handed out.

To make things simpler, for this program, there are only 25c, 10c, 5c, and 1c coin denominations available. My program is given as input the following. All the inputs are non-negative integers. (i) Four non-negative integers that represent the number of 25c, 10c, 5c and 1c coins you have available, respectively. (ii) An amount, in cents, for which my program computes the change using the above algorithm.
An example input is: 1 3 0 0 30. This means that we have 1 coin of value 25, three of value 10 each, and none of values 5 and 1. And we need to make change for 30.
If change can indeed be made, my program outputs the number of coins of each denomination I will hand out. E.g. for the above, the output is 0 3 0 0. If change cannot be made, my program outputs an error message.

Sort-names (A Stable Sorting Algorithm Problem!):
There is often a need to sort on more than one field. For example, given a list of first and last names, we may want the list to be sorted by last name, and within the same last name, by first name.An approach to doing this is the following. We first sort on the first name. Then we use a stable sorting algorithm to sort on the last name. A stable sorting algorithm has the property that if two keys are equal on input, the entries maintain their relative ordering. IT is easy to ensure that bubble sort is stable. We swap two entries only if the first is strictly larger than the other.

This program takes as command-line argument, the number of first name-last name pairs. Then, I am provided the list of first and last names, one per line, separated by a space. An example of these two inputs being provided to my program is as follows:
.\Sort-names 5
Andrew Hawking
John Smith
Stephen Hawking
Alice Cooper
Jean Smith

My program then ouputs a list of first and last names sorted, as indicated above. For the above example, the output will be:
Alice Cooper
Andrew Hawking
Stephen Hawking
Jean Smith
John Smith

Large-sum:
The native datatypes in C++ can be constraining. Because they have limited size. E.g., the unsigned type is often only 32, and at most 64 bits. The intent of this problem is to serve as an example of circumventing such constraints. 
My program is given two command-line inputs. Both are positive integers. Neither may be small enough to be stored within an unsigned. An example run of the program is:

.\Large-sum 12345678902765434318953930348 102328

My program then outputs the sum of the two positive integers provided as input.

ece150-8-functions:
This program targets the design and specification of functions in C++.

1. The first function has the following signature: 

int largestOfThree(float, int, char)

This function returns an integer as follows depending on which of the three arguments is the largest. It returns 0 if the first (float) argument is the largest, 1 if the second (int) argument is the largest, and 2 if the third (char) argument is the largest. If there is more than one largest, the function returns a value that corresponsds to one of the those largest ones. The function returns -1 on error.

2. The second function has the following signature: 

int isString(char* s, int maxSize)

This function checks whether s is a valid C++ string of length at most maxSize. If yes, my function returns the length of the string, which would be an integer from 0 to maxSize inclusive. Otherwise, the function returns -1.

3. The third function has the following signature: 

void interleave(int a[], int alen, int b[], int blen, int result[], int maxresultlen)

This function interleaves the entries of arrays a and b, and stores the result in result, while being careful not to exceed maxresultlen. 

For example, suppose x is ithe int array [1,2,3,4,5], y is the int array [6,7], and we invoke interleave(x, 5, y, 2, z, 6). Up on return, z should contain [1, 6, 2, 7, 3, 4].









