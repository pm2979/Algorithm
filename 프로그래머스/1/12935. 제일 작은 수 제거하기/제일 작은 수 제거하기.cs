public class Solution
{
    public int[] solution(int[] arr)
    {
        int[] answer;
        int x = 0;

        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[x] > arr[i])
            {
                x = i;
            }
        }

        if (arr.Length == 1)
        {
            return new int[] { -1 };
        }
        else
        {
            answer = new int[arr.Length - 1];
        }

        int index = 0;

        for (int i = 0; i < arr.Length; i++)
        {
            if (i == x)
                continue;

            answer[index] = arr[i];
            index++;
        }

        return answer;
    }
}