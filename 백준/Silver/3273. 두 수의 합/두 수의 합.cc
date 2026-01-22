#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    int a[100001] = {};
    bool occur[2000001];
    int answer = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++) {
        // x-a[i]가 존재하는지 확인
        if (x - a[i] > 0 && occur[x - a[i]]) answer++;
        occur[a[i]] = true;
    }

    cout << answer;

}