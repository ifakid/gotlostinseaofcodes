#ifndef MATRIKS_H
#define MATRIKS_H

#include <stdio.h>
#include <stdbool.h>
#include "Buildings.h"
#include "pcolor.h"

#define BrsMin 1
#define BrsMax 20
#define KolMin 1
#define KolMax 30

typedef int indeks;
typedef struct {
    Buildings Mem[BrsMax+1][KolMax+1];
    int NBrsEff;
    int NKolEff;
} MATRIKS;

#define NBrsEff(M) (M).NBrsEff
#define NKolEff(M) (M).NKolEff
#define Elmt(M,i,j) (M).Mem[(i)][(j)]

static const Buildings emptySpace = {0,0,0,0,0,false,0,'E'};

void InitMatriks (int NB, int NK, MATRIKS * M);
/* Membentuk sebuah MATRIKS "kosong" yang siap diisi berukuran NB x NK di "ujung kiri" memori */
/* I.S. NB dan NK adalah valid untuk memori matriks yang dibuat */
/* F.S. Matriks M sesuai dengan definisi di atas terbentuk */

void PrintPeta (MATRIKS M);
/* I.S. M terdefinisi */
/* F.S. Peta bangunan di print dengan border. Bangunan yang dimiliki
 * player 1 di print berwarna merah, dan player 2 dengan warna biru
*/

#endif
