#include "header.h"

// konstruktorius
Studentas::Studentas(istringstream& iss){
    readStudent(iss);
}

// setter'iai
void Studentas::setName(string vardas){
    this->vardas = vardas;
}
void Studentas::setLastName(string pavarde){
    this->pavarde = pavarde;
}
void Studentas::setFinal(float final){
    this->final = final;
}

// getter'iai
string Studentas::getName() const{
    return vardas;
}
string Studentas::getLastName() const{
    return vardas;
}
float Studentas::getFinal() const{
    return final;
}

// skaiciuojamas galutinis ivertinimas
float Studentas::Final(float vid, float egz){
    return ((vid)*0.4 + (egz*0.6));
}

// is eilutes nuskaitomi duomenys
void Studentas::readStudent(istringstream& iss){
    int p, egz;
    vector<int> ND;
    float vid=0;
    iss >> vardas >> pavarde;
    while (iss >> p){
        ND.push_back(p);
    }
    egz = ND.back();
    ND.pop_back();
    int nd = ND.size();
    vid = Mediana(nd, ND);
    final = Final(vid, egz);
}