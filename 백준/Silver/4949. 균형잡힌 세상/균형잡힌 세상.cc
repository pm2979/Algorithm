#include<iostream>
#include<stack>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
while (true) {    
    string s;
    stack<char> st;
    bool isValid = true;
    
    getline(cin, s);
    if (s == ".") break;
    
    for(char c : s)
    {
        if(c == '(' || c == '[')
        {
            st.push(c);
        }         
        else if(c == ')')
                    {
                        if(st.empty() || st.top() != '(')
                        {
                            isValid = false;
                            break;
                        }
                        st.pop();
                    }
        else if(c == ']')
                    {
                        if(st.empty() || st.top() != '[')
                        {
                            isValid = false;
                            break;
                        }
                        st.pop();
                    }    
        
    }
    
    if(isValid && st.empty())
                                 {
                                     cout << "yes\n";
                                 }
else cout << "no\n";
    
}
    
}