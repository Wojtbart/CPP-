#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{

using namespace std;

#define MAX 50
#define getmax(a,b) ((a)>(b)?(a):(b))
#define czy_ma_dwa_kolory 1
#define czy_jest_czerwona_u_dolu 1
#define czy_ma_gwiazdki 0
#define czy_ma_trzy_kolory 0
#define czy_ma_czerwone_tlo 0
#define czy_ma_niebieskie_tlo 0

#if czy_ma_dwa_kolory==1
#if czy_ma_gwiazdki==0
#if czy_jest_czerwona_u_dolu==1
	printf("POLSKA\n");
#endif
#endif
#endif

#if czy_ma_dwa_kolory==1
#if czy_ma_gwiazdki==0
#if czy_ma_niebieskie_tlo==1
	printf("ISLANDIA\n");
#endif
#endif
#endif

#if czy_ma_dwa_kolory==0
#if czy_ma_gwiazdki==1
#if czy_ma_trzy_kolory==1
	printf("USA\n");
#endif
#endif
#endif

#if czy_ma_dwa_kolory==0
#if czy_ma_gwiazdki==1
#if czy_ma_czerwone_tlo==1
	printf("CHINY\n");
#endif
#endif
#endif

#if czy_ma_dwa_kolory==0
#if czy_ma_gwiazdki==0
#if czy_ma_czerowne_tlo==0
	printf("RUMUNIA\n");
#endif
#endif
#endif

int main()
{
    getchar(); getchar();
    return 0;
}




