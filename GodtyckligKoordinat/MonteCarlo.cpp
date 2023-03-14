/*
Max input för exekvering på en sekund är ungefär 15 000 000
Då får den generellt sätt 4 siffror rätt
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

#pragma GCC optimize("Ofast,inline") 
#pragma GCC optimize ("unroll-loops")

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
    cout << fixed << setprecision(15);
    double inside = 0, tot = 0;
    srand( (unsigned)time( NULL ) );
 
    for (int i = 0; i < n; i++){
        double x = (double) rand()/RAND_MAX;
        double y = (double) rand()/RAND_MAX;
        if (inomEnhets(x, y))inside++;
        tot++;
    }

    cout << (inside/tot)*4.0 << endl;

    return 0;
}
