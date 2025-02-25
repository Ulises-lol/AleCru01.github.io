/*
Mejore el ejercicio anterior para que a partir de 
n se gener un espejo de la escalera
*/

#include <stdio.h>

main(){
	int vueltas,contador=1,i,j;
	
	printf("*********\n");
	printf("* ARBOL *\n");
	printf("*********\n\n\n");
	
	printf("Dame la cantidad de vueltas: ");
	scanf("%d", &vueltas);
	
	for(i=1;i<=vueltas; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
		
	}
	for(i=vueltas-1; i>=1; i--){
		for(j=i; j>=1; j--){
			printf("*");
		}
		printf("\n");
	}
}
