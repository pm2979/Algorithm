public class Solution {
    public string solution(string s) {
        string answer = "";
        
        char[] c = s.ToCharArray();
        
        if(s.Length % 2 == 0)
        {
            answer = $"{c[s.Length / 2 - 1]}{c[s.Length / 2]}";
        }
        else
        {
            answer = c[s.Length/2].ToString();
        }
        
        
        return answer;
    }
}