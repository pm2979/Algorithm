#include<iostream>
#include<queue>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int N;
    queue<int> q;
    
    
    cin >> N;
    
    int i = 1;
    while(N--)
    {
        q.push(i);
        i++;
    }
    
    while(q.size() != 1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    cout << q.front();
    
    
}