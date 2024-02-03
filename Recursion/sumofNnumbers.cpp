
// Parameterised way

#include <bits/stdc++.h>
using namespace std;

void sumOfNumbers(int, int);

int main()
{
    int n, sum = 0;
    cout << "Enter the number : ";
    cin >> n;
    sumOfNumbers(n, sum);
    return 0;
}

void sumOfNumbers(int a, int b)
{
    if (a < 1)
    {
        cout << "Sum of numbers is : " << b;
        return;
    }
    sumOfNumbers(a - 1, b + a);
}

// Functional recursion

#include <bits/stdc++.h>
using namespace std;

int sumOfNumbers(int);

int main()
{
    int n, sum;
    cout << "Enter the number : ";
    cin >> n;
    sum = sumOfNumbers(n);
    cout << "Sum of numbers is : " << sum;
    return 0;
}

int sumOfNumbers(int a)
{
    if (a == 0)
        return a;
    return a + sumOfNumbers(a - 1);
}
