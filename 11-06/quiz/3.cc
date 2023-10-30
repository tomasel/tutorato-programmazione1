// segmentation fault perché pd non è inizializzato, molto probabilmente
// sta puntando ad un'area di memoria in cui non è autorizzato a scrivere
// entrambe le istruzioni di associazione vanno in seg. fault per questo motivo
int main () {

  double b, *pd;

  *pd = 3.14;

  b = *pd;

  return 0;
}
