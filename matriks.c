#include "matriks.h"

void InitMatriks (int NB, int NK, MATRIKS * M){
	NBrsEff(*M) = NB;
	NKolEff(*M) = NK;
	for (int i=1;i<=NBrsEff(*M);i++){
		for (int j=1;j<=NKolEff(*M);j++){
			Elmt(*M,i,j) = emptySpace;
		}
	}
};
/* Membentuk sebuah MATRIKS "kosong" yang siap diisi berukuran NB x NK di "ujung kiri" memori */
/* I.S. NB dan NK adalah valid untuk memori matriks yang dibuat */
/* F.S. Matriks M berisi empty space dengan type 'E' */

void PrintPeta (MATRIKS M){
	Buildings b;
	for (int i=1;i<=NKolEff(M)+2;i++){
		printf("*");
	}
	printf("\n");
	for (int i=1;i<=NBrsEff(M);i++){
		printf("*");
		for (int j=1;j<=NKolEff(M);j++){
			b = Elmt(M,i,j);
			if (b.buildingsType != 'E'){
				switch (b.owner){
					case 1:
						print_blue(b.buildingsType);
						break;
					case 2:
						print_red(b.buildingsType);
						break;
					default:
						printf("%c",b.buildingsType);
				}
			}
		}
		printf("*\n");
	}
	
	for (int i=1;i<=NKolEff(M)+2;i++){
		printf("*");
	}
	printf("\n");
};
/* I.S. M terdefinisi */
/* F.S. Peta bangunan di print dengan boundary karakter *. Bangunan yang dimiliki
 * player 1 di print berwarna biru, dan player 2 dengan warna merah
*/
