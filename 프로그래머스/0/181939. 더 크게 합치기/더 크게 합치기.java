import java.util.*;

class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        Integer q = Integer.parseInt(String.valueOf(a) + String.valueOf(b));
        Integer w = Integer.parseInt(String.valueOf(b) + String.valueOf(a));
        if (q > w) {
            answer = q;
        } else {
            answer = w;
        }
        return answer;
    }
}