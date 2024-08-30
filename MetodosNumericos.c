#include<stdio.h>
#include<stdlib.h>
int MenuPrincipal();
int MenuEcuacionesUnaVariable();
int MenuMetodosCerrados();
int main(){
    for(;;){
        switch(MenuPrincipal()){
            case 1:
                switch(MenuEcuacionesUnaVariable()){
                    case 1:
                        switch(MenuMetodosCerrados()){
                            case 1:
                                break;
                            case 3:
                                exit(0);
                                break;
                        }
                        break;
                    case 4:
                        exit(0);
                        break;
                }
                break;
            case 6:
                exit(0);
                break;
        }
    }


    return 0;
}
int MenuPrincipal(){
    int a;
    printf("1)Metodos para resolver ecuaciones de una variable\n2)Metodos numericos de derivacion\n"
           "3)Metodos numericos de integracion\n4)Metodos numericos de EDO\n"
           "5)Algebra lineal\n6)Interpolacion y aproximacion\n6) salir\n");

    scanf("%d", &a);
    return a;
}
int MenuEcuacionesUnaVariable(){
    int a;
    printf("1)Metodos Cerrados\n2)Metodos abiertos\n"
           "3)Metodos de raices de polinomios\n4)Salir\n");
    scanf("%d", &a);
    return a;
}
int MenuMetodosCerrados(){
    int a;
    printf("1)Metodo de la biseccion\n2)Metodo de la falsa posicion\n3)Salir\n");
    scanf("%d", &a);
    return a;
}


