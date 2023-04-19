//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string s, int X){
        // code here
        int freq[N+1]={0};
        for(int i=0 ;i<N;i++){
            if(s[i]=='1'){
                int left=max(i-X,0);
                int right=min(i+X,N-1);
                int start =left;
                int end =right;
                
                while(left<=right){
                    freq[left]++;
                    left++;
                    
                }
            }
                
        }   
       
        for(int i=0 ;i<N;i++){

            if(freq[i]==0){
                return false;;
            }
        
        }
        return true;
        
        // if(flag){
        //     return true;
        // }
        // else{
        //     return false;
        // }
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends
