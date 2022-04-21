#include <iostream>
#include "TRANS_Z_Q.h"
#include <vector>

/*Convert integer to fractional*/

numberR TRANS_Z_Q(numberZ& number)
{
	numberR result;
	NaturalNumber temp;
    int numberS;
	numberS = POZ_Z_D(number);
    if (numberS == 0) return XtoRArrayX((unsigned long long)0,(long long int)1);
	else {
		result.whole = number;
		result.natural = XtoXArray((long long int)1);
		return result;
	}
}

// Created by Vasilev Ilya 1310