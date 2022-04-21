#pragma once
#include "..\NaturalNumbers\generalNatNum.h"
#include "..\IntegerNumbers\generalZNum.h"
#include <vector>
struct numberRatio
{
    NaturalNumber natural;
    numberZ whole;
};
typedef struct numberRatio numberR;

numberR XtoRArrayX(long long int whole, unsigned long long natural);
