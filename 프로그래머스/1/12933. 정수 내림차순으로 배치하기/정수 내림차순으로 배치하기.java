import java.util.Arrays;

class Solution {
    public long solution(long n) {
        String str = String.valueOf(n);
        int[] arr = new int[str.length()];

        for (int i = 0; i < str.length(); i++) {
            arr[i] = str.charAt(i) - '0';
        }
        
        Arrays.sort(arr);

        for (int i = 0; i < arr.length / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[arr.length - 1 - i];
            arr[arr.length - 1 - i] = temp;
        }
        
        String answer = "";

        for (int num : arr) {
            answer += num;
        }
        
        return Long.parseLong(answer);
    }
}