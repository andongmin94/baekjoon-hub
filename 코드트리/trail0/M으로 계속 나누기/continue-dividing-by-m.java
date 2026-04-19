import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(a);
        while(a > 0) {
            a = a / b;
            if (a != 0) System.out.println(a);
        }
    }
}