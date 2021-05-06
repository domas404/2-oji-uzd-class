#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <sstream>

using namespace std;
using hrClock = chrono::high_resolution_clock;

//Saugomi studento duomenys
class Studentas {
    private:
        string vardas;
        string pavarde;
        float final;
    public:
        Studentas():final(0){};
        Studentas(istringstream& iss, float (*vid_med)(int, vector<int>&));
        // setter'iai
        void setName(string vardas);
        void setLastName(string pavarde);
        void setFinal(float final);
        // getter'iai
        string getName() const;
        string getLastName() const;
        float getFinal() const;
        // kiti metodai
        float Final(float vid, float egz);
        void readStudent(istringstream& iss, float (*vid_med)(int, vector<int>&));

        Studentas(const Studentas& stud); // copy konstruktorius
        Studentas& operator=(const Studentas& stud); // priskyrimo operatorius
        ~Studentas(){}; // destruktorius
};

double myRandom();
float Mediana(int nd, vector<int> &ND);
float Vidurkis(int nd, vector<int> &ND);

bool wayToSort(Studentas &a, Studentas &b);
bool isLessThan(Studentas &i);

#endif