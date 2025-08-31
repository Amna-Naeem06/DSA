#include <iostream>
using namespace std;

void adddigits(int &num)
{
    int rem, ans = 0;

    while (num > 0)
    {
        rem = num % 10;
        ans = ans + rem;
        num = num / 10;
    }

    cout << ans;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of digits is: ";
    adddigits(num);
}
