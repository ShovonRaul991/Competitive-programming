import java.util.Scanner;
public class pattern15_tuf {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();

        
        for(int i =65+x;i>=65;i--){
            for(int j =65;j<i;j++){
                System.out.print((char) j+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
