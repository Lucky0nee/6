#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    float R1, R2, R3, R0;
    printf("%26s", "Введiть значення 1 опори: "); cin >> R1;
    printf("%26s", "Введiть значення 2 опори: "); cin >> R2;
    printf("%26s", "Введiть значення 3 опори: "); cin >> R3;

    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    printf("%20s", "\nЗначення опори R0 = "); printf("%.4f \n", R0);
}
