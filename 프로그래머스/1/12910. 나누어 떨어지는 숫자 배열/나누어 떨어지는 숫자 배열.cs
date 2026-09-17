using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(int[] arr, int divisor) {
        List<int> list = arr.ToList();
        
        for(int i = list.Count - 1; i > -1; i--)
        {
            if(list[i] % divisor != 0)
                list.RemoveAt(i);
        }
        
        if (list.Count == 0)
        {
            return new int[] { -1 };
        }
        
        list.Sort();
        
        return list.ToArray();
    }
}