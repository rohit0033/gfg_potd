//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        sort(A.begin(), A.end()); // closer element should remain closer
    sort(B.begin(), B.end()); // Minimum opern
    vector<int> Aodds, Aevens, Bodds, Bevens;
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; i++)
    {
        sum1 += A[i];
        sum2 += B[i];
        if (A[i] % 2 != 0)
            Aodds.push_back(A[i]);
        else
            Aevens.push_back(A[i]);
        if (B[i] % 2 != 0)
            Bodds.push_back(B[i]);
        else
            Bevens.push_back(B[i]);
    }
    // confirmation that A->B
    if (sum1 != sum2 || Aodds.size() != Bodds.size())
        return -1;

    long long ans = 0;
    for (int i = 0; i < Aodds.size(); i++)
    {
        ans += abs(Aodds[i] - Bodds[i]);
    }
    for (int i = 0; i < Aevens.size(); i++)
    {
        ans += abs(Aevens[i] - Bevens[i]);
    }
    return ans / 4;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends

// In this questio we have to take three observation 
// 1. sum of A and sum of B should be equal
// 2. both A and B have shoul have equal no of odd numbers 
// 3.we can't perform operations on unsorted array like 
//   3 5|---it sorted so 2 operations rewquired but 3 5|---- it is unsorted so 4 opertions required 
//   1 7|                                           7 1|
  
//  we store odd elements and even elements seprately to perform operation 
//  then we store 
