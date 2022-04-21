#include <iostream>
#include "TRANS_Q_Z.h"
#include "RED_Q_Q.h"

/*Convert integer to fractional*/

numberZ TRANS_Q_Z(numberR number)
{
	numberR Rtemp;
	numberZ Zerror;
	Rtemp = RED_Q_Q(number);
	if (Rtemp.natural.olderCoef == 1 && Rtemp.natural.arrayNum[0] == 1) {
		return Rtemp.whole;
	}
	else {
		Zerror.olderCoef = -1;
		return Zerror;
	}
}

// Created by Vasilev Ilya 1310