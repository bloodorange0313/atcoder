#include<iostream>

using namespace std;
using ll = long long;

ll n;
ll a[200005];
ll tmp_sum[200005];
ll tmp_max[200005];

void input(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i == 0){
            tmp_sum[i] = a[i];
            tmp_max[i] = a[i];
        }else{
            tmp_sum[i] = tmp_sum[i - 1] + a[i];
            if(tmp_max[i - 1] >= tmp_sum[i]){
                tmp_max[i] = tmp_max[i - 1];
            }else{
                tmp_max[i] = tmp_sum[i];
            }
            
        }
        
    }
}

ll solve(){
    ll ans = 0;
    ll x = 0;
    for(int i = 0; i < n; ++i){
        ans = max(ans, x + tmp_max[i]);
        x += tmp_sum[i];
    }
    return ans;
}

int main(){
    input();
    cout << solve() << endl;
}