#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            if(i % j == 0)
                a++;
        }
        
        if(a > 2)
            answer++;
        
        a = 0;
    }
    
    return answer;
}