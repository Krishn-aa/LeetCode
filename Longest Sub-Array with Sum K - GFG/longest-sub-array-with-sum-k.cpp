//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        // Method 1-> Only works when each element is positive
        // int maxi=0;
        // int i=0;
        // int j=0;
        // int sum=0;
        // while(j<N)
        // {

        //     sum+=A[j];
        //     if(sum<K)
        //         j++;
        //     else if(sum==K)
        //     {
        //         maxi=max(maxi,j-i+1);
        //         j++;
        //     }    
        //     else if(sum>K)
        //     {
        //         while(sum>=K)
        //         {  
        //             sum-=A[i];
        //             i++;
        //         }
        //         if(sum==K)
        //             maxi=max(maxi,j-i+1);
        //         j++;
        //     }
        // }
        // return maxi;
        
        
        //Method 2-> Using HashMap
        int maxi=0;
        int sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<N;i++)
        {   
            sum+=A[i];
            
            if(sum==K)
                maxi=i+1;
                
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
            if(mp.find(sum-K) !=mp.end())
            {
                int index=mp[sum-K];
                maxi=max(maxi,i-index);
            }
        }
        return maxi;
        
    }

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends