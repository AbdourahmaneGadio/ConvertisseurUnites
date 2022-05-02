#include<stdio.h>
#include<math.h> 
#include<stdlib.h>

int main(void){
	float valeurDonnee, valeurMetres;
	int choix;	
	
	printf("Choississez : \n");
	printf("1 - Feet(Pieds), 2 - Inches(Pouces)\n");
	scanf("%d", &choix);
	
	switch(choix){
		case 1:
			printf("Entrez la valeur en 'pieds' : \n");
			scanf("%f", &valeurDonnee);
			valeurMetres = valeurDonnee * 0.3048;
			break;
		
		case 2:
		    printf("Entrez la valeur en 'pouces' : \n");
			scanf("%f", &valeurDonnee);
			valeurMetres = valeurDonnee * 0.0254;
			break;
	}	// switch
	
	printf("Valeur en 'mètres' : %f \n", valeurMetres);

    
    return 0;
} // main
