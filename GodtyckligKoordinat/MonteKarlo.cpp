/*
Max input för exekvering på en sekund är 5000
Då får den rätt på 4 siffror
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

bool inomEnhets(double x, double y){
    return pow((pow(x,2)+pow(y,2)), 0.5) <= 1;
}

int main(){
    scoobydoobydoo();
    int n; cin >> n;
    double total = 0, inside = 0;
    double jump = 1.0/((double)n);

    cout << fixed << setprecision(20);

    for (double i = 0; i <= 1; i += jump){
        for (double j = 0; j <= 1; j += jump){
            total++;
            if (inomEnhets(i, j))inside++;
        }
    }

    cout << 4.0 * inside/total << endl;

    return 0;
}
