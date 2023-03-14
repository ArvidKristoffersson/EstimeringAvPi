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
        //cout << x << " " << y << endl;
        if (inomEnhets(x, y))inside++;
        tot++;
        if (i%100000000 == 0){
            cout << i << ": " << (inside/tot)*4.0 << endl;
        }
    }

    cout << (inside/tot)*4.0 << endl;

    return 0;
}
