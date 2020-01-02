import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class FCTRL {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int TC;
        TC = Integer.parseInt(br.readLine());
        while(TC-- > 0){
            int n;
            n = Integer.parseInt(br.readLine());
            int trailingZeroes=0;
            while(n >= 5){
                trailingZeroes+= n/5;
                n/=5;
            }
            System.out.println(trailingZeroes);
        }
    }
}
