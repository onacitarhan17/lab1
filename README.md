### Lab Practice 2
In this task, you are expected to implement two functions that perform bitwise operations and 
determine the bit representations of two floating point numbers. The functions that you have to 
implement are as follows.

1. int getByte(int input, int byte_position)

This function accepts two integers as inputs. It returns the byte in the integer input at the location pointed by byte_position. The byte is numbered from 0 (least significant byte) to 3 (most significant byte). For example, getByte(0x12345678,1) = 0x56 because the byte at position 1 is 0x56.

2. int bitSum16bit(int input)

This function accepts a 16-bit unsigned number as an input, and counts the number of 1-bits in 
that number. For example, bitSum16bit(7) = 3 and bitSum16bit(17) = 2.

Please note that you are not allowed to use loop statements in any of these functions. 

In addition to writing these functions, you also have to determine the bit representations of 
224 and -0.375 based on the 8-bit floating representation in the page 6 of lecture 6 slides, 
and write the values of the bit representations as 1-byte hexadecimal numbers. In this 8-bit 
representation, 1 bit is allocated for sign, 4 bits are for exponent, and 3 bits are for fraction.

### Install command
`make install`

### Run command
`make test`
