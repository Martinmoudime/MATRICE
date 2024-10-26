#include <iostream>
#include "matrice22.h"
#include "matrice33.h"

const int taille1 = 2;
const int taille2 = 3;

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
                        Somme22(T_FINAL22);
                        std::cout << "La somme est  :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                         std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 2:
                        Soustracion22(T_FINAL22);
                        std::cout << "La soustraction est :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                        std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 3:
                        Multiplication22(T_FINAL22);
                        std::cout << "Le produit est :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                        std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 4:
                        Determinant22(det);
                        std::cout << "Le determinant est :" << det << "\n";
                    break;
                    case 5:
                        temoin = 0;
                        Inverse22(T_FINAL22, temoin);
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
                        Transposee22(T_FINAL22);
                        std::cout << "La transposee est :\n";
                        std::cout << "( "  << T_FINAL22[0][0] << " " <<  T_FINAL22[0][1] << " )\n";
                        std::cout << "( "  << T_FINAL22[1][0] << " " <<  T_FINAL22[1][1] << " )\n";
                    break;
                    case 7:
                        Trace22(trac);
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
                        Somme33(T_FINAL33);
                        std::cout << "La somme est  :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 2:
                        Soustracion33(T_FINAL33);
                        std::cout << "La soustraction est :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 3:
                        Multiplication33(T_FINAL33);
                        std::cout << "Le produit est :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 4:
                        Determinant33(det);
                        std::cout << "Le determinant est : " << det << "\n";
                    break;
                    case 5:
                        temoin = 0;
                        Inverse33(T_FINAL33, temoin);
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
                        Transposee33(T_FINAL33);
                        std::cout << "La transposee est :\n";
                        std::cout << "( "  << T_FINAL33[0][0] << " " <<  T_FINAL33[0][1] << " " <<  T_FINAL33[0][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[1][0] << " " <<  T_FINAL33[1][1] << " " <<  T_FINAL33[1][2] << " )\n";
                        std::cout << "( "  << T_FINAL33[2][0] << " " <<  T_FINAL33[2][1] << " " <<  T_FINAL33[2][2] << " )\n";
                    break;
                    case 7:
                        Trace33(trac);
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