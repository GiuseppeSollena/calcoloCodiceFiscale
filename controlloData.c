#include "CF.h"

int controlloData(int gg,int mm,int anno){         //verranno passati come parametri GIORNO ESTRATTO, MESE ESTRATTO, ANNO ESTRATTO

    int v[12] = { 30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };   //mi dichiaro un array che rappresenta il numero di giorni per ogni mese, mi servirà per il controllo
    int ris=1,g=1,m=1,a=1;

    if(gg<1||gg>31){   g=0;
    }
    switch(mm){     //utilizzo uno switch per fare diversi controlli a seconda del mese inserito (visto che i mesi hanno un totale di giorni differenti)
        case 1:
            if (gg<1||gg>v[0]) g=0;             //il controllo per ogni mese è fatto con una condizione sui giorni da 1 al valore nella posizione array corrispondente a quel mese
            break;
        case 2:
            if (annoBis(anno)){
                v[1]=29;                                                    //solo nel caso del mese di febbraio inserisco una condizione: se è anno bisestile cambio il valore nella posizione 1 (visto che nell'anno bis febbraio ne ha 29)
                if(gg<1||gg>v[1]) g=0;
            }else{
                if(gg<1||(gg>v[1]&&gg!=29)) g=0;
                else if (gg==29)  a=0;
            }
            break;
        case 3:
            if(gg<1||gg>v[2]) g=0;
            break;
        case 4:
            if(gg<1||gg>v[3]) g=0;
            break;
        case 5:
            if(gg<1||gg>v[4]) g=0;
            break;
        case 6:
            if(gg<1||gg>v[5]) g=0;
            break;
        case 7:
            if(gg<1||gg>v[6]) g=0;
            break;
        case 8:
            if(gg<1||gg>v[7]) g=0;
            break;
        case 9:
            if(gg<1||gg>v[8]) g=0;
            break;
        case 10:
            if(gg<1||gg>v[9]) g=0;
            break;
        case 11:
            if(gg<1||gg>v[10]) g=0;
            break;
        case 12:
            if(gg<1||gg>v[11]) g=0;
            break;
        default:
            m=0;
            break;
    }
    if (g==0&&m==1&&a==1) printf("GIORNO ERRATO!");
    else if(g==1&&m==0&&a==1) printf("MESE ERRATO!");
    else if (g==0&&m==0&&a==1) printf("GIORNO E MESE ERRATI!");
    else if (g==1&&m==1&&a==0) printf("ATTENZIONE: ANNO NON BISESTILE");

    ris= m*a;
    ris*=g;

    return ris;

}

int annoBis(int anno){
    int bis;

    if (anno%100==0)
        if (anno%400==0)
            bis=1;
        else
            bis=0;

    else
    if (anno%4==0)
        bis=1;

    else
        bis=0;

    return bis;             //restituisco 1 se l'anno è bisestile e 0 se non lo è 
}