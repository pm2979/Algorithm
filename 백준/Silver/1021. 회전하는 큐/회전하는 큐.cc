#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    deque<int> dq;
    int N, M;
    int a, result;
    
    cin >> N >> M;
    for(int i = 1; i <= N; i++) dq.push_back(i);
    
    result = 0;
    
    while(M--)
    {
        cin >> a;
        
        int idx = find(dq.begin(), dq.end(), a) - dq.begin();
        while(a != dq.front())
        {
            if(idx < dq.size() - idx)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            result++;
        }  
        
        dq.pop_front();
        
    }
    cout << result;
    
    
    
}