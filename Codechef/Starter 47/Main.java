import java.util.PriorityQueue;
import java.util.*;
import java.util.Arrays;
//import java.util.Collection;
public class Main {
    public static int cpuTaskScheduler(int n, int[][] arr) {
        Arrays.sort(arr, (a, b) -> a[0] - b[0]);

        PriorityQueue < Integer > pq = new PriorityQueue < > ();

        // Initialize 'ans' to store the final answer and 'size' to store the current size
        int ans = 0, size = 0;

        // Iterate all the tasks
        for (int i = 0; i < n; i++) {

            // While loop to remove tasks which have already executed
            while (!pq.isEmpty()) {

                // Break the loop if the task on top of 'pq' has not executed
                if (pq.peek() > arr[i][0]) {
                    break;
                }

                // Remove the tasks that have finished execution
                pq.poll();

                // Update the 'size' of min-heap
                size--;
            }

            // Insert the end-time of the current task in min-heap
            pq.add(arr[i][1]);

            // Update the 'size' of min-heap
            size++;

            // Update 'ans' if needed
            ans = Math.max(ans, size);
        }

        // Return the final answer
        return ans;
    }
    public static void main(String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][2];
        for(int i =0;i<n;i++)
        {
            for(int j =0;j<2;j++)
            {
                a[i][j]= sc.nextInt();
            }
        }

        int result = cpuTaskScheduler(n,a);
        System.out.println(result);



    }
}
