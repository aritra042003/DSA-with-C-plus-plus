#include <iostream>
using namespace std;
void printN(int n)
{
    if (n > 0)
    {
        printN(n - 1);
        cout << " " << n;
    }
}
void printNrev(int n)
{
    if (n > 0)
    {
        cout << " " << n;
        printNrev(n - 1);
    }
}

void printNOdd(int n)
{
    if (n > 0)
    {
        printNOdd(n - 1);
        cout << " " << 2 * n - 1;
    }
}
void printNOddrev(int n)
{
    if (n > 0)
    {
        cout << " " << 2 * n - 1;
        printNOddrev(n - 1);
    }
}

void printNEven(int n)
{
    if (n > 0)
    {
        printNEven(n - 1);
        cout << " " << 2 * n;
    }
}
void printNEvenrev(int n)
{
    if (n > 0)
    {
        cout << " " << 2 * n;
        printNEvenrev(n - 1);
    }
}
void printNSquare(int n)
{
    if (n > 0)
    {
        printNSquare(n - 1);
        cout << " " << n * n;
    }
}
void printNSquarerev(int n)
{
    if (n > 0)
    {
        cout << " " << n * n;
        printNSquarerev(n - 1);
    }
}
void printNCube(int n)
{
    if (n > 0)
    {
        printNCube(n - 1);
        cout << " " << n * n * n;
    }
}
void printNCuberev(int n)
{
    if (n > 0)
    {
        cout << " " << n * n * n;
        printNCuberev(n - 1);
    }
}

int main()
{
}