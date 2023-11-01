//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int N=sc.nextInt();
			
            Solution ob = new Solution();
            ArrayList<Integer> primes  = ob.sieveOfEratosthenes(N);
            for(int prime : primes) {
                System.out.print(prime+" ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution{
    static ArrayList<Integer> sieveOfEratosthenes(int N){
        // code here
        ArrayList<Integer> res= new ArrayList<>();
        boolean[] isPrime = new boolean[N+1];
        for(int i=0;i<=N;i++){
            isPrime[i]=true;
        }
        
        for(int i=2;i*i<=N;i++){
            if(isPrime[i]==true){
                for(int j=i*i;j<=N;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        for(int i=2;i<=N;i++){
            if(isPrime[i]==true){
                res.add(i);
            }
        }
        return res;
        
    }
}