import java.util.Scanner;;
public class pattern13_tuf {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        int count = 0;
        for(int i=0;i<=x;i++){
            for(int j=0;j<i;j++)
            {
                count++;
                System.err.print(count+" ");
            }
            System.err.println();
        }
        sc.close();
    }
}
