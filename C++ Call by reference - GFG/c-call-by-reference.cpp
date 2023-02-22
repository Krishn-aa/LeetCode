//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int rev1=0;
    while(a>0)
    {
        int q=a%10;
        rev1=rev1*10+q;
        a/=10;
    }
    int rev2=0;
    while(b>0)
    {
        int q=b%10;
        rev2=rev2*10+q;
        b/=10;
    }
    a=rev1;
    b=rev2;
    swap(rev1,rev2);
    
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends