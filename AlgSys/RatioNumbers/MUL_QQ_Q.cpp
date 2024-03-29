#include <iostream>
#include "MUL_QQ_Q.h"
#include "RED_Q_Q.h"
numberR MUL_QQ_Q(numberR R1, numberR R2) {
	numberR res;
	res.whole = MUL_ZZ_Z(R1.whole, R2.whole); //calculate the numerator
	res.natural = MUL_NN_N(R1.natural, R2.natural); //calculate the denominator
	res = RED_Q_Q(res);
	return res;
}

// Created by Vasilev Ilya 1310