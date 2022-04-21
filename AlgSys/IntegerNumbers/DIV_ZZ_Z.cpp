#include <iostream>
#include "DIV_ZZ_Z.h"
#include "ADD_ZZ_Z.h"
#include "..\NaturalNumbers\NZER_N_B.h"

numberZ DIV_ZZ_Z(numberZ& z1, numberZ& z2) {

	long long int zero = 0;
	long long int one = 1;
	numberZ result, Zone;
	NaturalNumber number1N, number2N, Nzero, res1;
	int flag_com;
	Zone = XtoXArrayZ(one);
	number1N = ABS_Z_N(z1);
	number2N = ABS_Z_N(z2);
	result = XtoXArrayZ(zero);
	if (z1.olderCoef == 1 && z1.arrayNum[0] == 0) {
		return result;
	}
	if (z2.olderCoef == 1 && z2.arrayNum[0] == 0) {
		result.olderCoef = -1;
		return result;
	}
	if ((flag_com = COM_NN_D(number1N, number2N)) == 1){
		return result;
	}
	res1 = DIV_NN_N(number1N, number2N); //division of natural numbers
    if (res1.olderCoef == -1){
        result.olderCoef = -1;
        return result;
    }
	result.arrayNum = res1.arrayNum;
	result.olderCoef = res1.olderCoef;
    if(!NZER_N_B(res1)){
        result.sign = 0;
    }
    else if (POZ_Z_D(z1) == POZ_Z_D(z2)) {   //definition of sign
		result.sign = 0;
	}
	else {
		result.sign = 1;
	}
	return result;
}
// Created by Vasilev Ilya 1310