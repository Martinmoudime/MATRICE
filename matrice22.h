#ifndef __MATREICE22_H__
#define __MATREICE22_H__  

void Somme22(float result[2][2], float T1[2][2], float T2[2][2]);
void Soustracion22(float result[2][2], float T1[2][2], float T2[2][2]);
void Multiplication22(float result[2][2], float T1[2][2], float T2[2][2]);
void Determinant22(float &determinant, float T[2][2]);
void Transposee22(float result[2][2], float T[2][2]);
void Inverse22(float result[2][2], int &t, float T[2][2]);
void Trace22(float &trace, float T[2][2]);
void lecture1(float T[2][2]);
void lecture2(float T1[2][2], float T2[2][2]);

#endif
