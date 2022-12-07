#include "CF.h"

void recuperaStringa(char str[]){
    char stringa[dime]="";
    char car;

    scanf("%c",&car);

    while(car!='\n'){

        scanf("%s",stringa);
        strcat(str,stringa);

        scanf("%c",&car);
    }
}

void salvaVocali(char str[],char appoggio[]){
    int i,k,a=0,c=0;
    char vocali[5]= "aeiou";
    char servile[dime];
    strcpy(servile,str);

    for(i=0;str[i]!='\0';i++){
        servile[i]=tolower(servile[i]);
        if(isalpha(servile[i])!=0){

            for(k=0;k<5;k++){
                if(servile[i]==vocali[k]){
                    appoggio[a]=str[i];
                    a++;
                    k=5;
                }
            }
        }
    }
    appoggio[a]='\0';
}

void salvaConsonanti(char str[],char appoggio[]){
    int i,k,a=0,c=0;
    char vocali[5]="aeiou";
    char servile[dime];
    strcpy(servile,str);

    for(i=0;str[i]!='\0';i++){
        servile[i]=tolower(servile[i]);
        if(isalpha(servile[i])!=0){

            c=0;
            for(k=0;k<5;k++){
                if(servile[i]!=vocali[k]){
                    c++;
                }
            }
            if(c==5)    {
                appoggio[a]=str[i];
                a++;
            }
        }
    }
    appoggio[a]='\0';

}