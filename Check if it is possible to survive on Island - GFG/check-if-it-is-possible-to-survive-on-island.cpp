//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        /*
        S -> Days
        N -> Can Buy
        M -> Spent
        */
        
        if(N<M)
            return -1;
        
        float total_required_food=S*M;
        int total_days_to_buy=S-(S/7);
        int days_of_buying=ceil(total_required_food/N);
        
        if(total_days_to_buy<days_of_buying)
            return -1;
            
        return days_of_buying;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends