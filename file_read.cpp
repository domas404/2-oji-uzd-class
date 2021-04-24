#include "header.h"
#include "fileHeader.h"

// duomenys nuskaitomi i std::vector
void readFile(vector<Studentas> &M, int nd, string t, int ap, float (*vid_med)(int, vector<int>&)){
    auto pr = chrono::high_resolution_clock::now();
    ifstream input(t);
    string line;
    Studentas S;
    try{
        if (input.is_open()){
            getline(input, line);
            while(!input.eof()){
                getline(input, line);
                istringstream iss(line);
                S = Studentas(iss);
                M.push_back(S);
            }
        }
        else throw(t);
    }
    catch(string t){
        cout << "Neimanoma atidaryti failo pavadinimu \"" << t << "\"" << endl;
    }
    input.close();
    auto pab = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(pab - pr).count();
    time_taken *= 1e-9;
    cout << setw(8) << right << ap << setw(50) << left << " studentu nuskaitymas ir skaiciavimai uztruko: ";
    cout << time_taken << " s" << endl;
}
// // duomenys nuskaitomi i std::deque
// void readFile(deque<Studentas> &M, int nd, string t, int ap, float (*vid_med)(int, vector<int>&)){
//     auto pr = chrono::high_resolution_clock::now();
//     ifstream input(t);
//     int p, egz;
//     string vardas, pavarde, line;
//     Studentas A;
//     vector<int> ND;
//     float vid=0;
//     try{
//         if (input.is_open()){
//             getline(input, line);
//             while(!input.eof()){
//                 getline(input, line);
//                 istringstream iss(line);
//                 iss >> vardas >> pavarde;
//                 for (int i=0; i<nd; i++){
//                     iss >> p;
//                     ND.push_back(p);
//                 }
//                 iss >> egz;
//                 vid = (*vid_med)(nd, ND);
//                 A.setName(vardas);
//                 A.setLastName(pavarde);
//                 A.setFinal(Final(vid, egz));
//                 M.push_back(A);
//                 vardas="";
//                 pavarde="";
//                 ND.clear();
//                 egz=0;
//             }
//         }
//         else throw(t);
//     }
//     catch(string t){
//         cout << "Neimanoma atidaryti failo pavadinimu \"" << t << "\"" << endl;
//     }
//     input.close();
//     auto pab = chrono::high_resolution_clock::now();
//     double time_taken = chrono::duration_cast<chrono::nanoseconds>(pab - pr).count();
//     time_taken *= 1e-9;
//     cout << setw(8) << right << ap << setw(50) << left << " studentu nuskaitymas ir skaiciavimai uztruko: ";
//     cout << time_taken << " s" << endl;
// }
// // duomenys nuskaitomi i std::list
// void readFile(list<Studentas> &M, int nd, string t, int ap, float (*vid_med)(int, vector<int>&)){
//     auto pr = chrono::high_resolution_clock::now();
//     ifstream input(t);
//     int p, egz;
//     string vardas, pavarde, line;
//     Studentas A;
//     vector<int> ND;
//     float vid;
//     try{
//         if (input.is_open()){
//             getline(input, line);
//             while(!input.eof()){
//                 getline(input, line);
//                 istringstream iss(line);
//                 iss >> vardas >> pavarde;
//                 for (int i=0; i<nd; i++){
//                     iss >> p;
//                     ND.push_back(p);
//                 }
//                 iss >> egz;
//                 vid = (*vid_med)(nd, ND);
//                 A.setName(vardas);
//                 A.setLastName(pavarde);
//                 A.setFinal(Final(vid, egz));
//                 M.push_back(A);
//                 vardas="";
//                 pavarde="";
//                 ND.clear();
//                 egz=0;
//             }
//         }
//         else throw(t);
//     }
//     catch(string t){
//         cout << "Neimanoma atidaryti failo pavadinimu \"" << t << "\"" << endl;
//     }
//     input.close();
//     auto pab = chrono::high_resolution_clock::now();
//     double time_taken = chrono::duration_cast<chrono::nanoseconds>(pab - pr).count();
//     time_taken *= 1e-9;
//     cout << setw(8) << right << ap << setw(50) << left << " studentu nuskaitymas ir skaiciavimai uztruko: ";
//     cout << time_taken << " s" << endl;
// }
