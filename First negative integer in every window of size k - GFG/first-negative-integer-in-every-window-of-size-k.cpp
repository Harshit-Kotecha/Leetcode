// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                          
        vector<long long int> nums(N, 0);       
        for(int i = N-1, ind = -1; i >= 0; i--) {
            if(A[i] < 0) {
                ind = i;
            }
            nums[i] = ind;
        }
        int i = 0, j = 0;
        vector<long long> rs;
        while(j < N) {
            if(j - i + 1 < K) {
                j++;
            } else {
                if(nums[i] == -1 || nums[i] > j) {
                    rs.push_back(0);
                } else {
                    rs.push_back(A[nums[i]]);
                }
                i++, j++;
            }
        }
        return rs;
                                            
 }