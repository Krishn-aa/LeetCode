//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] array = new int[n - 1];
            for (int i = 0; i < n - 1; i++) {
                array[i] = Integer.parseInt(str[i]);
            }
            Solution sln = new Solution();
            System.out.println(sln.MissingNumber(array, n));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    int MissingNumber(int array[], int n) {
        // Your Code Here
        int array_sum=0;
        for(int i=0;i<n-1;i++)
        {
            array_sum+=array[i];
        }
        
        int actual_sum=(n*(n+1))/2;
        int missing_num = actual_sum-array_sum;
        return missing_num;
    }
}