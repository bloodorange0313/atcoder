#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;


int x, y,a,b,c;
ll p[100005], q[100005], r[100005];
vector<ll>V, V1, V2;

void input(){
    cin >> x >> y >> a  >> b >> c;
    for(int i = 0; i < a; ++i){
        cin >> p[i];
        V1.push_back(p[i]);
    }
    for(int i = 0; i < b; ++i){
        cin >> q[i];
        V2.push_back(q[i]);
    }
    for(int i = 0; i < c; ++i){
        cin >> r[i];
        V.push_back(r[i]);
    }
    sort(V1.begin(), V1.end());
    sort(V2.begin(), V2.end());
}

ll solve(){
    int tmp1 = V1.size() - 1;
    int cnt1 = 0;
    while(cnt1 < x){
        cnt1++;
        V.push_back(V1[tmp1]);
        tmp1--;
    }
    int tmp2 = V2.size() - 1;
    int cnt2 = 0;
    while(cnt2 < y){
        cnt2++;
        V.push_back(V2[tmp2]);
        tmp2--;
    }
    sort(V.begin(), V.end());
    //for(int i = 0; i < V.size(); ++i){
    //    cout << V[i] << endl;
    //}
    int cnt = 0;
    int tmp = V.size() - 1;
    ll ans = 0;
    while(cnt < x + y){
        cnt++;
        ans += V[tmp];
        tmp--;
    }

    return ans;
}

int main(){
    input();
    cout << solve() << endl;
}