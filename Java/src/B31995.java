import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class B31995 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int m = Integer.parseInt(br.readLine());

        System.out.println((n - 1) * (m - 1) * 2);
    }
}
