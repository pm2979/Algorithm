#include<iostream>
using namespace std;

int a[4];
int b[4];
int c[4];
int d[3];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    cin >> c[0] >> c[1] >> c[2] >> c[3];

    for(int i = 0; i < 4; i++)
    {
        if (a[i] == 0)
            d[0]++;
        if (b[i] == 0)
            d[1]++;
        if (c[i] == 0)
            d[2]++;
    }
    
    for(int j = 0; j < 3; j++)
    {
        switch(d[j])
        {
                      case 0:
                cout << "E" << '\n';
                break;
            case 1:
                cout << "A" << '\n';
                break;
            case 2:
                cout << "B" << '\n';
                break;
            case 3:
                cout << "C" << '\n';
                break;
            case 4:
                cout << "D" << '\n';
                break;      
        }            
    }
    
    
}