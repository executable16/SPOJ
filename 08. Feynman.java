import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

 class Feynman {
    public static void main(String[] args)  throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n  = Integer.parseInt(br.readLine());
        while(n !=0){
            System.out.println(numberOfSquares(n));
            n  = Integer.parseInt(br.readLine());
        }
    }
     static long numberOfSquares(int x){
        return (((x*(x+1))/2) * (2*x+1)/3); // sum of 1^2 + 2^2 + 3^2 + 4^2 + ......
    }
}
