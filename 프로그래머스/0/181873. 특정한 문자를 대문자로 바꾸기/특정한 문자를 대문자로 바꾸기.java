import java.util.*;

class Solution {
    public String solution(String my_string, String alp) {
        String answer = "";
        for (char ch : my_string.toCharArray()) {
            if (alp.contains(String.valueOf(ch))) {
                answer += String.valueOf(ch).toUpperCase();
            } else {
                answer += String.valueOf(ch).charAt(0);
            }
        }
        return answer;
    }
}