#include <iostream>
#include <string>
#include "NaturalNumbers/generalNatNum.h"
#include "NaturalNumbers/COM_NN_D.h"
#include "NaturalNumbers/NZER_N_B.h"
#include "NaturalNumbers/ADD_1N_N.h"
#include "NaturalNumbers/ADD_NN_N.h"
#include "NaturalNumbers/SUB_NN_N.h"
#include "NaturalNumbers/MUL_ND_N.h"
#include "NaturalNumbers/MUL_Nk_N.h"
#include "NaturalNumbers/MUL_NN_N.h"
#include "NaturalNumbers/SUB_NDN_N.h"
#include "NaturalNumbers/DIV_NN_Dk.h"
#include "NaturalNumbers/DIV_NN_N.h"
#include "NaturalNumbers/MOD_NN_N.h"
#include "NaturalNumbers/GCF_NN_N.h"
#include "NaturalNumbers/LCM_NN_N.h"
#include "IntegerNumbers/generalZNum.h"
#include "IntegerNumbers/ABS_Z_N.h"
#include "IntegerNumbers/POZ_Z_D.h"
#include "IntegerNumbers/MUL_ZM_Z.h"
#include "IntegerNumbers/TRANS_N_Z.h"
#include "IntegerNumbers/TRANS_Z_N.h"
#include "IntegerNumbers/ADD_ZZ_Z.h"
#include "IntegerNumbers/SUB_ZZ_Z.h"
#include "IntegerNumbers/MUL_ZZ_Z.h"
#include "IntegerNumbers/DIV_ZZ_Z.h"
#include "IntegerNumbers/MOD_ZZ_Z.h"
#include "RatioNumbers/generalRatioNumber.h"
#include "RatioNumbers/RED_Q_Q.h"
#include "RatioNumbers/INT_Q_B.h"
#include "RatioNumbers/TRANS_Z_Q.h"
#include "RatioNumbers/TRANS_Q_Z.h"
#include "RatioNumbers/ADD_QQ_Q.h"
#include "RatioNumbers/SUB_QQ_Q.h"
#include "RatioNumbers/MUL_QQ_Q.h"
#include "RatioNumbers/DIV_QQ_Q.h"
#include "Polinoms/generalPolinoms.h"

// Macro to clear the screen
#ifdef OS_TYPE
#define CLS system("clear")
#else
#define CLS system("cls")
#endif

// Enumerations
// For main menu
enum CHOICE_MAIN {
    RUN = 1,
    INFO,
    EXIT_MAIN
};
// For menu run
enum CHOICE_RUN {
    NATURAL = 1,
    INTEGER,
    RATIO,
    POLINOM,
    EXIT_RUN
};
// For menu natural number
enum CHOICE_NATURAL {
    N1 = 1, N2, N3, N4, N5,
    N6, N7, N8, N9, N10,
    N11, N12, N13, N14, EXIT_NATURAL
};
// For general menu
enum CHOICE_NUMBER {
    NUM1 = 1, NUM2, EXIT_CHOICE_NUMBER
};
// For integer number
enum CHOICE_INTEGER {
    Z1 = 1, Z2, Z3, Z4, Z5,
    Z6, Z7, Z8, Z9, Z10, EXIT_INTEGER
};
// For ratio numbers
enum CHOICE_RATIO {
    Q1 = 1, Q2, Q3, Q4, Q5,
    Q6, Q7, Q8, EXIT_RATIO
};
// For polinoms
enum CHOICE_POLINOMS {
    P1 = 1, P2, P3, P4, P5,
    P6, P7, P8, P9, P10,
    P11, P12, P13, EXIT_POLINOM
};

// Custom input/output function
double input(void);
std::string outputN(NaturalNumber number); // input natural number
std::string outputZ(numberZ number); // input integer number
std::string outputR(numberR number); // input ratio number

// Interface function
int mainMenu(void); // main menu
int runMenu(void); // run menu
int naturalMenu(NaturalNumber& number1, NaturalNumber& number2, int& nat_const); // menu natural numbers
int menuChoiceNumber(void); // Choosing one of two numbers
int integerMenu(numberZ& number1, numberZ& number2, int& nat_const); // menu integer number
int ratioMenu(numberR& number1, numberR& number2); // menu ratio number
int polinomMenu(void); // menu polinom number
void info(void); // menu info about programm

//Global variable
// Natural numbers
NaturalNumber nat_number1;
NaturalNumber nat_number2;
int nat_number_const;
// Integer numbers
numberZ int_number1;
numberZ int_number2;
int int_number_const;
// Ration numbers
numberR rat_number_1;
numberR rat_number_2;
int rat_number_const;
// Polinoms
// ;(((((

int main(void) {
    NaturalNumber NNresult; // result for natural number
    // just zero in natural number
    NaturalNumber NNzero = XtoXArray((unsigned long long)0);
    // result for integer number
    numberZ Zresult;
    // just zero in integer number
    numberZ Zzero = XtoXArrayZ((unsigned long long)0);
    // result for ratio number
    numberR Rresult;
    int choice; // Gener choice
    bool bresult; // Bool result for func
    // For enter integer number (change)
    long long int number1Z, number2Z;
    // input natural number
    unsigned long long iresult;
    unsigned long long number1, number2;
    int choice_main; // choice in main menu
    int choice_run; // choice in menu run
    int choice_polinom; // choice in polinom menu (change)
    do {
        choice_main = mainMenu();
        switch (choice_main)
        {
        case RUN:
            int choice_natural;
            do {
                choice_run = runMenu();
                switch (choice_run)
                {
                case NATURAL:
                    CLS;
                    std::cout << "----INPUT-NATURAL-NUMBERS----\n";
                    std::cout << "Number1: ";
                    std::cin >> number1;
                    nat_number1 = XtoXArray(number1);
                    std::cout << "Number2: ";
                    std::cin >> number2;
                    nat_number2 = XtoXArray(number2);
                    std::cout << "Const: ";
                    std::cin >> nat_number_const;
                    do {
                        choice_natural = naturalMenu(nat_number1, nat_number2, nat_number_const);
                        switch (choice_natural)
                        {
                        case N1:
                            CLS;
                            std::cout << "-------RESULT-N1-------\n";
                            iresult = COM_NN_D(nat_number1, nat_number2);
                            switch (iresult)
                            {
                            case 0:
                                std::cout << outputN(nat_number1) << " = " << outputN(nat_number2) << "\n";
                                break;
                            case 1:
                                std::cout << outputN(nat_number1) << " < " << outputN(nat_number2) << "\n";
                                break;
                            case 2:
                                std::cout << outputN(nat_number1) << " > " << outputN(nat_number2) << "\n";
                                break;
                            default:
                                std::cout << "ERROR! \n";
                                break;
                            }
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N2:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-N2-------\n";
                                    if (choice == NUM1) {
                                        bresult = NZER_N_B(nat_number1);
                                        std::cout << outputN(nat_number1) << " is zero: ";
                                    }
                                    else {
                                        bresult = NZER_N_B(nat_number2);
                                        std::cout << outputN(nat_number2) << " is zero: ";
                                    }
                                    if (bresult) {
                                        std::cout << "No\n";
                                    }
                                    else {
                                        std::cout << "Yes\n";
                                    }
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice!= EXIT_CHOICE_NUMBER);
                            break;
                        case N3:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-N3-------\n";
                                    if (choice == NUM1) {
                                        NNresult = ADD_1N_N(nat_number1);
                                        std::cout << outputN(nat_number1) << " + 1 = ";
                                    }
                                    else {
                                        NNresult = ADD_1N_N(nat_number2);
                                        std::cout << outputN(nat_number2) << " + 1 = ";
                                    }
                                    std::cout << outputN(NNresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case N4:
                            CLS;
                            std::cout << "-------RESULT-N4-------\n";
                            NNresult = ADD_NN_N(nat_number1, nat_number2);
                            std::cout << outputN(nat_number1) << " + " << outputN(nat_number2) << " = " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N5:
                            CLS;
                            std::cout << "-------RESULT-N5-------\n";
                            NNresult = SUB_NN_N(nat_number1, nat_number2);
                            std::cout << "|" << outputN(nat_number1) << " - " << outputN(nat_number2) << "|" << " = " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N6:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-N6-------\n";
                                    if (choice == NUM1) {
                                        NNresult = MUL_ND_N(nat_number1, nat_number_const);
                                        std::cout << outputN(nat_number1);
                                    }
                                    else {
                                        NNresult = MUL_ND_N(nat_number2, nat_number_const);
                                        std::cout << outputN(nat_number2);
                                    }
                                    std::cout << " * " << nat_number_const << " = " << outputN(NNresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case N7:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-N7-------\n";
                                    if (choice == NUM1) {
                                        NNresult = MUL_Nk_N(nat_number1, nat_number_const);
                                        std::cout << outputN(nat_number1);
                                    }
                                    else {
                                        NNresult = MUL_Nk_N(nat_number2, nat_number_const);
                                        std::cout << outputN(nat_number1);
                                    }
                                    std::cout << " * " << "10^" << nat_number_const << " = " << outputN(NNresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }
                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case N8:
                            CLS;
                            std::cout << "-------RESULT-N8-------\n";
                            NNresult = MUL_NN_N(nat_number1, nat_number2);
                            std::cout  << outputN(nat_number1) << " * " << outputN(nat_number2) << " = " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N9:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-N9-------\n";
                                    if (choice == NUM1) {
                                        NNresult = SUB_NDN_N(nat_number1, nat_number2 ,nat_number_const);
                                        std::cout << outputN(nat_number1) << " - " << outputN(nat_number2) << " * " << nat_number_const << " = ";
                                    }
                                    else {
                                        NNresult = SUB_NDN_N(nat_number2, nat_number1, nat_number_const);
                                        std::cout << outputN(nat_number2) << " - " << outputN(nat_number1) << " * " << nat_number_const << " = ";
                                    }
                                    if (NNresult.olderCoef == -1) {
                                        std::cout << "Negative number\n";
                                    }else std::cout << outputN(NNresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }
                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case N10:
                            CLS;
                            std::cout << "-------RESULT-N10-------\n";
                            NNresult = DIV_NN_Dk(nat_number1, nat_number2); 
                            if (NNresult.olderCoef == 1 && NNresult.arrayNum[0] == 0) std::cout << "One of the numbers is zero!\n";
                            else std::cout << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N11:
                            CLS;
                            std::cout << "-------RESULT-N11-------\n";
                            NNresult = DIV_NN_N(nat_number1, nat_number2);
                            if (NNresult.olderCoef == 1 && NNresult.arrayNum[0] == 0) std::cout << "One of the numbers is zero!\n";
                            else std::cout << "Quotient of division: " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N12:
                            CLS;
                            std::cout << "-------RESULT-N12-------\n";
                            NNresult = MOD_NN_N(nat_number1, nat_number2);
                            if (NNresult.olderCoef == 1 && NNresult.arrayNum[0] == 0) std::cout << "One of the numbers is zero! OR The remainder of the division is 0\n";
                            else std::cout << "The remainder of the division: " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N13:
                            CLS;
                            std::cout << "-------RESULT-N13-------\n";
                            NNresult = GCF_NN_N(nat_number1, nat_number2);
                            if (NNresult.olderCoef == -1) std::cout << "Error data!\n";
                            else if (NNresult.olderCoef == 1 && NNresult.arrayNum[0] == 0) std::cout << "Answer is ZERO (not natural)!\n";
                            else std::cout << "NOD( " << outputN(nat_number1) << ", " << outputN(nat_number2) << ") = " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case N14:
                            CLS;
                            std::cout << "-------RESULT-N14-------\n";
                            NNresult = LCM_NN_N(nat_number1, nat_number2);
                            if (NNresult.olderCoef == -1) std::cout << "Error data!\n";
                            else if(NNresult.olderCoef == 1 && NNresult.arrayNum[0] == 0) std::cout << "Error data!\n";
                            else std::cout << "NOK( " << outputN(nat_number1) << ", " << outputN(nat_number2) << ") = " << outputN(NNresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        default:
                            break;
                        }
                    } while (choice_natural != EXIT_NATURAL);
                    break;
                case INTEGER:
                    int choice_integer;
                    CLS;
                    std::cout << "----INPUT-INTEGER-NUMBERS----\n";
                    std::cout << "Number1: ";
                    std::cin >> number1Z;
                    int_number1 = XtoXArrayZ(number1Z);
                    std::cout << "Number2: ";
                    std::cin >> number2Z;
                    int_number2 = XtoXArrayZ(number2Z);
                    std::cout << "Const: ";
                    std::cin >> int_number_const;
                    do {
                        choice_integer = integerMenu(int_number1, int_number2, int_number_const);
                        switch (choice_integer)
                        {
                        case Z1:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z1-------\n";
                                    if (choice == NUM1) {
                                        NNresult = ABS_Z_N(int_number1);
                                        std::cout << "|" << outputZ(int_number1) << "| = " << outputN(NNresult) << "\n";
                                    }
                                    else {
                                        NNresult = ABS_Z_N(int_number2);
                                        std::cout << "|" << outputZ(int_number2) << "| = " << outputN(NNresult) << "\n";
                                    }
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }
                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Z2:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z2-------\n";
                                    if (choice == NUM1) {
                                        iresult = POZ_Z_D(int_number1);
                                        std::cout << outputZ(int_number1) << " is positive: ";
                                    }
                                    else {
                                        iresult = POZ_Z_D(int_number2);
                                        std::cout << outputZ(int_number2) << " is positive: ";
                                    }
                                    switch (iresult)
                                    {
                                    case 2:
                                        std::cout << "Yes!\n";
                                        break;
                                    case 1:
                                        std::cout << "No!\n";
                                        break;
                                    case 0:
                                        std::cout << "Is zero!\n";
                                        break;
                                    default:
                                        std::cout << "Error!\n";
                                        break;
                                    }
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Z3:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z3-------\n";
                                    if (choice == NUM1) {
                                        Zresult = MUL_ZM_Z(int_number1);
                                        std::cout << outputZ(int_number1);
                                    }
                                    else {
                                        Zresult = MUL_ZM_Z(int_number2);
                                        std::cout << outputZ(int_number2);
                                    }
                                    std::cout << " * (-1) = " << outputZ(Zresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Z4:
                            CLS;
                            std::cout << "------RESULT-Z-4------\n";
                            std::cout << "Enter natural number: ";
                            std::cin >> number1;
                            NNresult = XtoXArray(number1);
                            Zresult = TRANS_N_Z(NNresult);
                            std::cout << "------Result------\n";
                            std::cout << "Convert natural number " << outputN(NNresult) << " to integer: " << outputZ(Zresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            (void)getchar();
                            while (getchar() != '\n');
                            break;
                        case Z5:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z6-------\n";
                                    if (choice == NUM1) {
                                        if (int_number1.sign != 1) {
                                            NNresult = TRANS_Z_N(int_number1);
                                            std::cout << "Convert integer number " << outputZ(int_number1) << " to natural: ";
                                            std::cout << outputN(NNresult) << "\n";
                                        }
                                        else std::cout << "This number is negative!\n";
                                    }
                                    else {
                                        if (int_number2.sign != 1) {
                                            NNresult = TRANS_Z_N(int_number2);
                                            std::cout << "Convert integer number " << outputZ(int_number2) << " to natural: ";
                                            std::cout << outputN(NNresult) << "\n";
                                        }
                                        else std::cout << "This number is negative!\n";
                                    }
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Z6:
                            CLS;
                            std::cout << "------RESULT-Z-6------\n";
                            Zresult = ADD_ZZ_Z(int_number1, int_number2);
                            std::cout << "(" << outputZ(int_number1) << ") + (" << outputZ(int_number2) << ") = " << outputZ(Zresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case Z7:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z7-------\n";
                                    if (choice == NUM1) {
                                        Zresult = SUB_ZZ_Z(int_number1, int_number2);
                                        std::cout << "(" << outputZ(int_number1) << ") - (" << outputZ(int_number2) << ") = ";
                                    }
                                    else {
                                        Zresult = SUB_ZZ_Z(int_number2, int_number1);
                                        std::cout << "(" << outputZ(int_number2) << ") - (" << outputZ(int_number1) << ") = ";
                                    }
                                    std::cout << outputZ(Zresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Z8:
                            CLS;
                            std::cout << "------RESULT-Z-8------\n";
                            Zresult = MUL_ZZ_Z(int_number1, int_number2);
                            std::cout << "(" << outputZ(int_number1) << ") * (" << outputZ(int_number2) << ") = " << outputZ(Zresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case Z9:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z9-------\n";
                                    if (choice == NUM1) {
                                        Zresult = DIV_ZZ_Z(int_number1, int_number2);
                                        std::cout << "(" << outputZ(int_number1) << ") / (" << outputZ(int_number2) << ")\n";
                                    }
                                    else {
                                        Zresult = DIV_ZZ_Z(int_number2, int_number1);
                                        std::cout << "(" << outputZ(int_number2) << ") / (" << outputZ(int_number1) << ")\n";
                                    }
                                    if (Zresult.olderCoef == -1) {
                                        std::cout << "Error data!\n";
                                    }
                                    else {
                                        std::cout << "Quotient of division: " << outputZ(Zresult) << "\n";
                                    }
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Z10:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Z9-------\n";
                                    if (choice == NUM1) {
                                        Zresult = MOD_ZZ_Z(int_number1, int_number2);
                                        std::cout << "(" << outputZ(int_number1) << ") / (" << outputZ(int_number2) << ")\n";
                                    }
                                    else {
                                        Zresult = MOD_ZZ_Z(int_number2, int_number1);
                                        std::cout << "(" << outputZ(int_number2) << ") / (" << outputZ(int_number1) << ")\n";
                                    }
                                    if (Zresult.olderCoef == -1) {
                                        std::cout << "Error data!\n";
                                    }
                                    else {
                                        std::cout << "The remainder of the division: " << outputZ(Zresult) << "\n";
                                    }
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        default:
                            break;
                        }
                    } while (choice_integer != EXIT_INTEGER);
                    break;
                case RATIO:
                    int choice_ratio;
                    CLS;
                    std::cout << "----INPUT-RATIO-NUMBERS----\n";
                    std::cout << "Numerator1 (int): ";
                    std::cin >> number1Z;
                    rat_number_1.whole = XtoXArrayZ(number1Z);
                    std::cout << "Denominator1 (nat): ";
                    std::cin >> number1;
                    rat_number_1.natural = XtoXArray(number1);
                    std::cout << "Numerator2 (int): ";
                    std::cin >> number1Z;
                    rat_number_2.whole = XtoXArrayZ(number1Z);
                    std::cout << "Denominator2 (nat): ";
                    std::cin >> number1;
                    rat_number_2.natural = XtoXArray(number1);
                    std::cout << "Const: ";
                    std::cin >> rat_number_const;
                    do {
                        choice_ratio = ratioMenu(rat_number_1, rat_number_2);
                        switch (choice_ratio)
                        {
                        case Q1:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Q1-------\n";
                                    if (choice == NUM1) {
                                        Rresult = RED_Q_Q(rat_number_1);
                                        std::cout << outputR(rat_number_1) << " = ";
                                    }
                                    else {
                                        Rresult = RED_Q_Q(rat_number_2);
                                        std::cout << outputR(rat_number_2) << " = ";
                                    }
                                    std::cout << outputR(Rresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Q2:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Q2-------\n";
                                    if (choice == NUM1) {
                                        bresult = INT_Q_B(rat_number_1);
                                        std::cout << outputR(rat_number_1) << " is integer: ";
                                    }
                                    else {
                                        bresult = INT_Q_B(rat_number_2);
                                        std::cout << outputR(rat_number_2) << " is integer: ";
                                    }
                                    if(bresult) std::cout << "Yes\n";
                                    else std::cout << "No\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Q3:
                            CLS;
                            std::cout << "------RESULT-Q-3------\n";
                            std::cout << "Enter integer number: ";
                            std::cin >> number1Z;
                            int_number1 = XtoXArrayZ(number1Z);
                            Rresult = TRANS_Z_Q(int_number1);
                            std::cout << "------Result------\n";
                            std::cout << "Convert integer number " << outputZ(int_number1) << " to ratio: " << outputR(Rresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            (void)getchar();
                            while (getchar() != '\n');
                            break;
                        case Q4:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Q4-------\n";
                                    if (choice == NUM1) {
                                        Zresult = TRANS_Q_Z(rat_number_1);
                                        std::cout << outputR(rat_number_1) << " in integer: ";
                                    }
                                    else {
                                        Zresult = TRANS_Q_Z(rat_number_2);
                                        std::cout << outputR(rat_number_2) << " is integer: ";
                                    }
                                    if (Zresult.olderCoef == -1) std::cout << "Impossible\n";
                                    else std::cout << outputZ(Zresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Q5:
                            CLS;
                            std::cout << "------RESULT-Q-5------\n";
                            Rresult = ADD_QQ_Q(rat_number_1, rat_number_2);
                            std::cout << "(" << outputR(rat_number_1) << ") + (" << outputR(rat_number_2) << ") = " << outputR(Rresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case Q6:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Q6-------\n";
                                    if (choice == NUM1) {
                                        Rresult = SUB_QQ_Q(rat_number_1, rat_number_2);
                                        std::cout << outputR(rat_number_1)<< " - " << outputR(rat_number_2);
                                    }
                                    else {
                                        Rresult = SUB_QQ_Q(rat_number_2, rat_number_1);
                                        std::cout << outputR(rat_number_2) << " - " << outputR(rat_number_1);
                                    }
                                    std::cout << " = " << outputR(Rresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        case Q7:
                            CLS;
                            std::cout << "------RESULT-Q-7------\n";
                            Rresult = MUL_QQ_Q(rat_number_1, rat_number_2);
                            std::cout << "(" << outputR(rat_number_1) << ") * (" << outputR(rat_number_2) << ") = " << outputR(Rresult) << "\n";
                            std::cout << "Press enter to cont.\n";
                            while (getchar() != '\n');
                            break;
                        case Q8:
                            CLS;
                            do {
                                choice = menuChoiceNumber();
                                if (choice == NUM1 || choice == NUM2) {
                                    CLS;
                                    std::cout << "-------RESULT-Q8-------\n";
                                    if (choice == NUM1) {
                                        Rresult = DIV_QQ_Q(rat_number_1, rat_number_2);
                                        std::cout << outputR(rat_number_1) << " / " << outputR(rat_number_2);
                                    }
                                    else {
                                        Rresult = DIV_QQ_Q(rat_number_2, rat_number_1);
                                        std::cout << outputR(rat_number_2) << " / " << outputR(rat_number_1);
                                    }
                                    if (Rresult.natural.olderCoef == -1) {
                                        std::cout << " = ERROR\n";
                                    }
                                    else std::cout << " = " << outputR(Rresult) << "\n";
                                    std::cout << "Press enter to cont.\n";
                                    while (getchar() != '\n');
                                }

                            } while (choice != EXIT_CHOICE_NUMBER);
                            break;
                        default:
                            break;
                        }
                    } while (choice_ratio != EXIT_RATIO);
                    break;
                case POLINOM:
                    do {
                        choice_polinom = polinomMenu();
                        switch (choice_polinom)
                        {
                        case P1:
                            break;
                        case P2:
                            break;
                        case P3:
                            break;
                        case P4:
                            break;
                        case P5:
                            break;
                        case P6:
                            break;
                        case P7:
                            break;
                        case P8:
                            break;
                        case P9:
                            break;
                        case P10:
                            break;
                        case P11:
                            break;
                        case P12:
                            break;
                        case P13:
                            break;
                        default:
                            break;
                        }
                    } while (choice_polinom != EXIT_POLINOM);
                    break;
                default:
                    break;
                }
            } while (choice_run != EXIT_RUN);
            break;
        case INFO:
            info();
            break;
        default:
            break;
        }
    } while (choice_main!=EXIT_MAIN);
	

	return 0;
}

// Entry with verification
double input(void) {
    double num;
    while (!scanf_s("%lf", &num)) {
        while (getchar() != '\n')
            ;
        puts("Error! Please enter correct value.");
    }
    while (getchar() != '\n')
        ;
    return num;
}

// Main menu
int mainMenu(void) {
    int choice;
    CLS;
    std::cout << "----MAIN----\n";
    std::cout << "Group: 1310\n";
    std::cout << "Colloquium\n";
    std::cout << "Name: Ilya Vasilev\n";
    std::cout << "-----------------------\n";
    std::cout << "1) Run\n";
    std::cout << "2) Information\n";
    std::cout << "3) Exit\n";
    std::cout << "Enter choice: _\b";
    choice = (int)input();
    return choice;
}

// Module selection menu
int runMenu(void) {
    int choice;
    CLS;
    std::cout << "----RUN----\n";
    std::cout << "1) Natural Numbers\n";
    std::cout << "2) Integer Numbers\n";
    std::cout << "3) Ratio Numbers\n";
    std::cout << "4) Polinoms\n";
    std::cout << "5) Exit\n";
    std::cout << "Enter choice: _\b";
    choice = (int)input();
    return choice;
}

// Developer information
void info(void) {
    CLS;
    std::cout << "----INFORMATION----\n";
    std::cout << "Architect: Vasilev I.V.\n";
    std::cout << "Quality manager: Vasilev I.V.\n";
    std::cout << "Tester enginer: Vasilev I.V.\n";
    std::cout << "Team: Vasilev I.V.\n";
    std::cout << "-------------------\n";
    std::cout << "Press enter to cont.\n";
    while (getchar() != '\n');
}


int menuChoiceNumber(void) {
    int choice;
    CLS;
    std::cout << "---------N2-MENU----------\n";
    std::cout << "1) Number 1\n";
    std::cout << "2) Number 2\n";
    std::cout << "3) Exit\n";
    std::cout << "-------------------\n";
    choice = (int)input();
    return choice;
}

std::string outputN(NaturalNumber number) {
    std::string str = "";
    int i = 0;
    for (i = number.olderCoef - 1; i >= 0; i--) {
        str += std::to_string(number.arrayNum[i]);
    }
    return str;
}

std::string outputZ(numberZ number) {
    std::string str = "";
    int i = 0;
    if (number.sign == 1) str += "-";
    for (i = number.olderCoef - 1; i >= 0; i--) {
        str += std::to_string(number.arrayNum[i]);
    }
    return str;
}

std::string outputR(numberR number) {
    std::string str = "";
    int i = 0;
    if (number.whole.sign == 1) str += "-";
    for (i = number.whole.olderCoef - 1; i >= 0; i--) {
        str += std::to_string(number.whole.arrayNum[i]);
    }
    str += " / ";
    for (i = number.natural.olderCoef - 1; i >= 0; i--) {
        str += std::to_string(number.natural.arrayNum[i]);
    }
    return str;
}

// Menu natural numbers modules
int naturalMenu(NaturalNumber& number1, NaturalNumber& number2, int& nat_const) {
    int choice;
    CLS;
    std::cout << "----NATURAL-NUMBERS----\n";
    std::cout << "----CONST----\n";
    std::cout << "Number1: " << outputN(number1) << "\n";
    std::cout << "Number2: " << outputN(number2) << "\n";
    std::cout << "Const: " << nat_const << "\n";
    std::cout << "-----------------------\n";
    std::cout << "1) Comparison of natural numbers (N-1)\n";
    std::cout << "2) Check for zero (N-2)\n";
    std::cout << "3) Adding 1 to a natural number (N-3)\n";
    std::cout << "4) Addition of natural numbers (N-4)\n";
    std::cout << "5) Subtracting a smaller natural number from a larger one (N-5)\n";
    std::cout << "6) Multiplication of a natural number by a number (N-6)\n";
    std::cout << "7) Multiplication of a natural number by 10^k (N-7)\n";
    std::cout << "8) Multiplication of natural numbers (N-8)\n";
    std::cout << "9) Subtracting a natural from another natural multiplied by a number (N-9)\n";
    std::cout << "10) Calculate the first digit of the division of a greater natural by a lesser natural multiplied by 10^k (N-10)\n";
    std::cout << "11) The quotient of dividing a larger natural number by a smaller or equal natural number with a remainder (N-11)\n";
    std::cout << "12) Residue from dividing a larger natural number by a smaller or equal natural number with a remainder (N-12)\n";
    std::cout << "13) NOD of natural numbers (N-13)\n";
    std::cout << "14) NOC of natural numbers (N-14)\n";
    std::cout << "15) Exit\n";
    choice = (int)input();
    return choice;
}

// Menu integer numbers modules
int integerMenu(numberZ& number1, numberZ& number2, int& nat_const) {
    int choice;
    CLS;
    std::cout << "----INTEGER-NUMBERS----\n";
    std::cout << "----CONST----\n";
    std::cout << "Number1: " << outputZ(number1) << "\n";
    std::cout << "Number2: " << outputZ(number2) << "\n";
    std::cout << "Const: " << nat_const << "\n";
    std::cout << "-----------------------\n";
    std::cout << "1) The absolute value of the number (Z-1)\n";
    std::cout << "2) Determining the positivity of a number (Z-2)\n";
    std::cout << "3) Multiplying a whole by (-1) (Z-3)\n";
    std::cout << "4) Converting a natural to an integer (Z-4)\n";
    std::cout << "5) Converting a non-negative integer to a natural integer (Z-5)\n";
    std::cout << "6) Adding integers (Z-6)\n";
    std::cout << "7) Subtracting integers (Z-7)\n";
    std::cout << "8) Multiplication of integers (Z-8)\n";
    std::cout << "9) Partial of division of a whole by a whole (Z-9)\n";
    std::cout << "10) Residue from dividing a whole by a whole (Z-10)\n";
    std::cout << "11) Exit\n";
    choice = (int)input();
    return choice;
}

// Menu integer numbers modules
int ratioMenu(numberR& number1, numberR& number2) {
    int choice;
    CLS;
    std::cout << "----RATIO-NUMBERS----\n";
    std::cout << "----CONST----\n";
    std::cout << "Number1: " << outputR(number1) << "\n";
    std::cout << "Number2: " << outputR(number2) << "\n";
    std::cout << "Const: " << rat_number_const << "\n";
    std::cout << "-----------------------\n";
    std::cout << "1) Reduction of fractions (Q-1)\n";
    std::cout << "2) Checking for integers (Q-2)\n";
    std::cout << "3) Converting integers to fractions (Q-3)\n";
    std::cout << "4) Fractional to integer conversion (Q-4)\n";
    std::cout << "5) Adding fractions (Q-5)\n";
    std::cout << "6) Subtracting fractions (Q-6)\n";
    std::cout << "7) Multiplication of fractions (Q-7)\n";
    std::cout << "8) Dividing fractions (Q-8)\n";
    std::cout << "9) Exit\n";
    choice = (int)input();
    return choice;
}

// Menu integer numbers modules
int polinomMenu(void) {
    int choice;
    CLS;
    std::cout << "----POLINOM-NUMBERS----\n";
    std::cout << "1) Adding polynomials (P-1)\n";
    std::cout << "2) Subtracting polynomials (P-2)\n";
    std::cout << "3) Multiplication of a polynomial by a rational number (P-3)\n";
    std::cout << "4) Multiplication of a polynomial by x^k (P-4)\n";
    std::cout << "5) The high coefficient of the polynomial (P-5)\n";
    std::cout << "6) Degree of a polynomial (P-6)\n";
    std::cout << "7) Removing the denominators of coefficients and NOD of numerators from the polynomial (P-7)\n";
    std::cout << "8) Multiplication of polynomials (P-8)\n";
    std::cout << "9) Partial of division of a polynomial by a polynomial with a remainder (P-9)\n";
    std::cout << "10) Residue from dividing a polynomial by a polynomial with a remainder (P-10)\n";
    std::cout << "11) NOD of polynomials (P-11)\n";
    std::cout << "12) Derivative of a polynomial (P-12)\n";
    std::cout << "13) Transforming a polynomial - multiple roots to prime roots (P-12)\n";
    std::cout << "14) Exit\n";
    choice = (int)input();
    return choice;
}
