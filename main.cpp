//Esercizio n. 18 – Vettore palindromo
//Scrivere un programma che legge i valori degli elementi di un vettore di N interi, dove N è
//una costante globale, e visualizza un messaggio che indica se tale vettore è palindromo
//(cioè, se la sequenza che si ottiene leggendo i valori dei suoi elementi dal primo all’ultimo è
//la stessa che si ottiene leggendo tali valori in ordine inverso, dall’ultimo al primo).

// sol:

#include <iostream>
using namespace std;
int main () {

const int dim = 6;
int v[dim] = {8,1,8,8,1,8}; 

int i = 0;
bool check = true; //assumo che il vettore sia palindromo


for (i = 0; i < dim; i++){
    if (v[i] != v[(dim - 1) - i]) { //confronto il valore all'indice i con l'elemento in posizione "inversa"
        check = false; //se non trovo corrispondenza cambio il valore di check in falso
        break; //esco dal ciclo for al primo confronto in cui i valori non corrispondono
   } 
}

//Stampo FALSE o TRUE (C++ fa schifo al cazzo)
if (check == 0){
    cout << "\nFALSE";
} else {
    cout << "\nTRUE";
    }
}

