#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

int wybor,j;
float f;

    printf("Dzialanie: \n");

    printf("1.Zaokraglij liczby \n");
    
    printf("2.System szesnastkowy \n");
    
    scanf("%d", &wybor);
    
    switch(wybor)
    {
        case 1:
            printf("Podaj liczbê zmiennoprzecinkowa:\n");
            scanf("%f", &f);
            printf("Zaokraglij cyfry: %.2f \n", f );
        break;
        
        case 2:
            printf("Podaj liczbe: \n");
            scanf("%j", &j);
            printf("System szesnastkowy: %x \n", j );
        break;
        
        
        break;
    }
}
