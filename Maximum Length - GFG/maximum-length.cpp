//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int mx=max(a,max(b,c));
        int gaps=0;
        if(mx%2==0){
            gaps=(mx/2)-1;
        }
        else{
             gaps=(mx)/2;
            
        }
       
        if(gaps<=(a+b+c-mx)){
            return a+b+c;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends