//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k=pat.size();
	    int count=0;
	    int i=0;
	    int j=0;
	    vector<int> sub_str(26,0);
	    vector<int> str(26,0);
	    
	   // Storing pat characters frequency in sub_str array
	    for(int i=0;i<k;i++)
	    {   
	       int idx = pat[i]-'a';
	       sub_str[idx]+=1;
	    }
	        
	    
	    while(j<txt.size())
	    {
	        str[txt[j]-'a']+=1;     
	        
	        if(j-i+1<k)
	            j++;
	        else if(j-i+1==k)
	        {  
	            count++;
	            for(int temp=0;temp<26;temp++)          //Iterating all values of sub_str and str to check anagram or not
	                if(str[temp]!=sub_str[temp])
	                {
	                    count--;
	                    break;
	                }
	            str[txt[i]-'a']-=1;                     //Removing the element freq in str
	            i++;
	            j++;
	        }
	    }
	   return count;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends