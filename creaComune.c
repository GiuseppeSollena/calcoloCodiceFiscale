#include "CF.h"

int creaComune(char comuneUser[dime],FILE *fp){
    int flag=0,find=0,out=0;
    char strPrel[dime]="";
    char comuneLista[dime]="",codice[dime]="";
    char comuneLista2[dime]="",comuneLista3[dime]="";

    //char prova[dime];

    minMax(comuneUser);
    //strcpy(prova,comuneUser);

    while(!feof(fp) && find==0){
        fgets(strPrel,max,fp);

        out=sscanf(strPrel,"%s %s %s %s",comuneLista,comuneLista2,comuneLista3,codice);
        if(out==4){
            strcat(comuneLista,comuneLista2);
            strcat(comuneLista,comuneLista3);
            if(strcmp(comuneLista,comuneUser)==0){
                minMax(codice);
                strcpy(comuneUser,codice);
                flag=1;
                find=1;
            }

        }else if(out==3){
            sscanf(strPrel,"%s %s %s",comuneLista,comuneLista2,codice);
            strcat(comuneLista,comuneLista2);
            if(strcmp(comuneLista,comuneUser)==0){
                minMax(codice);
                strcpy(comuneUser,codice);
                flag=1;
                find=1;
            }

        }else if(out==2){
            sscanf(strPrel,"%s %s",comuneLista,codice);
            if(strcmp(comuneLista,comuneUser)==0){
                minMax(codice);
                strcpy(comuneUser,codice);
                flag=1;
                find=1;
            }
        }


    }
    fclose(fp);
    return flag;
}

void minMax(char ch[]){
    int i;

    for(i=0;ch[i]!='\0';i++){
        ch[i]=toupper(ch[i]);
    }
}
