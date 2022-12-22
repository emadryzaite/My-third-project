**Studentų galutinio balo skaičiuoklė**

Ši programa yra sukurta skaičiuoti studentų galutinį balą naudojant formulę

<img width="378" alt="Screenshot 2022-09-29 at 23 15 54" src="https://user-images.githubusercontent.com/113093671/193133329-ea2db47d-80bd-4c3c-97f2-0d676d135a3d.png">


taip pat galima naudoti ir medianą vietoj vidurkio.

**Naudotojas gali pasirinkti duomenų įvedima dvėjais būdais:**

-rankiniu būdu

-sugeneruoti naują failą (1000, 10 000, 100 000, 1000 000, 10 000 000 įrašų)

**Rezultatas atrodo šitaip:**

<img width="473" alt="Screenshot 2022-09-29 at 23 16 15" src="https://user-images.githubusercontent.com/113093671/193133426-d861005c-bb6d-4ce1-81fd-57ee26cd497a.png">

Duomenis yra surušiuoti pagal pavardes.

Programos naudotojas turi įrašyti duomenis:

-Vardą ir pavardę

-Namų darbų rezultatus (10-balėje sistemoje)

-Egzamino rezultatą (10-balėje sistemoje)

Taip pat programos naudotojas gali pasirinkti ar namų darbų/egzamino vertinimą įrašys pats, ar kad būtų sugeneruotas.

**Programa surūšiuoja studentus** į "Kietiakai" jei jų galutinis balas >= 5.0, ir į "Vargsiukai" jei jų galutinis balas < 5.0. Tuomet yra išvedami du atskiri failai : kietiakai.txt ir vargsiukai.txt.

Naudojami du konteineriai:

-Vector

-List

Taip pat programa atlieka **veikimo greičio (spartos) analizę 3 būdais**. Apskačiuoja sugaištą laiką failams  nuskaityti ir suskirstyti.


 VECTOR NUSKAITYMAS
 
| kiekis | 1 strategija| 2 strategija| 3 strategija |
|----|---|---|---|
| 1000 |  0.006| 0.001 | 0.007 |
| 10000   | 0.028 | 0.028 |  0.025 |
| 100000  | 0.228 | 0.287 |  0.239 |
| 1000000  | 2.69 | 2.98 |  2.451 |
| 10000000  | 25.862 | 24.62 |  44.49 |

VECTOR SUSKIRTYMAS

| kiekis | 1 strategija| 2 strategija| 3 strategija |
|----|---|---|---|
| 1000 |  0.00| 0.00 | 0.00 |
| 10000   | 0.002 | 0.00 |  0.001 |
| 100000  | 0.017 | 0.000 |  0.006 |
| 1000000  | 0.403 | 0.098 | 0.064 |
| 10000000  | 1.096 | 0.94 |  5.684 |

LIST NUSKAITYMAS

| kiekis | 1 strategija| 2 strategija| 3 strategija |
|----|---|---|---|
| 1000 |  0.002| 0.003 | 0.02 |
| 10000   | 0.027 | 0.028 |  0.8 |
| 100000  | 0.238 | 0.3 |  0.303 |
| 1000000  | 3.049 | 3.016 |  3.02 |
| 10000000  | 32.232 | 25.062 |  35.332 |

LIST SUSKIRTYMAS

| kiekis | 1 strategija| 2 strategija| 3 strategija |
|----|---|---|---|
| 1000 |  0.00| 0.00 | 0.00 |
| 10000   | 0.00 | 0.001 |  0.001 |
| 100000  | 0.07 | 0.018 |  0.013 |
| 1000000  | 0.76 | 0.162 | 0.123 |
| 10000000  | 1.946 | 1.948 |  1.54 |

LIST palyginimas rūšiavimo spartos STRUCT ir CLASS naudodami 1 strategija.

|  | 1000| 10000| 100000 |1000000 | 10000000 |
|----|---|---|---|---|---|
| struct |  0.00| 0.00 | 0.007 | 0.076| 1.946|
| class  | 0.00 | 0.002 |  0.022 |0.262 | 3.721 |
| O1  | 0.00 | 0.001 |  0.013 | 0.129 | 1.848|
| O2  | 0.00 | 0.00 | 0.006 | 0.109| 1.95 |
| O3 | 0.00 | 0.001 |  0.019 | 0.102 | 1.18 |


REALIZUOTA " RULE OF THREE"

Naudojimosi instrukcija:

Atsisųskite progrmama, ją išarchyvuokite ir paleiskite

V1.2 Sukurtos dvi klasės: Irasas ir zmogus

V2.0 Sukurtas DOXYGEN failas 

V3.0 Sukurtas setup.exe failas
