#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    long num = a * b * c;
    int arr[10] = {};

    while (num > 0)
    {
        arr[num % 10]++;
        num /= 10;
    }

    for (auto c : arr)
    {
        cout << c << '\n';
    }

}