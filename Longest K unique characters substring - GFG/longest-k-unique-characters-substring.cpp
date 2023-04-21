//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int maxi=-1;
        unordered_map<char,int> mp;
        int i=0;
        int j=0;
        while(j<s.size())
        {   
            mp[s[j]]++;
            // cout<<mp.size()<<" ";
            if(mp.size()<k)
                j++;
            else if(mp.size()==k)
            {   
                maxi=max(maxi,j-i+1);
                // cout<<"maxi : "<<maxi<<" ";
                j++;
            }
            else if(mp.size()>k)
            {   
                
                while(mp.size()!=k)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]<1)
                        mp.erase(s[i]);
                    i++;
                }
                
                j++;
                
            }
            // cout<<endl;
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends