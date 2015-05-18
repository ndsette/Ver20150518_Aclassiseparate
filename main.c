#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 25
#define CLASSLEN 5
#define N 2

struct scuola{
    
    char nome[MAXLEN];
    char cognome[MAXLEN];
    char classe[CLASSLEN];
    int sesso;
    int eta;
    
    
};

int main(int argc, char** argv) {
    
    FILE *p;
    int i;
    
    
    struct scuola studente[N];
    
    for(i=0;i<N;i++){
        
        printf("\ninserisci nome studente: ");
        scanf("%s",studente[i].nome);
        printf("\ninserisci cognome studente: ");
        scanf("%s",studente[i].cognome);
        printf("\ninserisci classe studente: ");
        scanf("%s",studente[i].classe);
        printf("\ninserisci il sesso dello studente: ");
        scanf("%d",&studente[i].sesso);
        printf("\ninserisci eta' studente: ");
        scanf("%d",&studente[i].eta);
         
    }
    
    if(studente[i].sesso=1){
        
       p=fopen("maschi.csv","w");
        
        
        for(i=0;i<N;i++){
             
           
           
           fprintf(p,"%s",studente[i].nome,N);
           fprintf(p,"%s",studente[i].cognome,N);
           fprintf(p,"%s",studente[i].classe,N);
           fprintf(p,"%d",studente[i].sesso,N);
           fprintf(p,"%d",studente[i].eta,N);
           
           
         
           
            
        }  
            
      
fclose(p);
    }
    
    
     
    
        else{
            
          
           p=fopen("femmine.csv","w") ;
       
           
            for(i=0;i<N;i++){  
                
                
           fprintf(p,"%s",studente[i].nome,N);
           fprintf(p,"%s",studente[i].cognome,N);
           fprintf(p,"%s",studente[i].classe,N);
           fprintf(p,"%d",studente[i].sesso,N);
           fprintf(p,"%d",studente[i].eta,N);  
            
           
              
               
           }
             
            }
           
            fclose(p);
            
          
        
 
    return (EXIT_SUCCESS);
}

