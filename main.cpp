#include <iostream>
#include "matrice22.h"
#include "matrice33.h"

const int taille1 = 2;
const int taille2 = 3;

float T[taille1][taille1] ={};
float T1[taille1][taille1] ={};
float T2[taille1][taille1] ={};

float T_33[taille2][taille2] ={};
float T1_33[taille2][taille2] ={};
float T2_33[taille2][taille2] ={};

float T_FINAL22[taille1][taille1] = {};
float T_FINAL33[taille2][taille2] = {};

int choix1, choix2, temoin;
float trac, det;

int main (int argc, char** argv) {
    do {
        std::cout << "Vueillez choisir la taille de votre matrice" << std::endl;
        std::cout << "1 : Matrice carree de taille 2" << std::endl;
        std::cout << "2 : Matrice carree de taille 3" << std::endl;
        std::cout << "3 : sortir" << std::endl;
        std::cin >> choix1;
        switch(choix1) {
            case 1 :
                std::cout << "Vueillez choisir votre operation" << std::endl;
                std::cout << "1 : Addition" << std::endl;
                std::cout << "2 : Soustraction" << std::endl;
                std::cout << "3 : Multiplication" << std::endl;
                std::cout << "4 : Determinant" << std::endl;
                std::cout << "5 : Inverse" << std::endl;
                std::cout << "6 : Transposee" << std::endl;
                std::cout << "7 : Trace" << std::endl;
                std::cin >> choix2;
                switch(choix2) {
                    case 1:
                        lecture2(T1, T2);
                        Somme22(T_FINAL22, T1, T2);
                        std::cout << "La somme est  :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                         std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 2:
                        lecture2(T1, T2);
                        Soustracion22(T_FINAL22, T1, T2);
                        std::cout << "La soustraction est :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                        std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 3:
                        lecture2(T1, T2);
                        Multiplication22(T_FINAL22, T1, T2);
                        std::cout << "Le produit est :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                        std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 4:
                        lecture1(T);
                        Determinant22(det, T);
                        std::cout << "Le determinant est :" << det << "\n";
                    break;
                    case 5:
                        lecture1(T);
                        temoin = 0;
                        Inverse22(T_FINAL22, temoin, T);
                        if(temoin == 0){
                            std::cout << "Cette matrice n'est pas inversible\n";
                        }
                        else{
                            std::cout << "L'inverse est :\n";
                            std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                            std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                        }
                    break;
                    case 6:
                        lecture1(T);
                        Transposee22(T_FINAL22, T);
                        std::cout << "La transposee est :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                        std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 7:
                        lecture1(T);
                        Trace22(trac, T);
                        std::cout << "La trace est : " << trac << "\n";
                    break;
                    default:
                        std::cout << "Entrer un nombre entre 1 et 7/n";
                    break;
                }
            break;
            case 2 :
                std::cout << "Vueillez choisir votre operation" << std::endl;
                std::cout << "1 : Addition" << std::endl;
                std::cout << "2 : Soustraction" << std::endl;
                std::cout << "3 : Multiplication" << std::endl;
                std::cout << "4 : Determinant" << std::endl;
                std::cout << "5 : Inverse" << std::endl;
                std::cout << "6 : Transposee" << std::endl;
                std::cout << "7 : Trace" << std::endl;
                std::cin >> choix2;
                switch(choix2) {
                    case 1:
                        lecture2(T1_33, T2_33);
                        Somme33(T_FINAL33, T1_33, T2_33);
                        std::cout << "La somme est  :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 2:
                        lecture2(T1_33, T2_33);
                        Soustracion33(T_FINAL33, T1_33, T2_33);
                        std::cout << "La soustraction est :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 3:
                        lecture2(T1_33, T2_33);
                        Multiplication33(T_FINAL33, T1_33, T2_33);
                        std::cout << "Le produit est :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 4:
                        lecture1(T_33);
                        Determinant33(det, T_33);
                        std::cout << "Le determinant est : " << det << "\n";
                    break;
                    case 5:
                        lecture1(T_33);
                        temoin = 0;
                        Inverse33(T_FINAL33, temoin, T_33);
                        if(temoin == 0){
                            std::cout << "Cette matrice n'est pas inversible\n";
                        }
                        else{
                            std::cout << "L'inverse est :\n";
                            std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                            std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                            std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                        }
                    break;
                    case 6:
                        lecture1(T_33);
                        Transposee33(T_FINAL33, T_33);
                        std::cout << "La transposee est :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 7:
                        lecture1(T_33);
                        Trace33(trac, T_33);
                        std::cout << "La trace est : " << trac << "\n";
                    break;
                    default:
                        std::cout << "Entrer un nombre entre 1 et 7/n";
                    break;
                }
            break;
            case 3:
            break;    
            default :
            std::cout << "Entrer un chiffre entre 1 et 3" << std::endl;
            break;
        }
    }while(choix1 != 3);
    return 0;
}
