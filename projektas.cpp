#include "funkcijos.h"

int main() {
  vector<irasas> Stud;
  vector<irasas> Vargsiukai;
  vector<irasas> Kietiakai;
  string failas = "";
  srand(time(0));

  cout << "Ar norite duomenis ivesti patys (kitu atveju duomenys bus nuskaityti is failo) ? (+/-) ";
  if (patvirtinimas())
    papildoma(Stud);
  else{
  generavimas(pasirinkimas(), failas);
  nuskaitymas(Stud, failas);
  }
  vidMed(Stud);
  cout << "Ar norite studentu rusiavima vykdyti 1 strategija, kitu atveju 2(+/-) ";
  if(patvirtinimas()) {
    skirstymas1(Stud,Vargsiukai, Kietiakai);
    spausdinimas(Vargsiukai, "vargsiukai.txt");
    spausdinimas(Kietiakai, "kietiakai.txt");
  }
  else {
    cout << "Ar norite studentu rusiavima vykdyti 2 strategija, kitu atveju 3(+/-) ";
    if(patvirtinimas()) 
    skirstymas2(Stud, Kietiakai);
    else 
    skirstymas3(Stud, Kietiakai);
    spausdinimas(Stud, "vargsiukai.txt");
    spausdinimas(Kietiakai, "kietiakai.txt");
  }
  

  Stud.clear();
  Vargsiukai.clear();
  Kietiakai.clear();
}
