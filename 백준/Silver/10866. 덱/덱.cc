#include<iostream>
#include<deque>
using namespace std;

int X, N;
deque<int> dq;
string s;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    
    while(N--)
    {
        cin >> s;
        
        if(s == "push_front")
        {
            cin >> X;
            dq.push_front(X);
        }
        else if(s == "push_back")
        {
            cin >> X;
            dq.push_back(X);
        }
        else if(s == "pop_front")
        {
            if(dq.empty() == 0)
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else cout << -1 << '\n';
        }
        else if(s == "pop_back")
        {
            if(dq.empty() == 0)
            {
                cout << dq.back() << '\n';
               dq.pop_back(); 
            }
            else cout << -1 << '\n';
        }
        else if(s == "size")
        {
            cout << dq.size() << '\n';
        }
        else if(s == "empty")
        {
            cout << dq.empty()<< '\n';
        }
        else if(s == "front")
        {
            if(dq.empty() == 0)
            cout << dq.front() << '\n';
            else cout << -1 << '\n';
        }
                else if(s == "back")
        {
            if(dq.empty() == 0)
            cout << dq.back() << '\n';
            else cout << -1 << '\n';
        }
        
        
        
        
        
    }
    
    
    
    
    
}
