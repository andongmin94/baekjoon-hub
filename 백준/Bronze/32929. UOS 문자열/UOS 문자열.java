import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(br.readLine());
        if (n % 3 == 1) System.out.println('U');
        if (n % 3 == 2) System.out.println('O');
        if (n % 3 == 0) System.out.println('S');
    }
}
