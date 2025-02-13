#include <bits/stdc++.h> //Decimal to Binary
using namespace std;
int decimalToBinary(int num)
{
    int binary[32];
    int i = 0;
    if (num == 0)
    {
        cout << "Binary is : 0" << endl;
    }
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout << "Binary is : ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
}
int main()
{
    int num;
    cout << "Enter a Decimal number: " << endl;
    cin >> num;
    decimalToBinary(num);
    return 0;
}