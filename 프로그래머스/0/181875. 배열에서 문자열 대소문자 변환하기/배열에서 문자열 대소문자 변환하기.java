import java.util.*;

class Solution {
    public String[] solution(String[] strArr) {
        ArrayList<String> list = new ArrayList<String>();
        for (int i = 0; i < strArr.length; i++) {
            String arr = "";
            if (i % 2 != 0) {
               
                for (int j = 0; j < strArr[i].length(); j++) {
                    arr += Character.toUpperCase(strArr[i].charAt(j));
                }
            } else {
                for (int j = 0; j < strArr[i].length(); j++) {
                    arr += Character.toLowerCase(strArr[i].charAt(j));
                }
            }
            list.add(arr);
        }
        String[] answer = new String[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        return answer;
    }
}