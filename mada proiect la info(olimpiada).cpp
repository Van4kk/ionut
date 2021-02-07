#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

struct Elev{
    struct Prof{
    
        char p_nume [50];
        char p_prenume [50];
        }prof;
       
        char nume[50];
        char prenume[50];
        char liceu[50];
        float examinator1,examinator2,punctaj;
        }elev[200];

void citire_elev(int i){
    
    char a[50];
    cin.get();
    cout<<"Nume Elev: "; cin.getline(elev[i].nume,50);
    cout<<"Prenume Elev: "; cin.getline(elev[i].prenume,50);
    cout<<"Liceul: "; cin.getline(elev[i].liceu,50);
    cout<<"Nume Profesorului: " ; cin.getline(elev[i].prof.p_nume,50);
    cout<<"Prenume Profesorului: " ; cin.getline(elev[i].prof.p_prenume,50);
    cout<<"Punctajul acordat de primul profesor: ";cin>>elev[i].examinator1;
    cout<<"Punctajul acordat de al doilea profesor: ";cin>>elev[i].examinator2;
    
    }

void afisare_elev(int i){
    
    cout<<"Nume Elev: "; cout<<elev[i].nume<<endl;
    cout<<"Prenume Elev: "; cout<<elev[i].prenume<<endl;
    cout<<"Liceul: "; cout<<elev[i].liceu<<endl;
    cout<<"Nume Profesorului: " ; cout<<elev[i].prof.p_nume<<endl;
    cout<<"Prenume Profesorului: " ; cout<<elev[i].prof.p_prenume<<endl;
    
    }

void nr(char k){
    
    char aux[50];
    int j,l=0;
    

for(j=0;j<strlen(aux);j++)
    if(elev[i].nume[j]>35 && elev[i].prenume[j]<127)
        l++;
    strcpy(elev[i].prenume,aux);
    for(j=0;j<strlen(aux);j++)
        if(aux[j]>35 && aux[j]<127)
            l++;
    
    cout<<"Numele si prenumele au "<<l<<" caractere";
    }
	
int main(){
    
    int k;
    cout<<"Introduceti numarul de elevi: " ;
	cin>>n;
    for(i=1;i<=n;i++){
		citire_elev(i);
        }
    
    nr(k);
    
    for(i=1;i<=n;i++){
		afisare_elev(i);
        }
        
    char voc[100]="AEIOUaeiou \n",ska[50];
    int nrv=0,v;
    strcpy(elev[i].liceu,ska);
    for(v=0;v<strlen(ska);v++){
        if(strchr(voc,ska)!=NULL)
            nrv++;
        }
    }
    cout<<"Vocale în numele sunt: "<<nrv;
    
    char cons[100]="QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm \n",ask[50];
    int nrc=0,c;
    strcpy(elev[i].prof.p_nume,ask);
    for(c=0;c<strlen(ask);c++){
        if(strchr(cons,ask)!=NULL)
            nrc++;
    }
    cout<<"Consoane în numele profesorului sunt: "<<nrc;
    
    char ppn[50];
    strcpy(elev[i].prof.p_prenume,ppn);
    for(c=0;c<strlen(ppn);c++){
        if(strchr(cons,ppn)!=NULL)
            nrc++;
    }
    cout<<"Consoane în prenumele profesorului sunt: "<<nrc;
    
    
    return 0;
 }

