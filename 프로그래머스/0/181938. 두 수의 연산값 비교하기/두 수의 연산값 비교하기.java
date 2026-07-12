import java.util.*;

class Solution {
    public int solution(int a, int b) {
        int answer = 0;

        if (Integer.valueOf(String.valueOf(a) + String.valueOf(b)) > 2 * a * b) {
            answer = Integer.valueOf(String.valueOf(a) + String.valueOf(b));
        } else {
            answer = 2 * a * b;
        }

        return answer;
    }
}