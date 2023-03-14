#include <iostream>
#include <iomanip>

#pragma GCC optimize("Ofast,inline") 
#pragma GCC optimize ("unroll-loops")

using namespace std;

inline void scoobydoobydoo(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    scoobydoobydoo();
    int n; cin >> n;
    double sum = 0;
    cout << fixed << setprecision(20);

    for (double i = 1; i <= n; i+=4){
        sum += 1.0/i;
    }
    for (double i = 3; i <= n; i+=4){
        sum -= 1.0/i;
    }

    cout << sum * 4.0 << endl;


    return 0;
}
