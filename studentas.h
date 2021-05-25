#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <sstream>

using namespace std;
using hrClock = chrono::high_resolution_clock;

// Base klasė
class Person {
    protected:
        string vardas;
        string pavarde;
    public:
        virtual void setName(string vardas) = 0;
        virtual void setLastName(string pavarde) = 0;
        string getName() const;
        string getLastName() const;
};

// Studento derived klasė
class Studentas: public Person {
    private:
        float finalGrade;
    public:
        Studentas():finalGrade(0){};
        Studentas(istringstream& iss, float (*vid_med)(int, vector<int>&));

        Studentas(const Studentas& stud); // copy konstruktorius
        Studentas& operator=(const Studentas& stud); // priskyrimo operatorius
        ~Studentas(){}; // destruktorius

        // setter'iai
        void setName(string vardas);
        void setLastName(string pavarde);
        void setFinal(float finalGrade);
        // getter'iai
        string getName() const;
        string getLastName() const;
        float getFinal() const;
        // kiti metodai
        float Final(float vid, float egz);
        void readStudent(istringstream& iss, float (*vid_med)(int, vector<int>&));
};

double myRandom();
float Mediana(int nd, vector<int> &ND);
float Vidurkis(int nd, vector<int> &ND);

bool wayToSort(Studentas &a, Studentas &b);
bool isLessThan(Studentas &i);

#endif