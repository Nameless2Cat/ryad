#include <iostream>
#include <cmath>

using namespace std;

    double expres(double x, int n) {
    double result=x;
    double num, den;
    num=x;
    den=1;
    int k=-1;
    for (int i=1; i<n; i++) {
        num=num*x*x; //числитель
        den+=2; //знаменатель
        result+=k*(num/den);
        k*=-1; //изменение -1 на 1
    };
    return result;
}

int main()
{
    double x;
    int n;
    x=0.5;

    //for (x=-2; x<2; x+=0.1)
        for (n=1; n<16; n++)
        std::cout<<atan(x)-expres(x, n)<<std::endl;



    return 0;
}
