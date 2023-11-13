/*
Un'agenzia del farmaco ha un grosso database per categorizzare i farmaci che usa. Il database memorizza le seguenti informazioni:
id del farmaco, numero di molecole (<256), numero di altri farmaci con cui interagisce, numero di test condotti, numero di reazioni avverse. 

Il database può essere scaricato dal Google Drive. Ogni riga contiene le seguenti informazioni:

`id numero_molecole numero_interazioni numero_test numero_reazioni`

Leggere il file, caricare i dati in memoria e successivamente dare le seguenti informazioni:

- Numero totale di farmaci;
- Qual è il farmaco con il maggior numero di reazioni avverse;
- Qual è il farmaco più pericoloso, ossia quello con il rapporto (reazioni avverse)/(test condotti) più alto;
- Quale farmaco contiene il maggior numero di molecole;
- Quali sono i farmaci che hanno un numero di interazioni con altri farmaci sopra la media.
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <random>

using namespace std;

struct Farmaco {
  int id;
  int molecole;
  int interazioni;
  int test;
  int reazioni;
};

// Funzione per generare un dataset di prova
void gen_dataset(){
    ofstream file("farmaci_piccolo.txt");
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(10, 1000);
    uniform_int_distribution<> dis_pic(0, 20);
    uniform_int_distribution<> dis_test(1000, 100000);
    for (int i=0; i<10; i++){
        file << dis(gen) << " " << dis(gen) << " " << dis_pic(gen) << " " << dis_test(gen) << " " << dis_pic(gen) << endl;
    }
    file.close();    

    ofstream file1("farmaci_grande.txt");
    for (int i=0; i<1000; i++){
        file1 << dis(gen) << " " << dis(gen) << " " << dis_pic(gen) << " " << dis_test(gen) << " " << dis_pic(gen) << endl;
    }
    file1.close();    
}

int main (int argc, char* argv[]){
    // gen_dataset();

    if (argc!=2){
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    ifstream file(argv[1]);

    // Leggi tutto il file e conta le righe
    int numeroFarmaci = 0;
    while (!file.eof()){
        char riga[100];
        file.getline(riga, 100);
        numeroFarmaci++;
    }
    file.close();

    Farmaco* farmaci = new Farmaco[numeroFarmaci];

    // Leggi il file e salva i dati in memoria
    file.open(argv[1]);
    int i=0; // Contatore per indice su farmaci
    int piuAvverso = -1; // Indice del farmaco con più reazioni avverse
    int piuPericoloso = -1; // Indice del farmaco più pericoloso
    int piuMolecole = -1; // Indice del farmaco con più molecole
    double mediaInterazioni = 0; // Media delle interazioni
    while (
        file >> farmaci[i].id
             >> farmaci[i].molecole
             >> farmaci[i].interazioni
             >> farmaci[i].test
             >> farmaci[i].reazioni){

        cout << farmaci[i].id << " " << farmaci[i].molecole << " " << farmaci[i].interazioni << " " << farmaci[i].test << " " << farmaci[i].reazioni << endl;
        
        if (piuAvverso < 0 || farmaci[i].reazioni > farmaci[piuAvverso].reazioni){
            piuAvverso = i;
        }

        double per = (double)farmaci[i].reazioni/farmaci[i].test;
        double maxPer = (double)farmaci[piuPericoloso].reazioni/farmaci[piuPericoloso].test;
        if (piuPericoloso < 0 || per > maxPer){
            piuPericoloso = i;
        }

        if (piuMolecole < 0 || farmaci[i].molecole > farmaci[piuMolecole].molecole){
            piuMolecole = i;
        }

        i++;
    }
    mediaInterazioni /= numeroFarmaci;

    cout << "Ci sono " << numeroFarmaci << " farmaci nel database." << endl;
    cout << "Il farmaco con più reazioni avverse è " << farmaci[piuAvverso].id << " con " << farmaci[piuAvverso].reazioni << " reazioni avverse." << endl;
    cout << "Il farmaco più pericoloso è " << farmaci[piuPericoloso].id << " con " << farmaci[piuPericoloso].reazioni << " reazioni avverse e " << farmaci[piuPericoloso].test << " test." << endl;
    cout << "Il farmaco con più molecole è " << farmaci[piuMolecole].id << " con " << farmaci[piuMolecole].molecole << " molecole." << endl;

    cout << "I farmaci con più interazioni della media sono: "; 
    for (int i=0; i<numeroFarmaci; i++){
        if (farmaci[i].interazioni > mediaInterazioni){
            cout << farmaci[i].id << " ";
        }
    }
    cout << endl;

    delete farmaci;
    return 0;
}
