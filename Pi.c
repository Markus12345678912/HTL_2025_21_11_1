#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {

    long long int num_points = 1000000;  // "long long int" heißt sehr große Anzahl der Zufallspunkte

    long long int inside_circle = 0; // 0 ist der Startwert an Punkten 

    srand(time(NULL)); //"srand" immer andere Zufallszahlen   "time(Null)" damit immer andere Zufallszahlen sind

    for (long long int i = 0; i < num_points; i++) {  // Wiederholt Zufallspunktgeneration 1000000 mal

        double x = (double)rand() / RAND_MAX;  // Zufälliges x zwischen 0 und 1

        double y = (double)rand() / RAND_MAX;  // Zufälliges y zwischen 0 und 1

        if (x * x + y * y <= 1.0) {   //Satz des Pythagoras "<=1" ist in Kreis r=1

            inside_circle++;      //Prüfen, ob der Punkt im Viertelkreis liegt wenn ja +1

        }

    }

    double pi_estimate = 4.0 * (double)inside_circle / (double)num_points; //double das Kommazahl ok ist   
    //4mal weil Formel für Viertelkreis Bogen gilt nicht für ganzen Kreis

    printf("Geschätztes Pi: %f\n", pi_estimate);  // Ausgabe Pi %f für Komma

    return 0;

}
// kompilieren= cl Pi.c     .\Pi
