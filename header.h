#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <random>
#include <time.h>
#include <algorithm>
#include <chrono>
#include <deque>
#include <list>
#include <sstream>

using namespace std;
using hrClock = chrono::high_resolution_clock;

//Saugomi studento duomenys
class Studentas {
    private:
        string vardas;
        string pavarde;
        float final;      // galutinis pazymys
    public:
        Studentas():final(0){};
        Studentas(istringstream& iss);
        void setName(string vardas){
            this->vardas = vardas;
        }
        void setLastName(string pavarde);
        void setFinal(float final);
        string getName() const;
        string getLastName() const;
        float getFinal() const;
        float Final(float vid, float egz);
        void readStudent(istringstream& iss);
};

double myRandom();
float Mediana(int nd, vector<int> &ND);
float Vidurkis(int nd, vector<int> &ND);

void partitionStudents(vector<Studentas> &M, vector<Studentas>::iterator &it, int ap);
void partitionStudents(deque<Studentas> &M, deque<Studentas>::iterator &it, int ap);
void partitionStudents(list<Studentas> &M, list<Studentas>::iterator &it, int ap);

void sortStudents(vector<Studentas> &M, int ap);
void sortStudents(deque<Studentas> &M, int ap);
void sortStudents(list<Studentas> &M, int ap);

bool wayToSort(Studentas &a, Studentas &b);
bool isLessThan(Studentas &i);


#endif