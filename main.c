#include "CF.h"
#define dime 100

int main()
{
    char nome[dime]="";
    char cognome[dime]="";
    char data[dime]="";
    char codiceFiscale[dime]="";
    char cfCompleto[dime]="";
    char sesso[dime]="";
    char comuneUser[dime];
    FILE *fp;
    int i=1,esito=0;

    printf("\nInserisci le tue generalità per creare tuo codice fiscale:\n");

    do{
        printf("\nInserisci cognome: ");
        scanf("%s",cognome);
    }while(controlloNome(cognome)==0);

    recuperaStringa(cognome);
    do{
        printf("\nInserisci nome: ");
        scanf("%s",nome);
    }while(controlloNome(nome)==0);

    recuperaStringa(nome);

    estraiCognome(cognome);
    estraiNome(nome);

    do{
        printf("\nInserisci sesso F o M: ");
        scanf("%s",sesso);
    }while(controlloSesso(sesso)==0);

    creaDataCF(data,sesso);


    printf("\nInserisci il comune di nascita: "); scanf("%s",comuneUser);
    recuperaStringa(comuneUser);

    do{
        switch(i){
            case 1:
                fp=fopen("comuni_1","r");
                esito=creaComune(comuneUser,fp);
                break;
            case 2:
                if(esito==0) fp=fopen("comuni_2","r");
                esito=creaComune(comuneUser,fp);
                break;
            case 3:
                if(esito==0) fp=fopen("comuni_3","r");
                esito=creaComune(comuneUser,fp);
                break;
            case 4:
                if(esito==0) fp=fopen("comuni_4","r");
                esito=creaComune(comuneUser,fp);
                break;
        }
        i++;
    }while(i<=4&&esito==0);

    if(esito==0){ printf("\nComune non trovato nel database, verrà creato un CF incompleto");
        strcat(codiceFiscale,cognome);
        strcat(codiceFiscale,nome);
        strcat(codiceFiscale,data);
    }
    else{
        strcat(codiceFiscale,cognome);
        strcat(codiceFiscale,nome);
        strcat(codiceFiscale,data);
        strcat(codiceFiscale,comuneUser);
        charFinale(codiceFiscale);
    }


    printf("\nCODICE FISCALE: %s",codiceFiscale);



    return 0;
}

