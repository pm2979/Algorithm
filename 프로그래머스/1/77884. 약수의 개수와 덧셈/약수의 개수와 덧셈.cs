using System;

public class Solution {
    public int solution(int left, int right) {
        int answer = 0;
        int x = 0;
        for(int i = left; i <= right; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0)
                    x++;
            }
            
            if(x % 2 == 0)
            {
                answer += i;
            }
            else
            {
                answer -= i;
            }
            
            x = 0;
        }
        
        return answer;
    }
}