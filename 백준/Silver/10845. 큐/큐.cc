#include<iostream>
#include<queue>
using namespace std;

int N,x;
queue<int> q;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    while(N--)
    {
        string s;
        cin >> s;
    if(s == "push")
    {
       cin >> x;
       q.push(x);
    }
    else if(s == "pop")
    {
       if(q.empty() == 1)
       {
           cout << -1 << '\n';
       }else
       {
            cout << q.front() << '\n';
            q.pop();   
       }
    }
    else if(s == "size")
    {
        cout << q.size() << '\n';
    }
    else if(s == "empty")
    {
        if(q.empty())
       {
           cout << 1 << '\n';
       }
       else
       {
           cout << 0 << '\n'; 
       }
    }
    else if(s == "front")
    {
        if(q.empty() == 1)
       {
           cout << "-1" << '\n';
       }else
       {
            cout << q.front() << '\n';
       }
    }
    else if(s == "back")
    {
        if(q.empty() == 1)
       {
           cout << "-1" << '\n';
       }else
       {
            cout << q.back() << '\n';  
       }
    }
    }
    
}