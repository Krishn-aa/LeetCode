//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int num){
        // code here
        int sum=0;
        int temp=num;
        while(temp>0)
        {   
            int cube=pow(temp%10,3);
            sum+=cube;
            temp/=10;
        }
        

        if(sum==num)
            return "Yes";
        else
            return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends