# 2-oji-uzd-class

Programos versija **v2.0**

## Papildymai nuo v1.5

* Pridėtas Doxygen dokumentacijos failas;
* Aprašyti keli testavimo atvejai faile `unitTest.cpp`;
* Sukurtas *installer* failas.

## Programos veikimas:

Programa sugeneruoja (pasirinktinai) 5 skirtingų dydžių studentų sąrašus ir apskaičiuoja studentų galutinius
įvertinimus pagal sugeneruotus duomenis (namų darbų ir egzamino įvertinimus).
Pagal galutinius įvertinimus studentai suskirstomi į dvi grupes:

1. "kietiakai" - kurių galutinis įvertinimas >= 5;
2. "varguoliai" - kurių įvertinimas < 5.

## Diegimas ir paleidimas:

Atsisiųskite ir išarchyvuokite release'o zip failą.
Atverkite komandinę eilutę (cmd) ir nurodykite šio failo adresą kompiuteryje.

        cd /.../'folder_name'

Į komandinę eilutę įveskite šias komandas:

        mingw32-make
        ./main 10 v
        
Paleidžiant programą nurodomi:
1. kiek generuojamame studentų sąraše kiekvienas studentas turi namų darbų;
2. įvertinimų skaičiavimui naudoti vidurkį ar medianą [v/m].
Pvz:
   
        ./main 10 v
   
Paleidus programą pasirinkite ar norite generuoti naujus failus ir kokio tipo konteineryje norite saugoti duomenis.
   
## Ankstesnės programos versijos:

* v0.1 - programa skirta apskaičiuti studentų galutinius įvertinimus pagal vartotojo suvestus duomenis;
* v0.2 - programoje implementuota galimybė duomenis nuskaityti iš failo;
* v0.3 - pakeista programos struktūra, t.y. programa suskaidyta į kelis *.cpp ir *.hpp failus. Taip pat duomenų nuskaityme
ir įvedime implementuotas išimčių valdymas (exceptions).
* v0.4 - studentų sąrašas pradedėtas skirstyti į dvi grupes, testuojant programos veikimo spartą;
* v0.5 - testuojama programos sparta, duomenų saugojimui naudojant skirtingo tipo konteinerius (std::vector, std::deque, std::list);
* v1.0 - testuojama programos sparta, pritaikant skirtingas duomenų skirstymo strategijas;
* v1.1 - klasių realizacija. Class ir Struct veikimo spartos palyginimas;
* v1.2 - *rule of three* realizacija;
* v1.5 - bazinės klasės realizacija.