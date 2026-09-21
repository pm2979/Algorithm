using System.Linq;

public class Solution {
    public string solution(string phone_number) {
        string answer = "";
        
        int[] arr = phone_number.Select(c => c - '0').ToArray();
        
        for(int i = 0; i < arr.Length; i++)
        {
            if(i < arr.Length - 4)
                answer += "*";
            else
                answer += $"{arr[i]}";
        }
        
        return answer;
    }
}