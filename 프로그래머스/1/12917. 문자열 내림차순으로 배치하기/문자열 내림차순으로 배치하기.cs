using System.Linq;

public class Solution {
    public string solution(string s) {
        char[] arr = s.ToCharArray();

        for (int i = 0; i < arr.Length - 1; i++)
        {
            for (int j = i + 1; j < arr.Length; j++)
            {
                if (arr[i] < arr[j])
                {
                    char temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        return new string(arr);
    }
}