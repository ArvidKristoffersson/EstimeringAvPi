/*
Max input för exekvering på en sekund är ungefär 15 000 000
Då får den 16 siffror rätt
*/


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
    
    double sum = 0;
    
    for (int i = 0; i <= n; i++){
        sum += f(i);
    }
   
    return 0;
}
