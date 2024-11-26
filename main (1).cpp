#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    int n=0;
    double  x, e, s, S=0;
    SetConsoleOutputCP(1251);
   cout << "¬ведите x: " << endl;
   cin >> x;
   cout << "¬ведите точность e: ";
    cin >> e;
    S = 1*x/1;
    while (fabs (e) > s)
    {
    S += s;
    n++;
    s = pow(-1,n)*pow(x,2*n+1)/(3*2*1);
    }
    cout << "s=" << S;
       return 0;
}
