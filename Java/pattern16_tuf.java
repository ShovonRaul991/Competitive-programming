import java.util.Scanner;

public class pattern16_tuf {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();

        
        for(int i =64;i<65+x;i++){
            for(int j =64;j<i;j++){
                System.out.print((char) i+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
