#include "CF.h"

void estraiCognome(char ch[]){
    int i,j,k,lunCons,lunVoc;
    char cognomeFin[dime] = "";
    char appoggioVocali[dime] = "";
    char appoggioConsonanti[dime] = "";

    salvaVocali(ch,appoggioVocali);
    salvaConsonanti(ch,appoggioConsonanti);

    lunCons=strlen(appoggioConsonanti);
    lunVoc=strlen(appoggioVocali);

    for(i=0;i<lunCons&&i<3;i++){
        cognomeFin[i]=toupper(appoggioConsonanti[i]);
    }
    if(lunCons<3){
        j=i;
        for(k=0;k<lunVoc&&((k+i)<3);k++){
            cognomeFin[j]=toupper(appoggioVocali[k]);
            j++;
        }
        if((lunCons+lunVoc)==2) cognomeFin[2]='X';

    }

    strcpy(ch,cognomeFin);
}

void estraiNome(char ch[]){
    int i,j,k,a=0,lunCons,lunVoc;
    char nomeFin[dime] = "";
    char appoggioVocali[dime] = "";
    char appoggioConsonanti[dime] = "";

    salvaVocali(ch,appoggioVocali);
    salvaConsonanti(ch,appoggioConsonanti);

    lunCons=strlen(appoggioConsonanti);
    lunVoc=strlen(appoggioVocali);

    if(lunCons>3){
        for(i=0;i<lunCons&&i<4;i++){
            if(i==0||i==2||i==3){
                nomeFin[a]=toupper(appoggioConsonanti[i]);
                a++;
            }
        }

    }else if(lunCons<=3){
        for(i=0;i<lunCons;i++){
            nomeFin[a]=toupper(appoggioConsonanti[i]);
            a++;
        }

        j=i;
        for(k=0;k<lunVoc&&((k+i)<3);k++){
            nomeFin[j]=toupper(appoggioVocali[k]);
            j++;
        }

        if((lunCons+lunVoc)==2) nomeFin[2]='X';
    }

    strcpy(ch,nomeFin);

}

