#include<iostream>
#include<stack>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    stack<int> st;
    string ans;
    int count = 1;
    
    cin >> n;
    
    while(n--)
    {
        int target;
        cin >> target;
        
        while(count <= target)
        {

            st.push(count++);
            ans += "+\n";
        }

        if(st.top() == target)
        {
            st.pop();
            ans += "-\n";
        }
        else if(st.top() != target)
        {
            cout << "NO\n";
            return 0;
        }
    
    }
    cout << ans;
    
    
    
    
    
    
}