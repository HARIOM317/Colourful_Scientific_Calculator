#include<bits/stdc++.h>
#include "matrix.h"
using namespace std;

void Length(char first, char second, float value)
{
    system("CLS");
start:
    cout << "\033[33;1m  _______________________________  \n"
         << "\033[33;1m | 1. q for quit.                | \n"
         << "\033[33;1m | 2. M for meter.               | \n"
         << "\033[33;1m | 3. m for millimeter.          | \n"
         << "\033[33;1m | 4. c for centimeter.          | \n"
         << "\033[33;1m | 5. d for decimeter.           | \n"
         << "\033[33;1m | 6. k for kilometer.           | \n"
         << "\033[33;1m | 7. x for back.                | \n"
         << "\033[33;1m |_______________________________| \n";

    cout << "\n\033[96;1m Enter your first unit : ";
    cin >> first;

    if (first == 'q' || first == 'Q')
    {
        exit(0);
    }
    else if (first == 'x' || first == 'X')
    {
        home();
    }
    else
    {
        switch (first)
        {

        case 'M':
            system("CLS");
            cout << "\033[33;1m \t  _______________________________  \n"
                 << "\033[33;1m \t | 1. q for quit.                | \n"
                 << "\033[33;1m \t | 2. M for meter.               | \n"
                 << "\033[33;1m \t | 3. m for millimeter.          | \n"
                 << "\033[33;1m \t | 4. c for centimeter.          | \n"
                 << "\033[33;1m \t | 5. d for decimeter.           | \n"
                 << "\033[33;1m \t | 6. k for kilometer.           | \n"
                 << "\033[33;1m \t | 7. x for back.                | \n"
                 << "\033[33;1m \t |_______________________________| \n";
            cout << "\n\033[96;1m Enter your second unit : ";
            cin >> second;
            if (second == 'q' || second == 'Q')
            {
                exit(0);
            }
            else if (second == 'x' || second == 'X')
            {
                home();
            }
            else
            {
                switch (second)
                {
                case 'm':
                    cout << "\n\033[94;1m Enter value : ";
                    cin >> value;
                    cout << value << " meter = " << 1000 * value << " millimeter" << endl;
                    goto start;
                    break;

                default:
                    break;
                }
            }
            break;

        default:
            break;
        }
    }
}