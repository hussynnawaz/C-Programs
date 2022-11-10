What is Binary Number?
The Binary Number is number which has base 2. which consists of only two numerical symbols ‘1’ and ‘0’ and each digit is referred to as a ‘Bit’.

For Example 5 in binary can be written as 0101.

What is Decimal Number?
The number which has base 10 is called a Decimal Number system.

For Example 0101=2^3*0+2^2*1+2^1*0+2^0*1=0+4+0+1=5.

There are so many ways to convert Decimal to binary and vice versa. we will see it one by one.

1. Program to convert Decimal to Binary in C++
In this program, we will ask the user to enter the number which user wants to convert into binary.

Decimal to Binary Conversion Algorithm:

1 Step: At first divide the number by 2 by using modulus operator ‘%’ and store the remainder in the array.

2 Step: divide that number by 2.

3 Step: Now repeat the step until the number is greater than 0.
Program to Convert Binary to Decimal in C++
In this program, we will convert the Binary input to Decimal.

Binary to Decimal Conversion Algorithm:

1 Step: Take a Binary Input to convert into Decimal.

2 Step: Multiply each binary digit starting from last with the power of 2 i.e(2^0,2^1).

3 Step: make an addition of the multiplied digits.

4 Step: Thus the addition gives the Decimal output.