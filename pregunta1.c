#include<stdio.h>
int main(){
    unsigned int registro;
    unsigned char n;
    printf("Ingrese un numero: ");
    scanf("%u",&registro);
    for (;;){
        if (n=='q'){
            break;
        }
        printf("\n1. Encender el bit n.");
        printf("\n2. Apagar el bit n.");
        printf("\n3. Alternar (si prendido, apagarlo, si apagado prenderlo) el bit n");
        printf("\n4. Consultar si el bit n está encendido");
        printf("\n5. Imprimir el registro en binario,hexadecimal y decimal sin signo.");
        printf("\n6. Contar bits encendidos.");
        printf("\n7. Invertir todos los bits del registro.");
        printf("\n0. Salir.");

        printf("\nIngrese la opcion: ");
        scanf("%u",&n);
        
        switch (n){
        case 1:
        registro|=1U<<n;
            break;
        case 2:
        registro&=~(1u<<n);
            break;
        case 3:
        registro=(1u<<n);// Si el bit era 1 tenia que cambiar a 0, si era 0 a 1;
            break;
        case 4:
        printf((registro & 1U<<n)? "Si":"No");
            break;
        case 5:
        for (int i = 31; i>=0; i--){
            //printf(); //La idea era usar una operacion comparando con el ultimo digito e imprimirlo

            if (i%4==0){
               printf(" ");
            }
        }
        printf("\n");
        printf("0x%08X",registro);
        printf("%u",registro);
            break;
        case 6:
        unsigned x = registro;
        int contador=0;
        for (int i = 31; i >= 0; i++){
            if(registro & 1U<<i){
                contador++;
            }
            printf("El numero tiene %d bits encendidos",contador);
        }
            break;
        case 7:
        registro=~(registro);
            break;
        case 0:
        
        break;
        default:
        printf("\nOpcion no valida");
            break;
        }
        
    }
    

}