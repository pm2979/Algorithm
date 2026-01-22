#include<iostream>
using namespace std;

int arr[6];
int sum, x;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    x = 101;
    for(int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        
        if(arr[i] % 2 == 1)
        {
            sum += arr[i];
            
            if(arr[i] < x)
                x = arr[i];
        }
    }
    
    if(x == 101)
    cout << -1;
    else
    {
        cout << sum << '\n';
        cout << x << '\n';
    }
    
}
