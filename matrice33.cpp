#include <iostream>

void Somme33(float result[3][3], float T1[3][3], float T2[3][3]){
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            result[i][j] = T1[i][j] + T2[i][j];
        }
    }    
}

void Soustracion33(float result[3][3], float T1[3][3], float T2[3][3]){
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            result[i][j] = T1[i][j] - T2[i][j];
        }
    }    
}

void Multiplication33(float result[3][3], float T1[3][3], float T2[3][3]){
    result[0][0] = T1[0][0] * T2[0][0] + T1[0][1] * T2[1][0] + T1[0][2] * T2[2][0];
    result[0][1] = T1[0][0] * T2[0][1] + T1[0][1] * T2[1][1] + T1[0][2] * T2[2][1];
    result[0][2] = T1[0][0] * T2[0][2] + T1[0][1] * T2[1][2] + T1[0][2] * T2[2][2];
    result[1][0] = T1[1][0] * T2[0][0] + T1[1][1] * T2[1][0] + T1[1][2] * T2[2][0];
    result[1][1] = T1[1][0] * T2[0][1] + T1[1][1] * T2[1][1] + T1[1][2] * T2[2][1];
    result[1][2] = T1[1][0] * T2[0][2] + T1[1][1] * T2[1][2] + T1[1][2] * T2[2][2];
    result[2][0] = T1[2][0] * T2[0][0] + T1[2][1] * T2[1][0] + T1[2][2] * T2[2][0];
    result[2][1] = T1[2][0] * T2[0][1] + T1[2][1] * T2[1][1] + T1[2][2] * T2[2][1];
    result[2][2] = T1[2][0] * T2[0][2] + T1[2][1] * T2[1][2] + T1[2][2] * T2[2][2];
}


void Determinant33(float &determinant, float T[3][3]){
    determinant = T[0][0] * (T[1][1] * T[2][2] - T[1][2] * T[2][1])
                - T[0][1] * (T[1][0] * T[2][2] - T[1][2] * T[2][0])
                + T[0][2] * (T[1][0] * T[2][1] - T[1][1] * T[2][0]);
}

void Transposee33(float result[3][3], float T[3][3]){
    for (int i = 0 ; i <= 2 ; i++) {
        for (int j = 0 ; j <= 2 ; j++) {
            result[j][i] = T[i][j];
        }
    }
}

void Inverse33(float result[3][3], int &t, float T[3][3]){
    float determinant;
    determinant = T[0][0] * (T[1][1] * T[2][2] - T[1][2] * T[2][1])
              - T[0][1] * (T[1][0] * T[2][2] - T[1][2] * T[2][0])
              + T[0][2] * (T[1][0] * T[2][1] - T[1][1] * T[2][0]);
    if(determinant == 0){
        t = 0;
    }
    else{
        t = 1; 
        result[0][0] =  T[1][1] * T[2][2] - T[1][2] * T[2][1];
        result[0][1] = -(T[0][1] * T[2][2] - T[0][2] * T[2][1]);
        result[0][2] =  T[0][1] * T[1][2] - T[0][2] * T[1][1];
        result[1][0] = -(T[1][0] * T[2][2] - T[1][2] * T[2][0]);
        result[1][1] =  T[0][0] * T[2][2] - T[0][2] * T[2][0];
        result[1][2] = -(T[0][0] * T[1][2] - T[0][2] * T[1][0]);
        result[2][0] =  T[1][0] * T[2][1] - T[1][1] * T[2][0];
        result[2][1] = -(T[0][0] * T[2][1] - T[0][1] * T[2][0]);
        result[2][2] =  T[0][0] * T[1][1] - T[0][1] * T[1][0];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = result[i][j] * (1 / determinant);
            }
        }
    }        
}


void Trace33(float &trace, float T[3][3]){
    trace = T[0][0] + T[1][1] + T[2][2];
}

void lecture1(float T[3][3]){
    std::cout << "Entrer les elements de votre matrice : \n";
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            std::cout << "Table[" << i << "][" << j << "] = ";
            std::cin >> T[i][j];
        }
    }
}

void lecture2(float T1[3][3], float T2[3][3]){
    std::cout << "Entrer les elements de votre premiere matrice : \n";
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            std::cout << "Table1[" << i << "][" << j << "] = ";
            std::cin >> T1[i][j];
        }
    }
    std::cout << "Entrer les elements de votre deuxieme matrice : \n";
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            std::cout << "Table2[" << i << "][" << j << "] = ";
            std::cin >> T2[i][j];
        }
    }
}

