#include <iostream>


void Somme22(float result[2][2], float T1[2][2], float T2[2][2]){
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            result[i][j] = T1[i][j] + T2[i][j];
        }
    }    
}

void Soustracion22(float result[2][2], float T1[2][2], float T2[2][2]){
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            result[i][j] = T1[i][j] - T2[i][j];
        }
    }    
}

void Multiplication22(float result[2][2], float T1[2][2], float T2[2][2]){
    result[0][0] = T1[0][0] * T2[0][0] + T1[0][1] * T2[1][0];
    result[0][1] = T1[0][0] * T2[0][1] + T1[0][1] * T2[1][1];
    result[1][0] = T1[1][0] * T2[0][0] + T1[1][1] * T2[1][0];
    result[1][1] = T1[1][0] * T2[0][1] + T1[1][1] * T2[1][1];
}

void Determinant22(float &determinant, float T[2][2]){
    determinant = (T[0][0] * T[1][1]) - (T[1][0] * T[0][1]);
}

void Transposee22(float result[2][2], float T[2][2]){
    result[0][0] = T[0][0];
    result[0][1] = T[1][0];
    result[1][0] = T[0][1];
    result[1][1] = T[1][1];
}

void Inverse22(float result[2][2], int &t, float T[2][2]){
    float determinant;
    determinant = (T[0][0] * T[1][1]) - (T[1][0] * T[0][1]);
    if(determinant == 0){
        t = 0;
    }
    else{
        t = 1;
        result[0][0] = T[1][1];
        result[0][1] = -(T[0][1]);
        result[1][0] = -(T[1][0]);
        result[1][1] = T[0][0];
        result[0][0] = result[0][0] * (1 / determinant);
        result[0][1] = result[0][1] * (1 / determinant);
        result[1][0] = result[1][0] * (1 / determinant);
        result[1][1] = result[1][1] * (1 / determinant);
    }
}

void Trace22(float &trace, float T[2][2]){
    trace = T[0][0] + T[1][1];
}

void lecture1(float T[2][2]){
    std::cout << "Entrer les elements de votre matrice : \n";
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            std::cout << "Table[" << i << "][" << j << "] = ";
            std::cin >> T[i][j];
        }
    }
}

void lecture2(float T1[2][2], float T2[2][2]){
    std::cout << "Entrer les elements de votre premiere matrice : \n";
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            std::cout << "Table1[" << i << "][" << j << "] = ";
            std::cin >> T1[i][j];
        }
    }
    std::cout << "Entrer les elements de votre deuxieme matrice : \n";
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            std::cout << "Table2[" << i << "][" << j << "] = ";
            std::cin >> T2[i][j];
        }
    }
}

