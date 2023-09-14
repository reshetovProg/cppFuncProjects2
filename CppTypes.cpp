#include <iostream>
using namespace std;

int main()
{
    //setlocale(LC_ALL, "rus");
    short a1 = SHRT_MIN;
    short a2 = SHRT_MAX;
    int a3 = INT32_MIN;
    int a4 = INT32_MAX;
    long long a5 = LLONG_MIN;
    long long a6 = LLONG_MAX;
    unsigned short a7 = 0;
    unsigned short a8 = USHRT_MAX;
    unsigned int a9 = UINT32_MAX;
    unsigned long long a10 = ULLONG_MAX;
    float a11 = FLT_MIN;
    float a12 = FLT_MAX;
    double a13 = DBL_MIN;
    double a14 = DBL_MAX;
    char a15 = 0;
    char a16 = 255;
    bool a17 = 0;
    bool a18 = 1;

    cout << "type\t|byte\t|min\t|max"<<endl;
    cout << "short\t|" << sizeof(a1) << "\t|" << a1 <<"\t|" << a2 <<endl;
    



    
}
