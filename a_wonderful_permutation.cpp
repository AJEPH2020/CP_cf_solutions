#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <functional>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <math.h>
 
typedef long double LD;
typedef long long LL;
typedef int64_t I64;
// Many of the solutions require mod by 10e^9+7
#define MOD 1000000007
// The least significant bit
#define LSB(i) ((i) & -(i))
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int n; cin >> n;
        int k; cin >> k;

        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            arr.push_back(x);
        }

        auto ans = 0;
        for(int i=k; i<n; i++)
        {
            if(arr[i]<=k)
            {
                ans++;
            }
        }
        // process each case
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // std::cout >> std::fixed;
        // cout >> std::setprecision(8);
        cout << ans << endl;
    }
    return 0;
}