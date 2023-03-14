#include <iostream>
#include <cmath>
#include <iomanip>

#define all(x)  (x).begin(), (x).end()

using namespace std;

inline void scoobydoobydoo(){
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

double Df(double x){
    return (-x)/(pow((1 - pow(x, 2)), 0.5));
}

double f(double x){
    return pow((1 - pow(x, 2)), 0.5);
}

int main(){
    scoobydoobydoo();
    int n; cin >> n;
    double c = 2/((double)n);
    double sum = 0;
    double cX = -0.999999999999;
    int amountOfLines = 0;
    cout << fixed << setprecision(20);

    while (cX < 1){
        double cY = f(cX);
        double k = Df(cX);
        double nX = c/(pow((pow(k, 2) + 1), 0.5));

        nX += cX;
        if (cX == nX)break;

        amountOfLines++;

        if (nX > 1){
            nX = 1;
            double nY = k*(1-cX);
            sum += pow((pow((1-cX), 2) + pow(nY, 2)), 0.5);
            break;
        }
        sum += c;
        cX = nX;

    }


    cout << sum << endl;
    cout << (double)amountOfLines * 2.0/n << endl;
    
    return 0;
}
