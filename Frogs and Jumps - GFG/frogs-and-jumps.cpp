//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        // int mx=frogs[0];
        // for(int i=0;i<N;i++) mx=max(mx,frogs[i]);
        // cout<<mx<<endl;
        // sort(frogs,frogs+N);
        vector<int>vis(leaves+1,0);
        // for(int i=1 ;i=leaves;i++){
        //     vis.push_back[i];
            
        // }
        for(int j=0 ; j<N ; ++j){
            if(frogs[j]<=leaves && vis[frogs[j]]==0){
                for(int i=frogs[j];i<=leaves;i+=frogs[j]){
                    
                    // vector<int>::iterator it;
                    // it=remove(vis.begin(),vis.end(),frogs[j]);
                    vis[i]+=1;
                    // cout<<vis[i]<<" ";
               
                
                }
            }
            
                
            
            
        }
        int ans=0;
        for(int i=1;i<=leaves;++i){
            // cout<<vis[i]<<endl;
            if(vis[i]==0) ans++;
                
            
            
        }
        return ans;
        
    
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends

// In this code i Use seive algorithum 
