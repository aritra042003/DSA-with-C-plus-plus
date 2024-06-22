#include <iostream>
using namespace std;
int sumN(int n)
{
    if (n == 1)
        return 1;
    return n + sumN(n - 1);
}
int sumNOdd(int n)
{
    if (n == 1)
        return 1;
    return 2 * n - 1 + sumNOdd(n - 1);
}
int sumNEven(int n)
{
    if (n == 1)
        return 2;
    return 2 * n + sumNEven(n - 1);
}
int sumNSquare(int n)
{
    if (n == 1)
        return 1;
    return n * n + sumNSquare(n - 1);
}
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);
}
void printBinary(int num)
{
    if (num > 0)
    {
        printBinary(num / 2);
        cout << num % 2;
    }
}
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int hcf(int a, int b)
{
    if (a > b)
        if (a % b == 0)
            return b;
        else
            hcf(a % b, b);
    else 
        if (b % a == 0)
           return a;
        else
           return hcf(a, b % a);
}

double power(double x,double y)
{
   if(y==0) 
     return 1;
   if(y>0)
     return x*power(x,y-1);
   else  
       return 1/x*power(x,y+1);
}
int main()
{
    printBinary(25);
}