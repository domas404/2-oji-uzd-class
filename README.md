# 2-oji-uzd-class

Programos versija **v1.1** (klasių realizacija)

## Programos veikimas:

Programa sugeneruoja (pasirinktinai) 5 skirtingų dydžių studentų sąrašus ir apskaičiuoja studentų galutinius
įvertinimus pagal sugeneruotus duomenis (namų darbų ir egzamino įvertinimus).
Pagal galutinius įvertinimus studentai suskirstomi į dvi grupes:

1. "kietiakai" - kurių galutinis įvertinimas >= 5;
2. "varguoliai" - kurių įvertinimas < 5.

### Sistemos parametrai:

* CPU Intel i5-10300H 2.50GHz
* RAM 16GB 2666MHz
* SSD 512GB

## Class ir Struct veikimo spartos palyginimas
### Testo rezultatai, kai:

* naudojamas std::vector konteineris;
* namų darbų skaičius kiekvienam studentui - 10;
* galutinis pažymys skaičiuojamas pagal vidurkį;
* naudojamas -O2 optimizavimo flag'as;

|                                       | class    | struct   |
| ------------------------------------- | :---:    | :---:    |
|   100'000 nuskaitymas ir skaič.       | 0.83278  | 0.64461  |
| 1'000'000 nuskaitymas ir skaič.       | 8.47231  | 6.91903  |
|   100'000 visas progr. veikimo laikas | 1.58859  | 1.44967  |
| 1'000'000 visas progr. veikimo laikas | 16.06103 | 14.57636 |

## Optimizatorių pritaikymas

Programos skaičiavimų trukmės priklausomybė nuo optimizatoriaus lygio:

|      | 100'000  | 1'000'000 |
| ---- | :---:    | :---:     |
| -O1  | 1.54393  | 15.45393  |
| -O2  | 1.57800  | 15.96043  |
| -O3  | 1.56901  | 15.32827  |

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
* v0.5 - testuojama programos sparta, duomenų saugojimui naudojant skirtingo tipo konteinerius (std::vector, std::deque, std::list).
* v1.0 - testuojama programos sparta, pritaikant skirtingas duomenų skirstymo strategijas.