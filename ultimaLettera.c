#include "CF.h"

void charFinale(char cf[]){
    int i,j=0,k=0;
    char appoggio[dime]="";
    char dispari[dime]="";
    char pari[dime]="";
    char x;
    int totPari=0,totDisp=0,ris=0,parz=0;

    strcpy(appoggio,cf);

    for(i=0;cf[i]!='\0';i++){
        if(i%2==0){
            dispari[j]=cf[i];
            j++;
        }
        else{
            pari[k]=cf[i];
            k++;
        }
    }

    for(i=0;pari[i]!='\0';i++){
        if(isalpha(pari[i])) totPari+=pari[i] - 'A'; // -65

        else if (isdigit(pari[i]))  totPari+=pari[i] - '0'; // -48

    }

    for(i=0;dispari[i]!='\0';i++){
        if(dispari[i]=='A'||(dispari[i]=='0')) totDisp+=1;
        else if(dispari[i]=='B'||(dispari[i]=='1')) totDisp+=0;
        else if(dispari[i]=='C'||(dispari[i]=='2')) totDisp+=5;
        else if(dispari[i]=='D'||(dispari[i]=='3')) totDisp+=7;
        else if(dispari[i]=='E'||(dispari[i]=='4')) totDisp+=9;
        else if(dispari[i]=='F'||(dispari[i]=='5')) totDisp+=13;
        else if(dispari[i]=='G'||(dispari[i]=='6')) totDisp+=15;
        else if(dispari[i]=='H'||(dispari[i]=='7')) totDisp+=17;
        else if(dispari[i]=='I'||(dispari[i]=='8')) totDisp+=19;
        else if(dispari[i]=='J'||(dispari[i]=='9')) totDisp+=21;
        else if(dispari[i]=='k') totDisp+=2;
        else if(dispari[i]=='L') totDisp+=4;
        else if(dispari[i]=='M') totDisp+=18;
        else if(dispari[i]=='N') totDisp+=20;
        else if(dispari[i]=='O') totDisp+=11;
        else if(dispari[i]=='P') totDisp+=3;
        else if(dispari[i]=='Q') totDisp+=6;
        else if(dispari[i]=='R') totDisp+=8;
        else if(dispari[i]=='S') totDisp+=12;
        else if(dispari[i]=='T') totDisp+=14;
        else if(dispari[i]=='U') totDisp+=16;
        else if(dispari[i]=='V') totDisp+=10;
        else if(dispari[i]=='W') totDisp+=22;
        else if(dispari[i]=='X') totDisp+=25;
        else if(dispari[i]=='Y') totDisp+=24;
        else if(dispari[i]=='Z') totDisp+=23;
    }

    ris=(totDisp+totPari);

    while(parz<ris){
        parz+=26;
    }
    parz+=-26;
    ris=ris-parz;

    x = ris + 'A';

    appoggio[0]=x;
    appoggio[1]='\0';

    strcat(cf,appoggio);

}