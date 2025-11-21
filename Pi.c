#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {

    long long int num_points = 1000000;  // long long int heiﬂt sehr groﬂe Anzahl der Zufallspunkte

    long long int inside_circle = 0; // 0 ist der Startwert an Punkten

    srand(time(NULL)); //strand immer andere Zufallszahlen   time(Null) Zeit das immer andere Zufallszahlen sind

    for (long long int i = 0; i < num_points; i++) {  // Wiederholt Zufallspunktgeneration 1000000 mal

        double x = (double)rand() / RAND_MAX;  // Zuf‰lliges x zwischen 0 und 1

        double y = (double)rand() / RAND_MAX;  // Zuf‰lliges y zwischen 0 und 1

        if (x * x + y * y <= 1.0) {   //Satz des Pythagoras <=1 ist in Kreis r=1

            inside_circle++;  //Wenn Punkt im Kreis +1

        }

    }

    double pi_estimate = 4.0 * (double)inside_circle / (double)num_points; //double das Kommazahl ok ist   4mal weil Formel f¸r Viertelkreis Bogen gilt nicht f¸r ganzen Kreis

    printf("Gesch‰tztes Pi: %f\n", pi_estimate);  // Ausgabe Pi %f f¸r Komma

    return 0;

}
// kompilieren= cl Pi.c     .\Pi