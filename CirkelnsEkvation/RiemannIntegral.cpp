#include <iostream>
#include <cmath>
#include <iomanip>

#pragma GCC optimize("Ofast,inline") 
#pragma GCC optimize ("unroll-loops")

using namespace std;

inline void scoobydoobydoo(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

double f(double x){
    return pow((1 - pow(x,2)), 0.5);
}

int main(){
    scoobydoobydoo();
    double n; cin >> n;
    int from, to; cin >> from >> to;

    cout << fixed << setprecision(20);

    double jump = (double)(to-from)/n;

    double sum = 0;

    for (double i = from + jump/2.0; i <= to; i += jump){
        sum += f(i)*jump;
    }

    cout << sum * 2 << endl;


    return 0;
}
