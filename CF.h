//
// Created by solle on 08/12/2022.
//

#ifndef CALCOLOCODICEFISCALE_CF_H
#define CALCOLOCODICEFISCALE_CF_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define dime 100
#define max 80

void recuperaStringa(char str[]);                   //funzione che recupera stringa se nome o cognome composto
void salvaVocali(char str[],char appoggio[]);       //funzione che estrae vocali da stringa
void salvaConsonanti(char str[],char appoggio[]);   //funzione che estrae consonanti da stringa

int controlloData(int gg,int mm,int anno);          //funzione che controlla la data inserita
int annoBis(int anno);                              //funzione di controllo se l'anno è bisestile

void creaDataCF(char ch[],char sesso[]);                        //funzione che crea la stringa data compattando (in un determinato modo) la data inserita
void assegnoAnno(char annoCh[], int anno);                      //funzione che trasforma in stringa l'anno inserito
void assegnoMese(char meseCh[], int mese);                      //funzione che trasforma in stringa il mese inserito
void assegnoGiorno(char giornoCh[], int giorno,char sesso[]);   //funzione che trasforma in stringa il giorno inserito

void estraiNome(char ch[]);     //funzione che estrae le 3 lettere dal nome da inserire nel CF
void estraiCognome(char ch[]); //funzion che estrae le 3 lettere dal cognome da inserire nel CF
int controlloNome(char ch[]);   //funzione di controllo se il nome è stato inserito correttamente
int controlloSesso(char ch[]);  //funzione di controllo se il sesso è stato inserito correttamente

int creaComune(char comuneUser[],FILE *fp);  //funzione che cerca il comune nei file, trasforma la stringa comune nel codice corrispondente se lo trova e restituisce l'esito (0/1)
void minMax(char ch[]);                     //trasforma stringa in maiuscolo

void charFinale(char cf[]);                 //funzione apposita per ottenere l'ultima lettera del codice fiscale
#endif //CALCOLOCODICEFISCALE_CF_H
