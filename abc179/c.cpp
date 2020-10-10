#include<iostream>

using namespace std;
using ll = long long;

int n;

void input(){
    cin >> n;
}

ll ans(){
    ll cnt = 0;
    for(int i = 1; i < n; ++i){
        for(int j = 1; j < n; ++j){
            if (i * j < n){
                cnt++;
            }else{
                break;
            }
        }
    }
    return cnt;
}

int main(){
    input();
    cout << ans() << endl;
}