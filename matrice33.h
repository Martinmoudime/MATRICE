#ifndef __MATREICE33_H__
#define __MATREICE33_H__

void Somme33(float result[3][3], float T1[3][3], float T2[3][3]);
void Soustracion33(float result[3][3], float T1[3][3], float T2[3][3]);
void Multiplication33(float result[3][3], float T1[3][3], float T2[3][3]);
void Determinant33(float &determinant, float T[3][3]);
void Transposee33(float result[3][3], float T[3][3]);
void Inverse33(float result[3][3], int &t, float T[3][3]);
void Trace33(float &trace, float T[3][3]);
void lecture1(float T[3][3]);
void lecture2(float T1[3][3], float T2[3][3]);

#endif
