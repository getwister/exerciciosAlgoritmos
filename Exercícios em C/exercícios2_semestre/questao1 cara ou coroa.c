#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int moeda(){
    return rand() % 2;
}

int main()
{
    srand(time(NULL));
    int i;
    int cara = 0;
    int coroa = 0;
    for(i = 0; i < 1000; i++){
        switch(moeda()){
        case 0:
            printf("\nCara");
            cara++;
            break;
        case 1:
            printf("\nCoroa");
            coroa++;
            break;
        }
    }

    printf("\n\nCara %d vezes (%.2f por cento)\nCoroa %d vezes (%.2f por cento)\n\n", cara, (float)cara/1000 * 100, coroa, (float)coroa/1000 * 100);
    return 0;
}
