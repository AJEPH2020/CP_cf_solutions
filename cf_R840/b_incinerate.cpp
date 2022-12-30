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

        // inputs
        int N; cin >> N;
        int k; cin >> k;
        multimap<int, int> mp;

        vector<int> h;
        vector<int> p;

        for (auto int_num = 1; int_num <= N; ++ int_num) {
            int x; cin >> x;
            h.push_back(x);
        }

        for (auto int_num = 1; int_num <= N; ++ int_num) {
            int x; cin >> x;
            p.push_back(x);
        }

        for (auto int_num = 1; int_num <= N; ++ int_num) {
            mp.insert(pair<int, int>(p[int_num],h[int_num]));
        }

        bool turn = 0;
        while((!mp.empty()) && (k>0)){

            if(!turn){

                for(auto it=mp.begin(); it!=mp.end(); it++)
                {
                    it->second -= k;

                    if(it->second<=0){
                        mp.erase(it);
                    }
                }

                turn = 1;
            }
            else{
                k -= mp.begin()->first;

                turn = 0;
            }
        }

        // process each case
        // main code
        // auto ans = 0;
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // std::cout >> std::fixed;
        // cout >> std::setprecision(8);

        if(k==0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }
    return 0;
}