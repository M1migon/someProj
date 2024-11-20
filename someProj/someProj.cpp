#include <iostream>
#include <random> 
using namespace std;

int randInt(int l, int k)
{
    return l + rand() % (k - l + 1);
}  

int cube(int a)
{
    return a * a * a;
}

int comp(int a, int b)
{
    return (a > b) ? (a) : (b);
}

bool signCheck(int a)
{
    return (a >= 0) ? (true) : (false);
}

bool primeNum(int a)
{
    return (a > 1 and a % 2 != 0 and a % 3 != 0 and a % 4 != 0) ? (true) : (false);
}

int main()
{
    cout << "F1 - " << cube(3) << "\n";
    cout << "F2 - " << comp(11, 10) << "\n";
    cout << "F3 - " << signCheck(-10) << "\n";
    cout << "F4 - " << primeNum(11) << "\n";
}