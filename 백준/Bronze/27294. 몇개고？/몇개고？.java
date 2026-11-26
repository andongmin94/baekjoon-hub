import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int S = sc.nextInt();
        if (S == 1 || !(T >= 12 && T <= 16)) {
            System.out.println(280);
        } else if (S == 0 && T >= 12 && T <= 16) {
            System.out.println(320);
        }
    }
}
