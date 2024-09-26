#include <stdio.h>
#include <string.h>

int main (){
    char str[100]; 
    printf("ingrese la primeraa cadena");
    fgets(str, 100, stdin); 
    // (condicion) ? accion_verdadera : accion_falsa 
    printf("%s" , (strlen(str)==1)? "Cadena vacia\n" : "Cadena no vacia\n" );
    return 0; 
}
