public class Solution {
    public int solution(int num) {
        int answer = 0;
        long value = num;
        
        if(value == 1)
            return 0;
        
        while(value != 1 && answer < 500)
        {
            if(value % 2 == 0)
            {
                value /= 2;
            }
            else
                value = value * 3 + 1;
            
            answer++;
        }
        
        if(answer >= 500)
            return -1;
        else
            return answer;
    }
}