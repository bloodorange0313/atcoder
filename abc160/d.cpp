#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
#include<cmath>

using namespace std;

int n, x, y;
unordered_map<int, int>M;
vector<int>V[103 * 2];

void input(){
    cin >> n >> x >> y;
}


int shortedtpath(int s, int t){
    return min(abs(s - t), min(abs(x -s) + 1 + abs(t - y), abs(y - s) + 1 + abs(t - x)));
}



int main(){
    input();
    //makeGraph();
    
    for(int i = 1; i < n; ++i){
        //cout << "check" << endl;
        for(int j = i + 1; j <= n; ++j){
            M[shortedtpath(i, j)]++;
        }
    }
    
    for(int i = 1; i <= n - 1; ++i){
        cout << M[i] << endl;
    }
}