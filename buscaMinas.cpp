//Jorge Bou-saad
//Alessandro Cecere
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Bienvenida()
{
	char rsp;
	printf("\n Bienvenidos al buscaMinas Bou-Cecere V1.0\n");
	
	
		printf("\n Sabe usted como jugar BuscaMinas ? Si(s) No(n)\n");		
        scanf("%c", &rsp);
        
		if (rsp == 'n'|| rsp == 'N')
		{
            printf("\n Buscaminas es un juego basado en un tablero, en este caso de 8 filas\n");    
            printf("\n y 8 columnas. El juego, dependiendo del nivel que usted seleccione, \n");  
            printf("\n arrojara un numero de minas al tablero. Jugada tras jugada, debera \n"); 
           	printf("\n ingresar una coordenada con dos posibilidades: abrir la casilla escogida\n");
	        printf("\n o colocar una bandera, indicando que cree que ahi se encuentra una mina.\n");
	        printf("\n Al seleccionar una casilla si se encuentra una mina aparecera una 'X', de\n");
	        printf("\n de lo contrario aparecera un numero, que indicara el numero de minas que\n");
	        printf("\n se encuentran en el perimetro; asi: si aparece el numero 1, significa que\n");
	        printf("\n hay una mina en el perimetro de esa casilla.\n");
			printf("\n El objetivo del buscaminas es lograr descubrir las casillas minadas, \n");
			printf("\n pero sin activarlas, es decir, localizarlas por descarte, prestando \n");
			printf("\n atencion a los cuadros numericos que ayudan a revelar la ubicacion de las \n");
			printf("\n minas\n");
			printf("\n \n");
			printf("\n EL jugador podra marcar las minas para bloquearlas y acumular puntos\n");
			printf("\n Si el jugador marca una casilla sin minas, entonces se le restaran puntos\n");
			printf("\n La partida habra terminado cuando el jugador active una mina\n");
			printf("\n Gana el jugador que obtenga mas puntos\n");
			system("pause");
		}
          else if  (rsp == 'S'|| rsp == 's')
          {
          	printf("\n Listo para jugar, solo \n");
          	system("pause");
          }
}

void Eleccion(int nivel, int minas){
     
     printf("\n Ingrese el nivel de dificultad en el cual desea jugar:\n");
     printf("\n Facil<1>, Intermedio <2>, Dificil <3>\n");
     printf("\n Facil:      para jugar con 3 minas en tablero.\n");
     printf("\n Intermedio: para jugar con 6 minas en tablero.\n");
     printf("\n Dificil:    para jugar con 10 minas en tablero.\n");
     scanf(" %i", &nivel);
     if(nivel==1){
     minas=3;
     }
     else if (nivel==2){
     minas=6;
     }
     else if (nivel==3){
     minas=10;
     }
     }
     
void Inicializar (char  vectormina[9][9])
{
	for(int i=1; i <= 8; i++)
	{
		for(int j=1; j <= 8; j++)
		{
			vectormina[i][j]='$';
		}
	}
}

                     
void Mostrar(char vectormina[9][9]){
    printf("\n"); 
    printf("   ");
    for(int i = 1; i < 9; i++){
        printf("(%i)", i);
    }
        printf("\n");
        
    for(int i = 1; i < 9; i++){
        printf("(%i)", i);
        for(int j = 1; j < 9; j++){
            printf("[%c]", vectormina[i][j]);
        }
        printf("\n");
    }
}


void Random(char vectormina[9][9], int i, int j, int minas){

     for(int k=0; k<minas; k++){
     srand(time(NULL));        
     i= 0+(rand()%10);
     srand(time(NULL));        
     j= 0+(rand()%10);
     vectormina[i][j]='X';
}
}

void Mostrar2(char vectormina[9][9]){
    printf("\n"); 
    printf("   ");
    for(int i = 1; i < 9; i++){
        printf("(%i)", i);
    }
        printf("\n");
        
    for(int i = 1; i < 9; i++){
        printf("(%i)", i);
        for(int j = 1; j < 9; j++){
            printf("[%c]", vectormina[i][j]);
        }
        printf("\n");
    }
}


/*
void Mostrar(char vectormina[9][9])
{
 for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++){
            printf("[%c]", vectormina[i][j]);
        }
        printf("\n");
    }
	
	system("pause");
}


*/   
main ()
{
	char vectormina[9][9];
	int nivel=0, minas=0;	
	int i=0,j=0;
	
	system("color f");
	Bienvenida();
	Eleccion(nivel, minas);
	Inicializar(vectormina);
	Mostrar(vectormina);
	Random(vectormina, i, j, minas);
	printf("\n"); 
	Mostrar2(vectormina);
	system("pause");
	
}
