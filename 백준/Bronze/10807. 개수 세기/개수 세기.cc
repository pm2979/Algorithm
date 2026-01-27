#include<iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, x;
    int arr[205] = {};
    
    cin >> N;
    
    while(N--)
    {
        int a;
        cin >> a;
        arr[100 + a]++;
    }
    
    cin >> x;
    
    cout << arr[x + 100];
}