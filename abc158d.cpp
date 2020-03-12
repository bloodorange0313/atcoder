#include<iostream>
#include<string>
#include<algorithm>
#include<deque>

using namespace std;

string s;
int q;
int query[2 * 100005];
int f[2 * 100005];
string c[2 * 100005];

void input(){
    cin >> s;
    cin >> q;
    for(int i = 0; i < q; ++i){
        cin >> query[i];
        if(query[i] == 2){
            cin >> f[i] >> c[i];
        }
    }
}


deque<string>dq;
void solve(){
    dq.push_front(s);
    int cnt = 0;
    for(int i = 0; i < q; ++i){
        if(query[i] == 1){
            cnt++;
        }else{
            if(cnt % 2 == 0){
                if(f[i] == 1){
                    dq.push_front(c[i]);
                }else{
                    dq.push_back(c[i]);
                }
            }else{
                if(f[i] == 2){
                    dq.push_front(c[i]);
                }else{
                    dq.push_back(c[i]);
                }
            }
        }
    }
    if(cnt % 2 == 1){
        reverse(dq.begin(), dq.end());
        
    }
    while(!dq.empty()){
        string tmp = dq.front();
        dq.pop_front();
        cout << tmp;
    }
    cout << endl;
    
    
    //return ans;
}

int main(){
    input();
    //cout << solve() << endl;
    solve();
    return 0;
}