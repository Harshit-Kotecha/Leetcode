// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int res = 0, len = A.length();
        for(int i = 0; i < len; i++) {
            if(tolower(A[i]) == tolower(B[i])) res++;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}  // } Driver Code Ends