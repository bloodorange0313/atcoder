#include<iostream>
#include<unordered_map>
#include<set>

using ll = long long;

using namespace std;

int n;
int a[100005 * 2];
unordered_map<int, int>M;

void input(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        M[a[i]]++;
    }
}

ll ans(){
    ll numerator;
    numerator = (n - 1) * (n - 2);
    ll denominator;
    denominator = 2 * 1;
    for(int i = 0; i < M.size(); ++i){
        cout << M[a[i]] << endl;
        //denominator *= M[a[i]];
    }
        
    return numerator / denominator;
}


int main(){
    input();
    cout << ans() << endl;
    
}