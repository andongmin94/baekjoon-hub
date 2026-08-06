import java.util.ArrayList;

class Solution {
    public int[] solution(int[] num_list) {
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < num_list.length; i++) {
            arr.add(num_list[i]);
        }
        if (arr.get(arr.size() - 1) > arr.get(arr.size() - 2)) {
            arr.add(arr.get(arr.size() - 1) - arr.get(arr.size() - 2));
        } else {
            arr.add(arr.get(arr.size() - 1) * 2);
        }
        int[] answer = new int[arr.size()];
        for (int i = 0; i < arr.size(); i++) {
            answer[i] = arr.get(i);
        }
        return answer;
    }
}