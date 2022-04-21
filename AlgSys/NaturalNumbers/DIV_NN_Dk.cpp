#include <iostream>
#include <vector>
#include "DIV_NN_Dk.h"
#include "NZER_N_B.h"

/* Calculation of the first digit of dividing a larger natural 
by a smaller one, multiplied by 10 ^ k, where k is the position 
number of this digit. 'k' - is equal to the difference of the 
leading coefficients of two numbers. */
NaturalNumber DIV_NN_Dk(NaturalNumber& numbr1, NaturalNumber& numbr2) {
	NaturalNumber temp, result, temp2;
	int flagCom, i, active, tempO;
    unsigned long long zero, one;
    zero = 0;
    one =1;
	/* Special for 'while' */
	active = 1;
    result = XtoXArray(zero);
	/* Checking the equal sign between two numbers.
	'2' - the first is greater than the second.
	'1' - the second is greater than the first.
	'0' - are equal. */
    if(!NZER_N_B(numbr1)) return result;
	flagCom = COM_NN_D(numbr1, numbr2);
	/* If the second is larger than the first,
	then we call the same function with the changed values. */
	if (flagCom == 1) return DIV_NN_Dk(numbr2, numbr1);
	/* If two numbers are equal, then the first and 
	only digit of the quotient is '1' */
    else if (flagCom == 0) return XtoXArray(one);
	else {
		/* We take the first digits of the first number 
		until they become more than the second number */
		i = 1;
		temp.olderCoef = 1;
		temp.arrayNum.push_back(numbr1.arrayNum[numbr1.olderCoef - i]);
		while (active) {
			flagCom = COM_NN_D(temp, numbr2);
			/*If they are equal, then the first digit of the quotient is '1'*/
			if (flagCom == 0) {
                temp2 = XtoXArray(one);
				return MUL_Nk_N(temp2,
				(numbr1.olderCoef - temp.olderCoef));
			} else if (flagCom == 2) active = 0;
			else {
				++i;
				++temp.olderCoef;
				temp.arrayNum.insert(temp.arrayNum.begin(), numbr1.arrayNum[numbr1.olderCoef - i]);
			}
		}
		tempO = temp.olderCoef;
		/* Subtract from the digits of the first number 
		the digits of the second number until they first 
		become less than the second */
		while (COM_NN_D(temp, numbr2) != 1)
		{
			temp = SUB_NN_N(temp, numbr2);
			result = ADD_1N_N(result);
		}
		return MUL_Nk_N(result,
			(numbr1.olderCoef - tempO));
	}
}

// Created by Vasilev Ilya 1310