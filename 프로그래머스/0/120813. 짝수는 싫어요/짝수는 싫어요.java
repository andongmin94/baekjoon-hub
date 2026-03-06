import java.util.*;

class Solution {
    public int[] solution(int n) {
        
        ArrayList arr = new ArrayList();
        for (int i = 0; i <= n; i++) {
            if (i % 2 != 0) {
                arr.add(i);
            }
        }
        int[] answer = new int[arr.size()];

        for (int i = 0; i < answer.length; i++) {
            answer[i] = (int) arr.get(i);
        }
        return answer;
    }
}