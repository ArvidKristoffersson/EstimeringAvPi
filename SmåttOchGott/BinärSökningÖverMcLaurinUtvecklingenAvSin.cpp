/*
Max input för exekvering på under en sekund är ungefär 20
Den får då rätt på 14 siffror
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

typedef long long ll;

ll linf = 1e15+1;

inline void scoobydoobydoo(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

long long dp[101];

long long fakultet(int x){
    if (dp[x] > 0){
        return dp[x];
    }
    return dp[x] = x * fakultet(x-1);
}

double McLaurin(double x, int grad){
    double sum = 0;
    for (int i = 1; i <= grad; i+=4){
        sum += pow(x, i)/fakultet(i);
    }
    for (int i = 3; i <= grad; i+=4){
        sum -= pow(x, i)/fakultet(i);
    }
    return sum;
}

double binarySearch(int grad){
    double ret = -1;
    double a = 0;
    double b = 1;

    while (a < b){
        if (b-a < 1e-15)break;
        double k = (a+b)/2.0;
        if (McLaurin(k, grad) >= 0.5){
            ret = k;
            b = k;
        } else {
            a = k;
        }
    }
    return ret * 6.0;
}


int main(){
    scoobydoobydoo();
    dp[0] = 1;

    int n; cin >> n;

    cout << fixed << setprecision(20);
    cout << binarySearch(n) << endl;



    return 0;
}
