#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/* 
 * getByte - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: getByte(0x12345678,1) = 0x56
 *   Legal ops: ! ~ & ^ | + << >>
 */
int getByte(int x, int n) {

  /* Shift x n*8 positions right */
  int shift = ;
  int xs = ;
  /* Mask byte */
  return ;
}

/*
 * bitSum16bit - returns count of number of 1's in a 2-byte number
 *   Examples: bitSum16bit(257) = 2, bitSum16bit(511) = 9
 *   Legal ops: & ( ) >> + 
 *   Do not use a loop!
 */
int bitSum16bit(int input)
{
	int mask = ;
	int perEightSum = ; 
	int mask2 = ;
	int quarterSum = ;
	int mask3 = ;
	int halfSum = ;
	int mask4 = ;
	return ;
}

float u2f(unsigned input) {
	unsigned frac_mask = 0x07;
  	unsigned exp_mask = 0x78;
  
  	unsigned frac = input & frac_mask;
  	unsigned exp = (input & exp_mask) >> 3;
  	unsigned sign = input >> 7;
	float num = 0;
	num += (frac >> 2) * 0.5;
	num += ((frac >> 1) & 0x1) * 0.25;
	num += (frac & 0x1) * 0.125;
	if(exp) {
		num += 1.0;
	}
	float two_exp;
	if(exp) 
		two_exp = powf( (float) 2.0, exp - 7.0);
	else
		two_exp = powf( (float) 2.0, -6.0);
	if(sign) {
		num = (-1) * num * two_exp;
	} else {
		num = num * two_exp;
	}
	return num;
}


int main(int argc, char *argv[]) 
{

	if(argc != 4) {
		printf("Usage: %s num1 num2\n", argv[0]);
		return -1;
	}
	int full_num = atoi(argv[1]);
	int byte_pos = atoi(argv[2]);
	int sum_input = atoi(argv[3]);

	// please enter the bit representation of 224 
	// as a 1-byte number, 
	// it can be a hexadecimal like 0x3f
	unsigned u1 = ;

	// please enter the bit representation of -0.375
        // as a 1-byte number,
        // it can be a hexadecimal like 0x3f
        unsigned u2 = ;
	printf("%d, %d, %0.3f, %0.3f\n", getByte(full_num, byte_pos), bitSum16bit(sum_input), u2f(u1), u2f(u2));
	return 0;
}
