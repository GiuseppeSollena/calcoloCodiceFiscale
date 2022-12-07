#include "CF.h"

void creaDataCF(char ch[],char sesso[]){
    int giorno,mese,anno;
    char giornoCh[dime]="",meseCh[dime]="",annoCh[dime]="";
    do{
        printf("\n");
        printf("Inserisci giorno di nascita: "); scanf("%d",&giorno);
        printf("Inserisci mese di nascita: "); scanf("%d",&mese);
        printf("Inserisci anno di nascita: "); scanf("%d",&anno);

    }while(controlloData(giorno,mese,anno)==0);

    assegnoAnno(annoCh,anno);
    assegnoMese(meseCh,mese);
    assegnoGiorno(giornoCh,giorno,sesso);


    strcat(ch,annoCh); strcat(ch,meseCh); strcat(ch,giornoCh);

}

void assegnoGiorno(char giornoCh[],int giorno,char sesso[]){

    if((strcmp(sesso,"F")==0)||(strcmp(sesso,"f")==0)) giorno+=40;

    if(giorno<10) sprintf(giornoCh,"0%d",giorno);
    else sprintf(giornoCh,"%d",giorno);
}

void assegnoAnno(char annoCh[],int anno){
    char appoggio[dime];

    sprintf(appoggio,"%d",anno);
    if(strlen(appoggio)==4){
        annoCh[0]=appoggio[2];
        annoCh[1]=appoggio[3];
        annoCh[2]='\0';
    }
    else{
        annoCh[0]=appoggio[0];
        annoCh[1]=appoggio[1];
        annoCh[2]='\0';
    }
}

void assegnoMese(char meseCh[],int mese){
    switch(mese){
        case 1:
            strcpy(meseCh,"A");
            break;
        case 2:
            strcpy(meseCh,"B");
            break;
        case 3:
            strcpy(meseCh,"C");
            break;
        case 4:
            strcpy(meseCh,"D");
            break;
        case 5:
            strcpy(meseCh,"E");
            break;
        case 6:
            strcpy(meseCh,"H");
            break;
        case 7:
            strcpy(meseCh,"L");
            break;
        case 8:
            strcpy(meseCh,"M");
            break;
        case 9:
            strcpy(meseCh,"P");
            break;
        case 10:
            strcpy(meseCh,"R");
            break;
        case 11:
            strcpy(meseCh,"S");
            break;
        case 12:
            strcpy(meseCh,"T");
            break;
    }
}









