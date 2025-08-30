#include <iostream>
using namespace std;
void decimaltobinary(int &num)
{
    int mul = 1, ans = 0, rem;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << "In binary: " << ans;
}
int main()
{
    int num;
    cout << "Enter a number in decimal: ";
    cin >> num;
    decimaltobinary(num);
}