#include <iostream>

using namespace std;

void fib(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i)
    {
        cout << a << endl;
        int temp = b;
        b += a;
        a = temp;
    }
}

int main()
{
    cout << "Hello, world!" << endl;
    fib(10);
    return 0;
}