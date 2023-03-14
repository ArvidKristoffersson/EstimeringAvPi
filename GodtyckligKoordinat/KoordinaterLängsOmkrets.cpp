/*
Max input för exekvering under 1 sekund är ungefär 2000000
Då får den ungefär 7 siffror rätt
*/


#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <time.h>

#define all(x)  (x).begin(), (x).end()

using namespace std; 

inline void scoobydoobydoo(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

struct Punkt{
    double x;
    double y;
};

bool PunktSortering(Punkt a, Punkt b){
    return a.x < b.x;
}

double Gauss(vector<Punkt>& v){
    double ret = 0;
    for (int i = 1; i < v.size()-1; i++){
        ret += v[i].x * v[i+1].y;
        ret -= v[i].y * v[i+1].x;
    }
    
    return abs(ret)/2;
}

int main(){
    scoobydoobydoo();
    srand(time(NULL));
    int n; cin >> n;
    cout << fixed << setprecision(20);
    vector<Punkt> punkter;
    Punkt T;
    T.x = 0; T.y = 1;
    punkter.push_back(T);
    T.y = 0; T.x = 1;
    punkter.push_back(T);


    for (int i = 0; i < n; i++){
        Punkt P;
        P.x = rand()/(RAND_MAX + 0.0);
        P.y = pow((1-pow(P.x, 2)), 0.5);
        punkter.push_back(P);
    }

    sort(all(punkter), PunktSortering);

    T.x = 0; punkter.push_back(T);

    cout << Gauss(punkter)*4.0 << endl;


    return 0;
}
