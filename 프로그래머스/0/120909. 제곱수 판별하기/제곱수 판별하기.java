import java.util.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        double d = Math.sqrt(n);
        if ((int) d == d) answer = 1;
        else answer = 2;
        return answer;
    }
}