#include "../studentas.h"
#include <gtest/gtest.h>"

// testuojamas klasės konstruktorius, duomenis pateikiant eiluteje
TEST(StudentTest, nameTest){
    istringstream iss("Vardas Pavarde 1 1 5 6 4 3 1 5 7 1 7");
    Studentas stud = Studentas(iss, &Vidurkis);
    EXPECT_EQ("Vardas", stud.getName());
    EXPECT_EQ("Pavarde", stud.getLastName());
    EXPECT_EQ(5.56F, stud.getFinal());
}
// testuojamas default klases konstruktorius ir setter'iai
TEST(StudentTest, SetterTest){
    Studentas stud;
    ASSERT_EQ(0, stud.getFinal()) << "Primary value is not 0";
    vector<int> grades = {10,9,7,10};
    stud.setName("Vardas");
    stud.setLastName("Pavarde");
    stud.setFinal(stud.Final(Vidurkis(4,grades),8));
    EXPECT_EQ("Vardas", stud.getName());
    EXPECT_EQ("Pavarde", stud.getLastName());
    EXPECT_EQ(8.4F, stud.getFinal());
}
// testuojama medianos skaiciavimo funkcija
TEST(CalculationsTest, MedianTest){
    vector<int> grades = {8,7,6,9};
    EXPECT_EQ(7.5F, Mediana(4,grades));
}