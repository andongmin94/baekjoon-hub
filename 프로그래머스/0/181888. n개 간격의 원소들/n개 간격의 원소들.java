import java.util.*;

class Solution {
    public int[] solution(int[] num_list, int n) {

        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i < num_list.length; i += n) {
            a.add(num_list[i]);
        }
        int[] answer = new int[a.size()];
        for (int i = 0; i < answer.length; i++) {
            answer[i] = a.get(i);
        }
        return answer;
    }
}