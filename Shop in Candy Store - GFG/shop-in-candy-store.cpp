//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        int min=0;
        int max=0;
        int sum=0;
        int free_candies=0;
        sort(candies,candies+N);
        for(int i=0;i<N;i++){
            sum+=candies[i];
            free_candies+=K;
            if(i+free_candies+1>=N){
                min=sum;
                break;
            }
        }
        sort(candies,candies+N,greater<int>());
        sum=0;
        free_candies=0;
        for(int i=0;i<N;i++){
            sum+=candies[i];
            free_candies+=K;
            if(i+free_candies+1>=N){
                max=sum;
                break;
            }
        }
        return {min,max};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends