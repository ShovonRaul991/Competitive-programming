import java.util.Scanner;

public class pattern12_tuf {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        for(int i=x;i>0;i--)
        {
            for(int j=0;j<=x-i;j++)
            {
                System.out.print(j+1);
            }

            for(int j=0;j<i*2-2;j++)
            {
                System.out.print(" ");
            }
            
            for(int j=0;j<=x-i;j++)
            {
                System.out.print(x-i-j+1);
            }
            System.out.println();
        }
        sc.close();
    }
}
