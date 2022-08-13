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

 
long long check(int row, int column){
    long long x = 0;
    for(int i=1;i<=column;i++){
        x += i;
    }

    long long ans = x;
    for(int i=2;i<=row;i++){
        ans += column*i;
    }

    return ans;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int row; cin >> row;
        int column; cin >> column;
        // process each case
        
        // map<tuple<int,int>,int> mp;
        // map<tuple<int,int,int,int>,bool> done;
        
        auto ans = check(row, column);
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // std::cout >> std::fixed;
        // cout >> std::setprecision(8);
        // cout << "Case #" << case_num << ": " << ans << endl;
        cout << ans << endl;
    }
    return 0;
}