using System.Linq;

public class Solution {
    public bool solution(int x) {  
        int[] arr = x.ToString().Select(c => c - '0').ToArray();
        
        int a = 0;
            
        for(int i = 0; i < arr.Length; i++)
        {
            a += arr[i];
        }
           
        if(x % a == 0)
            return true;
        else
            return false;
    }
}