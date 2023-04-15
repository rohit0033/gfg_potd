//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>>s;
        for(int i=0 ; i<N;i++){
            int c=color[i];
            int r=radius[i];
            if(s.empty()){
               s.push({c,r});
            }
            else{
                if(s.top().first==color[i] && s.top().second==radius[i]){
                    s.pop();
                }
                else{
                    s.push({c,r});
                
                }
            }
            
        }
        // int ans=0;
        // while(!col.empty()){
        //     ans++;
        //     col.pop();
        // }
        // return ans;
        return s.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends
