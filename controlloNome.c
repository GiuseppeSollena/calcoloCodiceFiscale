#include "CF.h"

int controlloNome(char ch[]){
    char scelta;
    char parola[dime]="";
    char car;
    int n=1;


    scanf("%c",&car);

    while(car!='\n'){

        scanf("%s",parola); //Leggo le singole parole che compongono il nome
        strcat(ch, " ");

        strcat(ch,parola); // Costruisco il nome acquisendo le singole parole

        scanf("%c",&car); // Leggo dal Buffer lo spazio tra le parole che non e'
        //stato trasferito e che interrompe la lettura delle parole successive
    }


    //car=' ';

    printf("\nIl tuo nome è %s?  y/n: ",ch);
    scanf("%c",&scelta); while(scelta=='\n'||(scelta!='n'&&scelta!='y'&&scelta!='N'&&scelta!='Y')) scanf("%c",&scelta);
    scelta=tolower(scelta);

    if(scelta=='n') n=0;

    return n;
}


int controlloSesso(char ch[]){
    int n=1;

    if( (strlen(ch)!=1)||( (strcmp(ch,"f")!=0)&&(strcmp(ch,"m")!=0)&&(strcmp(ch,"F")!=0)&&(strcmp(ch,"M")!=0) ) ) n=0;

    return n;
}