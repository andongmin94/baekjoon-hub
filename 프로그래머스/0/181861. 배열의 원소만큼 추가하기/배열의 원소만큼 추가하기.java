import java.util.ArrayList;

class Solution {
    public int[] solution(int[] arr) {
        ArrayList<Integer> list = new ArrayList<>();
        for  (int i = 0; i < arr.length; i++) {
            int n =  arr[i];
            while(n > 0) {
                list.add(arr[i]);
                n--;
            }
        }
        int[] answer = new int[list.size()];
        for(int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        return answer;
    }
}