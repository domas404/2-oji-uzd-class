#include "../studentas.h"
#include <gtest/gtest.h>

TEST(StudentTest, nameTest){
    istringstream iss("Vardas Pavarde 1 1 5 6 4 3 1 5 7 1 7");
    Studentas stud = Studentas(iss, &Vidurkis);
    EXPECT_EQ("Vardas", stud.getName());
    EXPECT_EQ("Pavarde", stud.getLastName());
    EXPECT_EQ(5.56F, stud.getFinal());
}

TEST(StudentTest, SetterTest){
    Studentas stud;
    vector<int> grades = {10,9,7,10};
    stud.setName("Vardas");
    stud.setLastName("Pavarde");
    stud.setFinal(stud.Final(Vidurkis(4,grades),8));
    EXPECT_EQ("Dominykas", stud.getName());
    EXPECT_EQ("Pavarde", stud.getLastName());
    EXPECT_EQ(8.4F, stud.getFinal());
}

TEST(CalculationsTest, MedianTest){
    vector<int> grades = {8,7,6,9};
    EXPECT_EQ(7.5F, Mediana(4,grades));
}