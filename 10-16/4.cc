
/*
   Data una media iniziale e un numero di crediti totali acquisiti, far inserire all'utente il voto e i crediti di un nuovo esame e scrivere una funzione per ricalcolare la nuova media pesata.

Bonus: Scrivere una funzione con passaggio per valore, una con passaggio per riferimento e una con passaggio per puntatore. Provare ad eseguire ognuna delle funzioni e capire cosa succede.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

float ricalcolaMedia(float media, int crediti, int voto, int creditiEsame){
  return (media * crediti + voto * creditiEsame) / (crediti + creditiEsame);
}

float ricalcolaMedia2(float &media, int &crediti, int voto, int creditiEsame){
  media = (media * crediti + voto * creditiEsame) / (crediti + creditiEsame);
  return media;
}

float ricalcolaMedia3(float *media, int *crediti, int voto, int creditiEsame){
  *media = (*media * *crediti + voto * creditiEsame) / (*crediti + creditiEsame);
  return *media;
}

int main(){

  float media = 0;
  int crediti = 0;

  cout << "Inserisci la media iniziale: ";
  cin >> media;

  cout << "Inserisci i crediti totali: ";
  cin >> crediti;

  while (true) {
    int voto = 0;
    int creditiEsame = 0;

    cout << "Inserisci il voto dell'esame: ";
    cin >> voto;

    cout << "Inserisci i crediti dell'esame: ";
    cin >> creditiEsame;

    media = ricalcolaMedia2(media, crediti, voto, creditiEsame);
    crediti += creditiEsame;

    cout << "La nuova media è: " << media << endl;
  }


  return 0;
}
