//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        int j=n-1;
        
        int max=a[j];
        
        res.push_back(a[j]);
        
        for(j=j-1;j>=0;j--)
        {
            if(a[j]>=max)
            {
                 max=a[j];
                res.push_back(a[j]);
            }
        }
        
        
        int i=0;
        j=res.size()-1;
        while(i<=j)
        {
            swap(res[i],res[j]);
            i++;
            j--;
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends