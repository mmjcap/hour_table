#include <stdio.h>

int main() {
    int giorno;

    do {
        // Chiede all'utente di inserire il giorno della settimana da visualizzare
        printf("\nInserisci il giorno della settimana (1=Lunedi', 2=Martedi', 3=Mercoledi', 4=Giovedi', 5=Venerdi', 0=Tutta Settimana): ");
        scanf("%d", &giorno);

        // Visualizza l'orario scolastico del giorno selezionato
        switch (giorno) {
            case 1:
                printf("\nLunedi':\n\n");
                printf("1) italiano\n");
                printf("2) storia\n");
                printf("3) matematica\n");
                printf("4) matematica\n");
                printf("5) storia\n");
                printf("6) scienze\n");
                break;
                
            case 2:
                printf("\nMartedi':\n\n");
                printf("1) fisica\n");
                printf("2) fisica\n");
                printf("3) arte\n");
                printf("4) scienze\n");
                printf("5) inglese\n");
                printf("6) filosofia\n");
                break;
                
            case 3:
                printf("\nMercoledi':\n\n");
                printf("1) italiano\n");
                printf("2) italiano\n");
                printf("3) informatica\n");
                printf("4) matematica\n");
                printf("5) ginnastica\n");
                printf("6) ginnastica\n");
                break;
                
            case 4:
                printf("\nGiovedi':\n\n");
                printf("1) scienze\n");
                printf("2) inglese\n");
                printf("3) filosofia\n");
                printf("4) fisica\n");
                printf("5) religione\n");
                printf("6) arte\n");
                break;
                
            case 5:
                printf("\nVenerdi':\n\n");
                printf("1) informatica\n");
                printf("2) inglese\n");
                printf("3) scienze\n");
                printf("4) scienze\n");
                printf("5) italiano\n");
                printf("6) matematica\n");
                break;
                
            case 0:
            	printf("Lunedi':\t1 italiano\t2 storia\t3 matematica\t4 matematica\t5 storia\t6 scienze\n");
            	printf("Martedi':\t1 fisica\t2 fisica\t3 arte\t\t4 scienze\t5 inglese\t6 filosofia\n");
            	printf("Mercoledi':\t1 italiano\t2 italiano\t3 informatica\t4 matematica\t5 ginnastica\t6 ginnastica\n");
            	printf("Giovedi':\t1 scienze\t2 inglese\t3 filosofia\t4 fisica\t5 religione\t6 arte\n");
            	printf("Venerdi':\t1 informatica\t2 inglese\t3 scienze\t4 scienze\t5 italiano\t6 matematica\n");
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
