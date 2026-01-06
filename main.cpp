#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float operator_mod, num, ang_rad, ang_deg;
    int selector, i, num_loop;
    int check;
    cout << "Welcome sir to our demo calculator i hope it does the required job.....\n";

    cout << "please select which mode you want.....\n";
    cout << "for summation press 1.....\n";
    cout << "for subtraction press 2.....\n";
    cout << "for multiplication press 3.....\n";
    cout << "for division press 4.....\n";
    cout << "for trigonometry press 5.....\n";
    cin >> selector;

    switch (selector)
    {
        case 1:
            cout << "How many numbers do you want to sum?\n";
            cin >> num_loop;
            operator_mod = 0;
            for (i = 0; i < num_loop; i++)
            {
                cout << "Enter the number:\n";
                cin >> num;
                operator_mod = operator_mod + num;
            }
            cout << "The sum of the numbers is = " << operator_mod << endl;
            break;

        case 2:
            cout << "How many numbers do you want to subtract?\n";
            cin >> num_loop;
            cout << "Enter the first number...\n";
            cin >> operator_mod;
            for (i = 1; i < num_loop; i++)
            {
                cout << "Enter the number:\n";
                cin >> num;
                operator_mod = operator_mod - num;
            }
            cout << "The subtraction result of the numbers is = " << operator_mod << endl;
            break;

        case 3:
            cout << "How many numbers do you want to multiply?\n";
            cin >> num_loop;
            operator_mod = 1;
            for (i = 0; i < num_loop; i++)
            {
                cout << "Enter the number:\n";
                cin >> num;
                operator_mod = operator_mod * num;
            }
            cout << "The multiplication result of the numbers is = " << operator_mod << endl;
            break;

        case 4:
            cout << "How many numbers do you want to divide?\n";
            cin >> num_loop;
            cout << "Enter the first number...\n";
            cin >> operator_mod;
            for (i = 1; i < num_loop; i++)
            {
                cout << "Enter the number:\n";
                cin >> num;
                operator_mod = operator_mod / num;
            }
            cout << "The division result of the numbers is = " << operator_mod << endl;
            break;

        case 5:
            cout << "Choose what you want:\n";
            cout << "for sin press 1\n";
            cout << "for cos press 2\n";
            cout << "for tan press 3\n";
            cout << "for sec press 4\n";
            cout << "for cosec press 5\n";
            cout << "for cot press 6\n";
            cin >> selector;

            cout << "Enter the angle in degrees...\n";
            cin >> ang_deg;
            ang_rad = ang_deg * M_PI / 180;

            do {
                cout << "Do you want it with power or no?\n";
                cout << "for yes press 1 and for no press 0\n";
                cin >> check;

                if (check != 0 && check != 1) {
                    cout << "Invalid choice. Please enter 0 or 1.\n";
                }
            } while (check != 0 && check != 1);

            switch (selector)
            {
                case 1:
                    operator_mod = (check == 0) ? sin(ang_rad) : pow(sin(ang_rad), num);
                    break;
                case 2:
                    operator_mod = (check == 0) ? cos(ang_rad) : pow(cos(ang_rad), num);
                    break;
                case 3:
                    operator_mod = (check == 0) ? tan(ang_rad) : pow(tan(ang_rad), num);
                    break;
                case 4:
                    operator_mod = (check == 0) ? 1 / cos(ang_rad) : pow(1 / cos(ang_rad), num);
                    break;
                case 5:
                    operator_mod = (check == 0) ? 1 / sin(ang_rad) : pow(1 / sin(ang_rad), num);
                    break;
                case 6:
                    operator_mod = (check == 0) ? 1 / tan(ang_rad) : pow(1 / tan(ang_rad), num);
                    break;
                default:
                    cout << "Error: Invalid operation selected.\n";
                    return 1;
            }
            cout << "The result is = " << operator_mod << endl;
            break;

        default:
            cout << "Error: Invalid mode selected.\n";
            break;
    }

    return 0;
}
