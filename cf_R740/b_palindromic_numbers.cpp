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

 
vector<int> check(long long length, vector<int> num){

    long long x = num[0];
    bool isNine = 0;

    // cout << "x: " << x << endl;

    if(x == 9){
        isNine = 1;
    }

    vector<int> ans;

    if(isNine){

        // vector<int> extraOne;

        for(int i=0;i<length;i++){

            ans.push_back(9 - num[i]);
            // extraOne.push_back(1);

        }

        // cout << "ans: " << ans << endl;
        // cout << "extraOne: " << extraOne << endl;
        // cout << "pow(10,i): " << pow(10,0) << endl;
        // cout << "pow(10,i): " << pow(10,1) << endl;
        // cout << "pow(10,i): " << pow(10,2) << endl;



        int carry = 1;
        for(int i=0;i<length;i++){
            
            int x = (ans[ans.size()-1-i] + 1 + carry)/10;
            ans[ans.size()-1-i] = (ans[ans.size()-1-i] + 1 + carry)%10;
            carry = x;
        }

    }else{

        for(int i=0;i<length;i++){

            ans.push_back(9 - num[i]);

        }
        
    }

    return ans;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        long long length; cin >> length;
        string num; cin >> num;
        vector<int> a;
        for (int i = 0; i < length; i++)
        {
            a.push_back(stoi(num.substr(i,1)));
        }
        
        // process each case
        
        // map<tuple<int,int>,int> mp;
        // map<tuple<int,int,int,int>,bool> done;
        
        auto ans = check(length, a);
        // CODE HERE
        // CODE HERE
        // output each answer for test case
        // std::cout >> std::fixed;
        // cout >> std::setprecision(8);
        // cout << "Case #" << case_num << ": " << ans << endl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }

        cout << endl;
    }
    return 0;
}