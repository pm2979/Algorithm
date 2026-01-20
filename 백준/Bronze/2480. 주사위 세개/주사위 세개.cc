#include<iostream>
#include <algorithm>
using namespace std;

int a,b,c;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> a >> b >> c;
    
    if(a == c && c == b)
    {
        cout << 10000 + a * 1000;
    }
    else if(a == c)
    {
        cout << 1000 + a * 100;
    }
    else if(a == b)
    {
        cout << 1000 + a * 100;
    }
    else if(b == c)
    {
        cout << 1000 + b * 100;
    }
    else
    {
        cout << max({a, b, c}) * 100;
    }     
    
}