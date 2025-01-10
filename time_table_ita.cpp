#include <stdio.h>

int main() {
    int giorno;

    do {
        // Chiede all'utente di inserire il giorno della settimana da visualizzare
        printf("\nInserisci il giorno della settimana (1=Lunedi', 2=Martedi', 3=Mercoledi', 4=Giovedi', 5=Venerdi', 6=Sabato, 0=Tutta Settimana): ");
        scanf("%d", &giorno);

        // Visualizza l'orario scolastico del giorno selezionato
        switch (giorno) {
            case 1:
                printf("\nLunedi':\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 2:
                printf("\nMartedi':\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 3:
                printf("\nMercoledi':\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 4:
                printf("\nGiovedi':\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;
                
            case 5:
                printf("\nVenerdi':\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                /*printf("7) -\n");
                printf("8) -\n");*/
                break;

            /*case 6:
                printf("\nSabato:\n\n");
                printf("1) -\n");
                printf("2) -\n");
                printf("3) -\n");
                printf("4) -\n");
                printf("5) -\n");
                printf("6) -\n");
                printf("7) -\n");
                printf("8) -\n");
                break;
            */
                
            case 0:
            	printf("Lunedi':\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Martedi':\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Mercoledi':\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Giovedi':\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
            	printf("Venerdi':\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");
                /*printf("Sabato:\t1 -\t2 -\t3 -\t4 -\t5 -\t6 -\t7 -\t8 -\n");*/
                
            	break;
            	
            default:
                printf("Giorno non valido\n");
                continue;
        }

        // Chiede all'utente se vuole visualizzare un altro giorno
        char risposta;
        printf("\nVuoi visualizzare l'orario per un altro giorno? (y/n): ");
        scanf(" %c", &risposta);

        if (risposta != 'y' && risposta != 'Y') {
            break;
        }
    } while (1);

    return 0;
}
