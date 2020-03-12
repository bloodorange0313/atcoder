#include<iostream>

using namespace std;

int a, b;

void input(){
    cin >> a >> b;
}

/*
ans = a / 0.080
ans = b / 0.10
*/

int tmp1, tmp2;

int solve(){
    int ans = -1;
    for(int i = 0; i < 100000; ++i){
        if(i >= a / 0.08 && i < (a + 1) / 0.08){
            //cout << i << endl;
            //cout << b / 0.1 << endl;
            if(i >= b / 0.1 && i < (b + 1) / 0.1){
                ans = i;
                break;
            }
        }
        
    }
    
    return ans;
}

int main(){
    input();
    cout << solve() << endl;
}