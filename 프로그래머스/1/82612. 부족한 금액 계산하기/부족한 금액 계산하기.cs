using System;

public class Solution
{
    public long solution(int price, int money, int count)
    {
        long totalPrice = 0;

        for (int i = 1; i <= count; i++)
        {
            totalPrice += (long)price * i;
        }

        if (totalPrice > money)
        {
            return totalPrice - money;
        }

        return 0;
    }
}