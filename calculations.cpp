#include "studentas.h"
#include "header.h"

// ieskoma ribos, kuri skiria 'kietiakus' ir 'varguolius'
bool isLessThan(Studentas &i){
    return(i.getFinal() >= 5);
}
// nurodomi rikiavimo kriterijai 
bool wayToSort(Studentas &a, Studentas &b) {
    return a.getFinal() > b.getFinal();    // nurodoma rikiuoti pagal varda didejanciai (abeceles tvarka)
}
// atsitiktiniu skaiciu generavimo funkcija
double myRandom(){
    static mt19937 mt(static_cast<long unsigned int>(hrClock::now().time_since_epoch().count()));
    static uniform_int_distribution<int> dist(1, 10);
    return dist(mt);
}
// funkcija, skaiciuojanti ivertinimu mediana
float Mediana(int nd, vector<int> &ND){
    int a, b;
    float med;
    sort(ND.begin(), ND.end());
    if (nd%2==1){
        a = nd/2;
        med = ND[a];
    }
    else {
        a = nd/2-1;
        b = nd/2;
        med = (float)(ND[a] + ND[b])/2;
    }
    return med;
}
// funkcija, skaiciuojanti ivertinimu vidurki
float Vidurkis(int nd, vector<int> &ND){
    int suma=0;
    for (int i=0; i<nd; i++){
        suma += ND[i];
    }
    return (float)suma/nd;
}