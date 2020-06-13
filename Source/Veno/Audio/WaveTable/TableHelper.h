//
// Created by versustune on 08.06.20.
//

#ifndef VENO_TABLEHELPER_H
#define VENO_TABLEHELPER_H

#include <cmath>
#include <cstdlib>
#include "WaveTableGenerator.h"

#define M_PI        3.14159265358979323846
#define DOUBLE_PI   6.283185307179586476925286766559
/*
 in-place complex fft
 After Cooley, Lewis, and Welch; from Rabiner & Gold (1975)
 program adapted from FORTRAN
 by K. Steiglitz  (ken@princeton.edu)
 Computer Science Dept.
 Princeton University 08544
*/
void fft (int N, double* ar, double* ai);
float makeWaveTable (WaveTableGroup* group, int len, double* ar, double* ai, double scale, double topFreq);
// utils stuff
int fillTables (WaveTableGroup* group, double* freqWaveRe, double* freqWaveIm, int numSamples);
int findTableLen ();
float getNextRand ();
#endif //VENO_TABLEHELPER_H
