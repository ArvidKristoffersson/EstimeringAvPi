#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

inline void scoobydoobydoo(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

double f(double x){
    return (1/(pow(16.0, x)))*(4/(8*x+1) - 2/(8*x+4) - 1/(8*x+5) - 1/(8*x+6));
}

int main(){
    scoobydoobydoo();
    int n; cin >> n;

    cout << fixed << setprecision(20);

    for (int j = 1; j <= n; j++){
        cout << j << ":       ";
        double sum = 0;
        for (int i = 0; i <= j; i++){
            sum += f(i);
        }
        cout << sum << endl;
    }

    return 0;
}
