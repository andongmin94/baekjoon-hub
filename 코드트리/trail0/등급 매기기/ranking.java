import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String s = "";
        if (a >= 90) {
            s = "A";
        } else if (a >= 80) {
            s = "B";
        } else if (a >= 70) {
            s = "C";
        } else if (a >= 60) {
            s = "D";
        } else {
            s = "F";
        }
        System.out.println(s);
    }
}