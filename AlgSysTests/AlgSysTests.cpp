#include "pch.h"
#include "CppUnitTest.h"
// NaturalNumbers
#include "..\AlgSys\NaturalNumbers\generalNatNum.h"
#include "..\AlgSys\NaturalNumbers\generalNatNum.cpp"
#include "..\AlgSys\NaturalNumbers\COM_NN_D.h"
#include "..\AlgSys\NaturalNumbers\COM_NN_D.cpp"
#include "..\AlgSys\NaturalNumbers\NZER_N_B.h"
#include "..\AlgSys\NaturalNumbers\NZER_N_B.cpp"
#include "..\AlgSys\NaturalNumbers\ADD_1N_N.h"
#include "..\AlgSys\NaturalNumbers\ADD_1N_N.cpp"
#include "..\AlgSys\NaturalNumbers\ADD_NN_N.h"
#include "..\AlgSys\NaturalNumbers\ADD_NN_N.cpp"
#include "..\AlgSys\NaturalNumbers\SUB_NN_N.h"
#include "..\AlgSys\NaturalNumbers\SUB_NN_N.cpp"
#include "..\AlgSys\NaturalNumbers\MUL_ND_N.h"
#include "..\AlgSys\NaturalNumbers\MUL_ND_N.cpp"
#include "..\AlgSys\NaturalNumbers\MUL_Nk_N.h"
#include "..\AlgSys\NaturalNumbers\MUL_Nk_N.cpp"
#include "..\AlgSys\NaturalNumbers\MUL_NN_N.h"
#include "..\AlgSys\NaturalNumbers\MUL_NN_N.cpp"
#include "..\AlgSys\NaturalNumbers\SUB_NDN_N.h"
#include "..\AlgSys\NaturalNumbers\SUB_NDN_N.cpp"
#include "..\AlgSys\NaturalNumbers\DIV_NN_Dk.h"
#include "..\AlgSys\NaturalNumbers\DIV_NN_Dk.cpp"
#include "..\AlgSys\NaturalNumbers\DIV_NN_N.h"
#include "..\AlgSys\NaturalNumbers\DIV_NN_N.cpp"
#include "..\AlgSys\NaturalNumbers\MOD_NN_N.h"
#include "..\AlgSys\NaturalNumbers\MOD_NN_N.cpp"
#include "..\AlgSys\NaturalNumbers\GCF_NN_N.h"
#include "..\AlgSys\NaturalNumbers\GCF_NN_N.cpp"
#include "..\AlgSys\NaturalNumbers\LCM_NN_N.h"
#include "..\AlgSys\NaturalNumbers\LCM_NN_N.cpp"
//IntegerNumbers
#include "..\AlgSys\IntegerNumbers\generalZNum.h"
#include "..\AlgSys\IntegerNumbers\generalZNum.cpp"
#include "..\AlgSys\IntegerNumbers\ABS_Z_N.h"
#include "..\AlgSys\IntegerNumbers\ABS_Z_N.cpp"
#include "..\AlgSys\IntegerNumbers\POZ_Z_D.h"
#include "..\AlgSys\IntegerNumbers\POZ_Z_D.cpp"
#include "..\AlgSys\IntegerNumbers\MUL_ZM_Z.h"
#include "..\AlgSys\IntegerNumbers\MUL_ZM_Z.cpp"
#include "..\AlgSys\IntegerNumbers\TRANS_N_Z.h"
#include "..\AlgSys\IntegerNumbers\TRANS_N_Z.cpp"
#include "..\AlgSys\IntegerNumbers\TRANS_Z_N.h"
#include "..\AlgSys\IntegerNumbers\TRANS_Z_N.cpp"
#include "..\AlgSys\IntegerNumbers\ADD_ZZ_Z.h"
#include "..\AlgSys\IntegerNumbers\ADD_ZZ_Z.cpp"
#include "..\AlgSys\IntegerNumbers\SUB_ZZ_Z.h"
#include "..\AlgSys\IntegerNumbers\SUB_ZZ_Z.cpp"
#include "..\AlgSys\IntegerNumbers\MUL_ZZ_Z.h"
#include "..\AlgSys\IntegerNumbers\MUL_ZZ_Z.cpp"
#include "..\AlgSys\IntegerNumbers\DIV_ZZ_Z.h"
#include "..\AlgSys\IntegerNumbers\DIV_ZZ_Z.cpp"
#include "..\AlgSys\IntegerNumbers\MOD_ZZ_Z.h"
#include "..\AlgSys\IntegerNumbers\MOD_ZZ_Z.cpp"
// RatioNumbers
#include "..\AlgSys\RatioNumbers\generalRatioNumber.h"
#include "..\AlgSys\RatioNumbers\generalRatioNumber.cpp"
#include "..\AlgSys\RatioNumbers\RED_Q_Q.h"
#include "..\AlgSys\RatioNumbers\RED_Q_Q.cpp"
#include "..\AlgSys\RatioNumbers\INT_Q_B.h"
#include "..\AlgSys\RatioNumbers\INT_Q_B.cpp"
#include "..\AlgSys\RatioNumbers\TRANS_Z_Q.h"
#include "..\AlgSys\RatioNumbers\TRANS_Z_Q.cpp"
#include "..\AlgSys\RatioNumbers\TRANS_Q_Z.h"
#include "..\AlgSys\RatioNumbers\TRANS_Q_Z.cpp"
#include "..\AlgSys\RatioNumbers\ADD_QQ_Q.h"
#include "..\AlgSys\RatioNumbers\ADD_QQ_Q.cpp"
#include "..\AlgSys\RatioNumbers\SUB_QQ_Q.h"
#include "..\AlgSys\RatioNumbers\SUB_QQ_Q.cpp"
#include "..\AlgSys\RatioNumbers\MUL_QQ_Q.h"
#include "..\AlgSys\RatioNumbers\MUL_QQ_Q.cpp"
#include "..\AlgSys\RatioNumbers\DIV_QQ_Q.h"
#include "..\AlgSys\RatioNumbers\DIV_QQ_Q.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NaturalNumbers
{
	TEST_CLASS(CON_NN_D_test)
	{
	public:
		
		TEST_METHOD(COM_NN_D1)
		{
			NaturalNumber number1, number2;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)1);
			Assert::IsTrue(COM_NN_D(number1, number2) == 0);
		}
		TEST_METHOD(COM_NN_D2)
		{
			NaturalNumber number1, number2;
			number1 = XtoXArray((unsigned long long)12341234);
			number2 = XtoXArray((unsigned long long)0);
			Assert::IsTrue(COM_NN_D(number1, number2) == 2);
		}
		TEST_METHOD(COM_NN_D3)
		{
			NaturalNumber number1, number2;
			number1 = XtoXArray((unsigned long long)0);
			number2 = XtoXArray((unsigned long long)12341234);
			Assert::IsTrue(COM_NN_D(number1, number2) == 1);
		}
	};
	TEST_CLASS(NZER_N_B_test)
	{
	public:

		TEST_METHOD(NZER_N_B1)
		{
			NaturalNumber number1;
			number1 = XtoXArray((unsigned long long)1);
			Assert::IsTrue(NZER_N_B(number1) == true);
			
		}
		TEST_METHOD(NZER_N_B2)
		{
			NaturalNumber number1;
			number1 = XtoXArray((unsigned long long)12344321);
			Assert::IsTrue(NZER_N_B(number1) == true);
			
		}
		TEST_METHOD(NZER_N_B3)
		{
			NaturalNumber number1;
			number1 = XtoXArray((unsigned long long)0);
			Assert::IsTrue(NZER_N_B(number1) == false);
		}
		
	};
	TEST_CLASS(ADD_1N_N_test)
	{
	public:

		TEST_METHOD(ADD_1N_N1)
		{
			NaturalNumber number1, result;
			number1 = XtoXArray((unsigned long long)1);
			result = XtoXArray((unsigned long long)2);
			Assert::IsTrue(ADD_1N_N(number1).olderCoef == result.olderCoef);
			Assert::IsTrue(ADD_1N_N(number1).arrayNum == result.arrayNum);
		}
		TEST_METHOD(ADD_1N_N2)
		{
			NaturalNumber number1, result;
			number1 = XtoXArray((unsigned long long)0);
			result = XtoXArray((unsigned long long)1);
			Assert::IsTrue(ADD_1N_N(number1).olderCoef == result.olderCoef);
			Assert::IsTrue(ADD_1N_N(number1).arrayNum == result.arrayNum);
		}
		TEST_METHOD(ADD_1N_N3)
		{
			NaturalNumber number1, result;
			number1 = XtoXArray((unsigned long long)12341234);
			result = XtoXArray((unsigned long long)12341235);
			Assert::IsTrue(ADD_1N_N(number1).olderCoef == result.olderCoef);
			Assert::IsTrue(ADD_1N_N(number1).arrayNum == result.arrayNum);
		}

	};
	TEST_CLASS(ADD_NN_N_test)
	{
	public:

		TEST_METHOD(ADD_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)2);
			waiting = XtoXArray((unsigned long long)3);
			result = ADD_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(ADD_NN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)123);
			number2 = XtoXArray((unsigned long long)246);
			waiting = XtoXArray((unsigned long long)369);
			result = ADD_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(ADD_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)987);
			number2 = XtoXArray((unsigned long long)13);
			waiting = XtoXArray((unsigned long long)1000);
			result = ADD_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

	};
	TEST_CLASS(SUB_NN_N_test)
	{
	public:

		TEST_METHOD(SUB_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)2);
			number2 = XtoXArray((unsigned long long)1);
			waiting = XtoXArray((unsigned long long)1);
			result = SUB_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(SUB_NN_NN2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)123);
			number2 = XtoXArray((unsigned long long)246);
			waiting = XtoXArray((unsigned long long)123);
			result = SUB_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(SUB_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)987);
			number2 = XtoXArray((unsigned long long)987);
			waiting = XtoXArray((unsigned long long)0);
			result = SUB_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

	};
	TEST_CLASS(MUL_ND_Ntest)
	{
	public:

		TEST_METHOD(MUL_ND_N1)
		{
			NaturalNumber number1, result, waiting;
			int digit;
			number1 = XtoXArray((unsigned long long)30);
			digit = 3;
			waiting = XtoXArray((unsigned long long)90);
			result = MUL_ND_N(number1, digit);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ND_N2)
		{
			NaturalNumber number1, result, waiting;
			int digit;
			number1 = XtoXArray((unsigned long long)30);
			digit = 0;
			waiting = XtoXArray((unsigned long long)0);
			result = MUL_ND_N(number1, digit);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ND_N3)
		{
			NaturalNumber number1, result, waiting;
			int digit;
			number1 = XtoXArray((unsigned long long)0);
			digit = 30;
			waiting = XtoXArray((unsigned long long)0);
			result = MUL_ND_N(number1, digit);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}


	};
	TEST_CLASS(MUL_Nk_Ntest)
	{
	public:

		TEST_METHOD(MUL_Nk_N1)
		{
			NaturalNumber number1, result, waiting;
			int digit;
			number1 = XtoXArray((unsigned long long)0);
			digit = 3;
			waiting = XtoXArray((unsigned long long)0);
			result = MUL_Nk_N(number1, digit);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_Nk_N2)
		{
			NaturalNumber number1, result, waiting;
			int digit;
			number1 = XtoXArray((unsigned long long)30);
			digit = 1;
			waiting = XtoXArray((unsigned long long)300);
			result = MUL_Nk_N(number1, digit);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_Nk_N3)
		{
			NaturalNumber number1, result, waiting;
			int digit;
			number1 = XtoXArray((unsigned long long)123);
			digit = 3;
			waiting = XtoXArray((unsigned long long)123000);
			result = MUL_Nk_N(number1, digit);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}


	};
	TEST_CLASS(MUL_NN_Ntest)
	{
	public:

		TEST_METHOD(MUL_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)0);
			number2 = XtoXArray((unsigned long long)1);
			waiting = XtoXArray((unsigned long long)0);
			result = MUL_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_NN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)10);
			number2 = XtoXArray((unsigned long long)3);
			waiting = XtoXArray((unsigned long long)30);
			result = MUL_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)123);
			number2 = XtoXArray((unsigned long long)12);
			waiting = XtoXArray((unsigned long long)1476);
			result = MUL_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_NN_N4)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)12341234);
			number2 = XtoXArray((unsigned long long)0);
			waiting = XtoXArray((unsigned long long)0);
			result = MUL_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

	};
	TEST_CLASS(SUB_NDN_Ntest)
	{
	public:

		TEST_METHOD(SUB_NDN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			int number;
			number1 = XtoXArray((unsigned long long)0);
			number2 = XtoXArray((unsigned long long)1324);
			number = 1;
			result = SUB_NDN_N(number1, number2, number);
			Assert::IsTrue(result.olderCoef == -1);
			
		}
		TEST_METHOD(SUB_NDN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			int number;
			number1 = XtoXArray((unsigned long long)1324);
			number2 = XtoXArray((unsigned long long)0);
			number = 1234;
			waiting = XtoXArray((unsigned long long)1324);
			result = SUB_NDN_N(number1, number2, number);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(SUB_NDN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			int number;
			number1 = XtoXArray((unsigned long long)1324);
			number2 = XtoXArray((unsigned long long)10);
			number = 13;
			waiting = XtoXArray((unsigned long long)1194);
			result = SUB_NDN_N(number1, number2, number);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(DIV_NN_Ntest)
	{
	public:

		TEST_METHOD(DIV_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)89);
			waiting = XtoXArray((unsigned long long)89);
			result = DIV_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);

		}
		TEST_METHOD(DIV_NN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1324);
			number2 = XtoXArray((unsigned long long)89);
			waiting = XtoXArray((unsigned long long)14);
			result = DIV_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)54);
			number2 = XtoXArray((unsigned long long)1324);
			waiting = XtoXArray((unsigned long long)24);
			result = DIV_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(MOD_NN_Ntest)
	{
	public:

		TEST_METHOD(MOD_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)9845);
			number2 = XtoXArray((unsigned long long)76);
			waiting = XtoXArray((unsigned long long)41);
			result = MOD_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);

		}
		TEST_METHOD(MOD_NN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)76);
			number2 = XtoXArray((unsigned long long)9845);
			waiting = XtoXArray((unsigned long long)41);
			result = MOD_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)879346);
			waiting = XtoXArray((unsigned long long)0);
			result = MOD_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(GCF_NN_Ntest)
	{
	public:

		TEST_METHOD(GCF_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)0);
			number2 = XtoXArray((unsigned long long)0);
			waiting = XtoXArray((unsigned long long)0);
			result = GCF_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);

		}
		TEST_METHOD(GCF_NN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)8732);
			waiting = XtoXArray((unsigned long long)1);
			result = GCF_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(GCF_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)12342);
			number2 = XtoXArray((unsigned long long)4);
			waiting = XtoXArray((unsigned long long)2);
			result = GCF_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(GCF_NN_N4)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)4);
			number2 = XtoXArray((unsigned long long)12342);
			waiting = XtoXArray((unsigned long long)2);
			result = GCF_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(GCF_NN_N5)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)3);
			number2 = XtoXArray((unsigned long long)99);
			waiting = XtoXArray((unsigned long long)3);
			result = GCF_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(LCM_NN_Ntest)
	{
	public:

		TEST_METHOD(LCM_NN_N1)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)2);
			waiting = XtoXArray((unsigned long long)2);
			result = LCM_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);

		}
		TEST_METHOD(LCM_NN_N2)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)1);
			number2 = XtoXArray((unsigned long long)8732);
			waiting = XtoXArray((unsigned long long)8732);
			result = LCM_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(LCM_NN_N3)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)12342);
			number2 = XtoXArray((unsigned long long)4);
			waiting = XtoXArray((unsigned long long)24684);
			result = LCM_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(LCM_NN_NN4)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)4);
			number2 = XtoXArray((unsigned long long)12342);
			waiting = XtoXArray((unsigned long long)24684);
			result = LCM_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(LCM_NN_N5)
		{
			NaturalNumber number1, number2, result, waiting;
			number1 = XtoXArray((unsigned long long)3);
			number2 = XtoXArray((unsigned long long)99);
			waiting = XtoXArray((unsigned long long)99);
			result = LCM_NN_N(number1, number2);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	
}


namespace IntegerNumbers
{
	TEST_CLASS(ABS_Z_N_test)
	{
	public:

		TEST_METHOD(ABS_Z_N1)
		{
			NaturalNumber result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)123);
			waiting = XtoXArray((unsigned long long)123);
			result = ABS_Z_N(number1);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == result.arrayNum);
		}
		TEST_METHOD(ABS_Z_N2)
		{
			NaturalNumber result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)-432);
			waiting = XtoXArray((unsigned long long)432);
			result = ABS_Z_N(number1);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == result.arrayNum);
		}
		TEST_METHOD(ABS_Z_N3)
		{
			NaturalNumber result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)0);
			waiting = XtoXArray((unsigned long long)0);
			result = ABS_Z_N(number1);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == result.arrayNum);
		}
	};
	TEST_CLASS(POZ_Z_D_test)
	{
	public:

		TEST_METHOD(POZ_Z_D1)
		{
			int result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)123);
			waiting = 2;
			result = POZ_Z_D(number1);
			Assert::IsTrue(result == waiting);
		}
		TEST_METHOD(POZ_Z_D2)
		{
			int result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)-123);
			waiting = 1;
			result = POZ_Z_D(number1);
			Assert::IsTrue(result == waiting);
		}
		TEST_METHOD(POZ_Z_D3)
		{
			int result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)0);
			waiting = 0;
			result = POZ_Z_D(number1);
			Assert::IsTrue(result == waiting);
		}
	};
	TEST_CLASS(MUL_ZM_Z_test)
	{
	public:

		TEST_METHOD(MUL_ZM_Z1)
		{
			numberZ number1, result, waiting;
			number1 = XtoXArrayZ((long long int)123);
			waiting = XtoXArrayZ((long long int)-123);
			result = MUL_ZM_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZM_Z2)
		{
			numberZ number1, result, waiting;
			number1 = XtoXArrayZ((long long int)-1);
			waiting = XtoXArrayZ((long long int)1);
			result = MUL_ZM_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZM_Z3)
		{
			numberZ number1, result, waiting;
			number1 = XtoXArrayZ((long long int)0);
			waiting = XtoXArrayZ((long long int)0);
			result = MUL_ZM_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(TRANS_N_Z_test)
	{
	public:

		TEST_METHOD(TRANS_N_Z1)
		{
			numberZ result, waiting;
			NaturalNumber number1;
			number1 = XtoXArray((unsigned long long)123);
			waiting = XtoXArrayZ((long long int)123);
			result = TRANS_N_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(TRANS_N_Z2)
		{
			numberZ result, waiting;
			NaturalNumber number1;
			number1 = XtoXArray((unsigned long long)0);
			waiting = XtoXArrayZ((long long int)0);
			result = TRANS_N_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(TRANS_N_Z3)
		{
			numberZ result, waiting;
			NaturalNumber number1;
			number1 = XtoXArray((unsigned long long)923854);
			waiting = XtoXArrayZ((long long int)923854);
			result = TRANS_N_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(TRANS_Z_N_test)
	{
	public:

		TEST_METHOD(TRANS_Z_N1)
		{
			numberZ number1;
			NaturalNumber result, waiting;
			number1 = XtoXArrayZ((long long int)123);
			waiting = XtoXArray((unsigned long long)123);
			result = TRANS_Z_N(number1);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(TRANS_N_Z2)
		{
			numberZ number1;
			NaturalNumber result, waiting;
			number1 = XtoXArrayZ((long long int)-123);
			waiting = XtoXArray((unsigned long long)123);
			result = TRANS_Z_N(number1);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(TRANS_N_Z3)
		{
			numberZ number1;
			NaturalNumber result, waiting;
			number1 = XtoXArrayZ((long long int)0);
			waiting = XtoXArray((unsigned long long)0);
			result = TRANS_Z_N(number1);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(ADD_ZZ_Z_test)
	{
	public:

		TEST_METHOD(ADD_ZZ_Z_N1)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-1);
			number2 = XtoXArrayZ((long long int)5);
			waiting = XtoXArrayZ((long long int)4);
			result = ADD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(ADD_ZZ_Z2)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)10);
			number2 = XtoXArrayZ((long long int)10);
			waiting = XtoXArrayZ((long long int)20);
			result = ADD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(ADD_ZZ_Z3)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-10);
			number2 = XtoXArrayZ((long long int)10);
			waiting = XtoXArrayZ((long long int)0);
			result = ADD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(SUB_ZZ_Z_test)
	{
	public:

		TEST_METHOD(SUB_ZZ_Z_N1)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)70);
			number2 = XtoXArrayZ((long long int)5);
			waiting = XtoXArrayZ((long long int)65);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(SUB_ZZ_Z2)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)70);
			number2 = XtoXArrayZ((long long int)-5);
			waiting = XtoXArrayZ((long long int)75);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(SUB_ZZ_Z3)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-70);
			number2 = XtoXArrayZ((long long int)5);
			waiting = XtoXArrayZ((long long int)-75);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(SUB_ZZ_Z4)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-70);
			number2 = XtoXArrayZ((long long int)-5);
			waiting = XtoXArrayZ((long long int)-65);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

		TEST_METHOD(SUB_ZZ_Z5)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)50);
			number2 = XtoXArrayZ((long long int)0);
			waiting = XtoXArrayZ((long long int)50);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

		TEST_METHOD(SUB_ZZ_Z6)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-50);
			number2 = XtoXArrayZ((long long int)0);
			waiting = XtoXArrayZ((long long int)-50);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

		TEST_METHOD(SUB_ZZ_Z7)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)0);
			number2 = XtoXArrayZ((long long int)50);
			waiting = XtoXArrayZ((long long int)-50);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

		TEST_METHOD(SUB_ZZ_Z8)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)0);
			number2 = XtoXArrayZ((long long int)-50);
			waiting = XtoXArrayZ((long long int)50);
			result = SUB_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(MUL_ZZ_Z_test)
	{
	public:

		TEST_METHOD(MUL_ZZ_Z1)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-10);
			number2 = XtoXArrayZ((long long int)5);
			waiting = XtoXArrayZ((long long int)-50);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z2)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)10);
			number2 = XtoXArrayZ((long long int)-5);
			waiting = XtoXArrayZ((long long int)-50);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z3)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-10);
			number2 = XtoXArrayZ((long long int)-10);
			waiting = XtoXArrayZ((long long int)100);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z4)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)10);
			number2 = XtoXArrayZ((long long int)13);
			waiting = XtoXArrayZ((long long int)130);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z5)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)0);
			number2 = XtoXArrayZ((long long int)13);
			waiting = XtoXArrayZ((long long int)0);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z6)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)10);
			number2 = XtoXArrayZ((long long int)0);
			waiting = XtoXArrayZ((long long int)0);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z7)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-10);
			number2 = XtoXArrayZ((long long int)0);
			waiting = XtoXArrayZ((long long int)0);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MUL_ZZ_Z8)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)0);
			number2 = XtoXArrayZ((long long int)-129398472);
			waiting = XtoXArrayZ((long long int)0);
			result = MUL_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(DIV_ZZ_Z_test)
	{
	public:

		TEST_METHOD(DIV_ZZ_Z1)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)1);
			number2 = XtoXArrayZ((long long int)100);
			waiting = XtoXArrayZ((long long int)0);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_ZZ_Z2)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-1);
			number2 = XtoXArrayZ((long long int)-100);
			waiting = XtoXArrayZ((long long int)0);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_ZZ_Z3)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)100);
			number2 = XtoXArrayZ((long long int)-10);
			waiting = XtoXArrayZ((long long int)-10);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_ZZ_Z4)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-100);
			number2 = XtoXArrayZ((long long int)10);
			waiting = XtoXArrayZ((long long int)-10);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_ZZ_Z5)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)938475);
			number2 = XtoXArrayZ((long long int)1098);
			waiting = XtoXArrayZ((long long int)854);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

		TEST_METHOD(DIV_ZZ_Z6)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-938475);
			number2 = XtoXArrayZ((long long int)1098);
			waiting = XtoXArrayZ((long long int)-854);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_ZZ_Z7)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)938475);
			number2 = XtoXArrayZ((long long int)-1098);
			waiting = XtoXArrayZ((long long int)-854);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(DIV_ZZ_Z8)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-938475);
			number2 = XtoXArrayZ((long long int)1098);
			waiting = XtoXArrayZ((long long int)-854);
			result = DIV_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(MOD_ZZ_Z_test)
	{
	public:

		TEST_METHOD(MOD_ZZ_Z1)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)1);
			number2 = XtoXArrayZ((long long int)100);
			waiting = XtoXArrayZ((long long int)1);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_ZZ_Z2)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-1);
			number2 = XtoXArrayZ((long long int)-100);
			waiting = XtoXArrayZ((long long int)1);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_ZZ_Z3)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)100);
			number2 = XtoXArrayZ((long long int)-10);
			waiting = XtoXArrayZ((long long int)0);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_ZZ_Z4)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-100);
			number2 = XtoXArrayZ((long long int)10);
			waiting = XtoXArrayZ((long long int)0);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_ZZ_Z5)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)938475);
			number2 = XtoXArrayZ((long long int)1098);
			waiting = XtoXArrayZ((long long int)783);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}

		TEST_METHOD(MOD_ZZ_Z6)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-938475);
			number2 = XtoXArrayZ((long long int)1098);
			waiting = XtoXArrayZ((long long int)783);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_ZZ_Z7)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)938475);
			number2 = XtoXArrayZ((long long int)-1098);
			waiting = XtoXArrayZ((long long int)783);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(MOD_ZZ_Z8)
		{
			numberZ number1, number2, result, waiting;
			number1 = XtoXArrayZ((long long int)-938475);
			number2 = XtoXArrayZ((long long int)1098);
			waiting = XtoXArrayZ((long long int)783);
			result = MOD_ZZ_Z(number1, number2);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	
}
namespace RatioNumbers
{
	TEST_CLASS(RED_Q_Qtest)
	{
	public:

		TEST_METHOD(RED_Q_Q1)
		{
			numberR number1, result, waiting;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)2);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)2);
			result = RED_Q_Q(number1);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.natural.arrayNum == result.natural.arrayNum);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}

		TEST_METHOD(RED_Q_Q2)
		{
			numberR number1, result, waiting;
			number1 = XtoRArrayX((long long int)8, (unsigned long long)4);
			waiting = XtoRArrayX((long long int)2, (unsigned long long)1);
			result = RED_Q_Q(number1);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.natural.arrayNum == result.natural.arrayNum);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}

		TEST_METHOD(RED_Q_Q3)
		{
			numberR number1, result, waiting;
			number1 = XtoRArrayX((long long int)0, (unsigned long long)123);
			waiting = XtoRArrayX((long long int)0, (unsigned long long)1);
			result = RED_Q_Q(number1);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.natural.arrayNum == result.natural.arrayNum);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}

		TEST_METHOD(RED_Q_Q4)
		{
			numberR number1, result, waiting;
			number1 = XtoRArrayX((long long int)11, (unsigned long long)110);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)10);
			result = RED_Q_Q(number1);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.natural.arrayNum == result.natural.arrayNum);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		
	};
	TEST_CLASS(INT_Q_Btest)
	{
	public:

		TEST_METHOD(INT_Q_B1)
		{
			numberR number1;
			bool result, waiting;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)2);
			waiting = false;
			result = INT_Q_B(number1);
			Assert::IsTrue(result == waiting);
		}
		TEST_METHOD(INT_Q_B2)
		{
			numberR number1;
			bool result, waiting;
			number1 = XtoRArrayX((long long int)123, (unsigned long long)2);
			waiting = false;
			result = INT_Q_B(number1);
			Assert::IsTrue(result == waiting);
		}
		TEST_METHOD(INT_Q_B3)
		{
			numberR number1;
			bool result, waiting;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)1);
			waiting = true;
			result = INT_Q_B(number1);
			Assert::IsTrue(result == waiting);
		}
		TEST_METHOD(INT_Q_B4)
		{
			numberR number1;
			bool result, waiting;
			number1 = XtoRArrayX((long long int)16, (unsigned long long)4);
			waiting = true;
			result = INT_Q_B(number1);
			Assert::IsTrue(result == waiting);
		}
	};
	TEST_CLASS(TRANS_Z_Qtest)
	{
	public:

		TEST_METHOD(TRANS_Z_Q1)
		{
			numberR result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)1);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)1);
			result = TRANS_Z_Q(number1);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(TRANS_Z_Q2)
		{
			numberR result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int)0);
			waiting = XtoRArrayX((long long int)0, (unsigned long long)1);
			result = TRANS_Z_Q(number1);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(TRANS_Z_Q3)
		{
			numberR result, waiting;
			numberZ number1;
			number1 = XtoXArrayZ((long long int) - 123);
			waiting = XtoRArrayX((long long int) - 123, (unsigned long long)1);
			result = TRANS_Z_Q(number1);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
	};
	TEST_CLASS(TRANS_Q_Ztest)
	{
	public:

		TEST_METHOD(TRANS_Q_Z1)
		{
			numberZ result, waiting;
			numberR number1;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)1);
			waiting = XtoXArrayZ((long long int)1);
			result = TRANS_Q_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(TRANS_Q_Z2)
		{
			numberZ result, waiting;
			numberR number1;
			number1 = XtoRArrayX((long long int)0, (unsigned long long)1);
			waiting = XtoXArrayZ((long long int)0);
			result = TRANS_Q_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
		TEST_METHOD(TRANS_Q_Z3)
		{
			numberZ result, waiting;
			numberR number1;
			number1 = XtoRArrayX((long long int)122, (unsigned long long)61);
			waiting = XtoXArrayZ((long long int)2);
			result = TRANS_Q_Z(number1);
			Assert::IsTrue(result.sign == waiting.sign);
			Assert::IsTrue(result.olderCoef == waiting.olderCoef);
			Assert::IsTrue(result.arrayNum == waiting.arrayNum);
		}
	};
	TEST_CLASS(ADD_QQ_Qtest)
	{
	public:

		TEST_METHOD(ADD_QQ_Q1)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)2);
			number2 = XtoRArrayX((long long int)1, (unsigned long long)2);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)1);
			result = ADD_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(ADD_QQ_Q2)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)-1, (unsigned long long)2);
			number2 = XtoRArrayX((long long int)1, (unsigned long long)2);
			waiting = XtoRArrayX((long long int)0, (unsigned long long)1);
			result = ADD_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(ADD_QQ_Q3)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)15, (unsigned long long)342);
			number2 = XtoRArrayX((long long int)2341, (unsigned long long)34562);
			waiting = XtoRArrayX((long long int)109921, (unsigned long long)985017);
			result = ADD_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		
	};
	TEST_CLASS(SUB_QQ_Qtest)
	{
	public:

		TEST_METHOD(SUB_QQ_Q1)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)2);
			number2 = XtoRArrayX((long long int)1, (unsigned long long)2);
			waiting = XtoRArrayX((long long int)0, (unsigned long long)1);
			result = SUB_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(SUB_QQ_Q2)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int) 3, (unsigned long long)56);
			number2 = XtoRArrayX((long long int)1, (unsigned long long)100);
			waiting = XtoRArrayX((long long int)61, (unsigned long long)1400);
			result = SUB_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(SUB_QQ_Q3)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)15, (unsigned long long)342);
			number2 = XtoRArrayX((long long int)2341, (unsigned long long)34562);
			waiting = XtoRArrayX((long long int)-23516, (unsigned long long)985017);
			result = SUB_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}

	};
	
	TEST_CLASS(MUL_QQ_Qtest)
	{
	public:

		TEST_METHOD(MUL_QQ_Q1)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)1, (unsigned long long)4);
			number2 = XtoRArrayX((long long int)1, (unsigned long long)4);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)16);
			result = MUL_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(MUL_QQ_Q2)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int) 3, (unsigned long long)9);
			number2 = XtoRArrayX((long long int)9, (unsigned long long)3);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)1);
			result = MUL_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(MUL_QQ_Q3)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)0, (unsigned long long)1);
			number2 = XtoRArrayX((long long int)2341, (unsigned long long)34562);
			waiting = XtoRArrayX((long long int)0, (unsigned long long)1);
			result = MUL_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}

	};
	TEST_CLASS(DIV_QQ_Qtest)
	{
	public:

		TEST_METHOD(DIV_QQ_Q1)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)0, (unsigned long long)1);
			number2 = XtoRArrayX((long long int)12344, (unsigned long long)132421);
			waiting = XtoRArrayX((long long int)0, (unsigned long long)1);
			result = DIV_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(DIV_QQ_Q2)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int) 3, (unsigned long long)9);
			number2 = XtoRArrayX((long long int)9, (unsigned long long)3);
			waiting = XtoRArrayX((long long int)1, (unsigned long long)9);
			result = DIV_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}
		TEST_METHOD(DIV_QQ_Q3)
		{
			numberR number1, number2, result, waiting;
			number1 = XtoRArrayX((long long int)546, (unsigned long long)254);
			number2 = XtoRArrayX((long long int)785, (unsigned long long)156);
			waiting = XtoRArrayX((long long int)42588, (unsigned long long)99695);
			result = DIV_QQ_Q(number1, number2);
			Assert::IsTrue(result.natural.arrayNum == waiting.natural.arrayNum);
			Assert::IsTrue(result.natural.olderCoef == waiting.natural.olderCoef);
			Assert::IsTrue(result.whole.sign == waiting.whole.sign);
			Assert::IsTrue(result.whole.olderCoef == waiting.whole.olderCoef);
			Assert::IsTrue(result.whole.arrayNum == waiting.whole.arrayNum);
		}

	};
}