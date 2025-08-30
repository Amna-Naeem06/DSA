#include <iostream>
using namespace std;
void binarytodecimal(int &num)
{
    int mul = 1, ans = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << "In decimal: " << ans;
}
int main()
{
    int num;
    cout << "Enter a number in binary: ";
    cin >> num;
    binarytodecimal(num);
}