//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
    
        // Your code here
        if(n==1)
            return 1;
        long long left_sum=a[0];
        long long right_sum=a[n-1];
        int i=0;
        int j=n-1;
        while(i<j && i<n){
    
            if(left_sum==right_sum && j-i==2)
                return i+2;
                
            if(left_sum<right_sum)
            {
                   i++;
                left_sum+=a[i];
             
            }
            else
            {
                j--;
                right_sum+=a[j];
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends