#include <iostream>
using namespace std;

int main()
{
    //one two three four five six seven eight nine zero
    short dig;
    cin >> dig;
    if (dig == 0) cout << "zero";
    else if (dig == 1) cout << "one";
    else if (dig == 2) cout << "two";
    else if (dig == 3) cout << "three";
    else if (dig == 4) cout << "four";
    else if (dig == 5) cout << "five";
    else if (dig == 6) cout << "six";
    else if (dig == 7) cout << "seven";
    else if (dig == 8) cout << "eight";
    else if (dig == 9) cout << "nine";
    else cout << "not digit";

    switch (dig) {
    case 0:
        cout << "zero";
        break;
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    default:
        cout << "not digit";
    }





}
