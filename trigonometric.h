#include <bits/stdc++.h>
#include "calculator.h"
using namespace std;

void trigonometric();
void trigonometric_digit(string, float);
void trigonometric_radian(string, float);
void inverse_trigonometric(float, double, double, string);
void trigonometric_hyperbolic(string, float);
void trigonometric_arc_hyperbolic(string, float);
void logarithm();
void natural_logarithm(string, float);
void natural_logarithm_1_p(string, float);
void logarithm_base_10(string, float);
void logarithm_base_2(string, float);
void logarithm_mode_x(string, float);
void log_a_to_base_b(string, float, float);
void exponential(string, double);

void trigonometric()
{
    char option;
    string str;
    float degree;
    double radian, value;
    system("CLS");
start:
    cout << "\033[92;1m  _________________________________________________________ \n"
         << "\033[92;1m |       [Select any option for continue]                  | \n"
         << "\033[33;1m |                                                         | \n"
         << "\033[33;1m | a. Trigonometric for output in digit.                   | \n"
         << "\033[33;1m | b. Trigonometric for output in radian.                  | \n"
         << "\033[33;1m | c. Inverse trigonometric for output in digit and radian.| \n"
         << "\033[33;1m | d. Trigonometric for hyperbolic of a number.            | \n"
         << "\033[33;1m | e. Trigonometric for arc hyperbolic of a number.        | \n"
         << "\033[33;1m | f. For logarithm.                                       | \n"
         << "\033[33;1m | g. For exponential(e) or e^x.                           | \n"
         << "\033[33;1m | x. For back.                                            | \n"
         << "\033[33;1m | q. For quiet...                                         | \n"
         << "\033[92;1m |                                                         | \n"
         << "\033[92;1m |_________________________________________________________| \n";

    cin >> option;

    if (option == 'a' || option == 'A')
    {
        system("cls");
        trigonometric_digit(str, degree);
    }
    else if (option == 'b' || option == 'B')
    {
        system("cls");
        trigonometric_radian(str, degree);
    }
    else if (option == 'c' || option == 'C')
    {
        system("cls");
        inverse_trigonometric(degree, radian, value, str);
    }
    else if (option == 'd' || option == 'D')
    {
        system("cls");
        trigonometric_hyperbolic(str, degree);
    }
    else if (option == 'e' || option == 'E')
    {
        system("cls");
        trigonometric_arc_hyperbolic(str, degree);
    }
    else if (option == 'f' || option == 'F')
    {
        system("cls");
        logarithm();
    }
    else if (option == 'g' || option == 'G')
    {
        system("cls");
        exponential(str, value);
    }
    else if (option == 'x' || option == 'X')
    {
        system("cls");
        home();
    }
    else if (option == 'q' || option == 'Q')
    {
        cout << "Quieting...\n";
        exit(0);
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void trigonometric_digit(string str, float degree)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        trigonometric();
    }
    else if (str == "tan" || str == "TAN" || str == "Tan")
    {
        cin >> degree;
        float radian = degree * 3.14 / 180;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << tan(radian) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sin" || str == "SIN" || str == "Sin")
    {
        cin >> degree;
        float radian = degree * 3.14 / 180;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << sin(radian) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }

    else if (str == "cos" || str == "COS" || str == "Cos")
    {
        cin >> degree;
        float radian = degree * 3.14 / 180;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << cos(radian) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cosec" || str == "COSEC" || str == "Cosec")
    {
        cin >> degree;
        float radian = degree * 3.14 / 180;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / sin(radian) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sec" || str == "SEC" || str == "Sec")
    {
        cin >> degree;
        float radian = degree * 3.14 / 180;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / cos(radian) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cot" || str == "COT" || str == "Cot")
    {
        cin >> degree;
        float radian = degree * 3.14 / 180;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / tan(radian) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void trigonometric_radian(string str, float degree)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        trigonometric();
    }
    else if (str == "tan" || str == "TAN" || str == "Tan")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << tan(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sin" || str == "SIN" || str == "Sin")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << sin(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }

    else if (str == "cos" || str == "COS" || str == "Cos")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << cos(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cosec" || str == "COSEC" || str == "Cosec")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / sin(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sec" || str == "SEC" || str == "Sec")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / cos(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cot" || str == "COT" || str == "Cot")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / tan(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void inverse_trigonometric(float degree, double radian, double value, string str)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        trigonometric();
    }
    else if (str == "tan" || str == "TAN" || str == "Tan")
    {
        cin >> degree;
        radian = atan(degree);
        value = (radian * 180) / 3.14159265;
        cout << "\033[36;40;1m  ________________________________________________  \n"
             << "\033[36;40;1m |                                                | \n"
             << "\033[36;40;1m   " << radian << " radians or " << value << " degrees  \n"
             << "\033[36;40;1m |________________________________________________| \n";
        goto start;
    }
    else if (str == "sin" || str == "SIN" || str == "Sin")
    {
        cin >> degree;
        radian = asin(degree);
        value = (radian * 180) / 3.14159265;
        cout << "\033[36;40;1m  ________________________________________________  \n"
             << "\033[36;40;1m |                                                | \n"
             << "\033[36;40;1m   " << radian << " radians or " << value << " degrees  \n"
             << "\033[36;40;1m |________________________________________________| \n";
        goto start;
    }

    else if (str == "cos" || str == "COS" || str == "Cos")
    {
        cin >> degree;
        radian = acos(degree);
        value = (radian * 180) / 3.14159265;
        cout << "\033[36;40;1m  ________________________________________________  \n"
             << "\033[36;40;1m |                                                | \n"
             << "\033[36;40;1m   " << radian << " radians or " << value << " degrees  \n"
             << "\033[36;40;1m |________________________________________________| \n";
        goto start;
    }
    else if (str == "cosec" || str == "COSEC" || str == "Cosec")
    {
        cin >> degree;
        radian = 1 / asin(degree);
        value = (radian * 180) / 3.14159265;
        cout << "\033[36;40;1m  ________________________________________________  \n"
             << "\033[36;40;1m |                                                | \n"
             << "\033[36;40;1m   " << radian << " radians or " << value << " degrees  \n"
             << "\033[36;40;1m |________________________________________________| \n";
        goto start;
    }
    else if (str == "sec" || str == "SEC" || str == "Sec")
    {
        cin >> degree;
        radian = 1 / acos(degree);
        value = (radian * 180) / 3.14159265;
        cout << "\033[36;40;1m  ________________________________________________  \n"
             << "\033[36;40;1m |                                                | \n"
             << "\033[36;40;1m   " << radian << " radians or " << value << " degrees  \n"
             << "\033[36;40;1m |________________________________________________| \n";
        goto start;
    }
    else if (str == "cot" || str == "COT" || str == "Cot")
    {
        cin >> degree;
        radian = 1 / atan(degree);
        value = (radian * 180) / 3.14159265;
        cout << "\033[36;40;1m  ________________________________________________  \n"
             << "\033[36;40;1m |                                                | \n"
             << "\033[36;40;1m   " << radian << " radians or " << value << " degrees  \n"
             << "\033[36;40;1m |________________________________________________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void trigonometric_hyperbolic(string str, float degree)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        trigonometric();
    }
    else if (str == "tan" || str == "TAN" || str == "Tan")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << tanh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sin" || str == "SIN" || str == "Sin")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << sinh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }

    else if (str == "cos" || str == "COS" || str == "Cos")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << cosh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cosec" || str == "COSEC" || str == "Cosec")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / sinh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sec" || str == "SEC" || str == "Sec")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / cosh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cot" || str == "COT" || str == "Cot")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / tanh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void trigonometric_arc_hyperbolic(string str, float degree)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        trigonometric();
    }
    else if (str == "tan" || str == "TAN" || str == "Tan")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << atanh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sin" || str == "SIN" || str == "Sin")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << asinh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }

    else if (str == "cos" || str == "COS" || str == "Cos")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << acosh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cosec" || str == "COSEC" || str == "Cosec")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / asinh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "sec" || str == "SEC" || str == "Sec")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / acosh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else if (str == "cot" || str == "COT" || str == "Cot")
    {
        cin >> degree;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << 1 / atanh(degree) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void logarithm()
{
    char option;
    string str;
    float value, base;
    system("cls");
start:
    cout << "\033[92;1m  _________________________________________________________ \n"
         << "\033[92;1m |       [Select any option for continue]                  | \n"
         << "\033[33;1m |                                                         | \n"
         << "\033[33;1m | a. Natural logarithm of a number.                       | \n"
         << "\033[33;1m | b. Natural logarithm of x+1 .                           | \n"
         << "\033[33;1m | c. Base 10 logarithm of a number.                       | \n"
         << "\033[33;1m | d. Base 2 logarithm of a number.                        | \n"
         << "\033[33;1m | e. Logarithm of |x|.                                    | \n"
         << "\033[33;1m | f. Logarithm(a) of any base b .                         | \n"
         << "\033[33;1m | x. For back.                                            | \n"
         << "\033[33;1m | q. For quiet...                                         | \n"
         << "\033[92;1m |                                                         | \n"
         << "\033[92;1m |_________________________________________________________| \n";

    cin >> option;

    if (option == 'a' || option == 'A')
    {
        system("cls");
        natural_logarithm(str, value);
    }
    else if (option == 'b' || option == 'B')
    {
        system("cls");
        natural_logarithm_1_p(str, value);
    }
    else if (option == 'c' || option == 'C')
    {
        system("cls");
        logarithm_base_10(str, value);
    }
    else if (option == 'd' || option == 'D')
    {
        system("cls");
        logarithm_base_2(str, value);
    }
    else if (option == 'e' || option == 'E')
    {
        system("cls");
        logarithm_mode_x(str, value);
    }
    else if (option == 'f' || option == 'F')
    {
        system("cls");
        log_a_to_base_b(str, value, base);
    }
    else if (option == 'x' || option == 'X')
    {
        system("cls");
        trigonometric();
    }
    else if (option == 'q' || option == 'Q')
    {
        cout << "Quieting...\n";
        exit(0);
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void natural_logarithm(string str, float value)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        logarithm();
    }
    else if (str == "log" || str == "LOG" || str == "Log" || str == "ln" || str == "LN" || str == "Ln")
    {
        cin >> value;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << log(value) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void natural_logarithm_1_p(string str, float value)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        logarithm();
    }
    else if (str == "log" || str == "LOG" || str == "Log" || str == "ln" || str == "LN" || str == "Ln")
    {
        cin >> value;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << log1p(value) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void logarithm_base_10(string str, float value)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        logarithm();
    }
    else if (str == "log" || str == "LOG" || str == "Log" || str == "ln" || str == "LN" || str == "Ln")
    {
        cin >> value;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << log10(value) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void logarithm_base_2(string str, float value)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        logarithm();
    }
    else if (str == "log" || str == "LOG" || str == "Log" || str == "ln" || str == "LN" || str == "Ln")
    {
        cin >> value;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << log2(value) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void logarithm_mode_x(string str, float value)
{
start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        logarithm();
    }
    else if (str == "log" || str == "LOG" || str == "Log" || str == "ln" || str == "LN" || str == "Ln")
    {
        cin >> value;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << logb(value) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void log_a_to_base_b(string str, float value, float base)
{
start:
    cout << "\033[92;1m  _________________________ \n"
         << "\033[92;1m |                         |\n"
         << "\033[92;1m | Enter 'x' for back..    |\n"
         << "\033[92;1m | Enter 'q' for quite..   |\n"
         << "\033[92;1m | Enter 'c' for continue..|\n"
         << "\033[92;1m |_________________________|\n\n\n";
    cin >> str;
    system("cls");
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        logarithm();
    }
    else if (str == "c" || str == "C")
    {
        cout << "\033[32;1m Enter log value :  ";
        cin >> value;
        cout << "\033[32;1m Enter log base :  ";
        cin >> base;
        cout << "\033[36;40;1m  ______________ \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m   " << log(value) / log(base) << "\n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}

void exponential(string str, double value){
    start:
    cin >> str;
    system("cls");
    cout << "\033[92;1m  ______________________ \n"
         << "\033[92;1m |                      |\n"
         << "\033[92;1m | Enter 'x' for back.. |\n"
         << "\033[92;1m | Enter 'q' for quite..|\n"
         << "\033[92;1m |______________________|\n\n\n";
    if (str == "q" || str == "Q")
    {
        exit(0);
    }
    else if (str == "x" || str == "X")
    {
        trigonometric();
    }
    else if (str == "exp" || str == "EXP" || str == "Exp")
    {
        cin >> value;
        cout << "\033[36;40;1m  ___________________________________ \n"
             << "\033[36;40;1m |                                   | \n"
             << "\033[36;40;1m   " << exp(value) << "\n"
             << "\033[36;40;1m |___________________________________| \n";
        goto start;
    }
    else
    {
        system("cls");
        cout << "\033[36;40;1m  ______________  \n"
             << "\033[36;40;1m |              | \n"
             << "\033[36;40;1m |Invalid Input | \n"
             << "\033[36;40;1m |______________| \n";
        goto start;
    }
}