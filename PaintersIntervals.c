#include <stdio.h>
#include <stdbool.h>
#define tamanho_maximo 100

bool verificarOverlap(int seccoesA,int seccoesB, int seccoesC, int seccoesD){
    if((seccoesA>=seccoesC && seccoesA <=seccoesD) ||
      (seccoesB >= seccoesC && seccoesB <= seccoesD)){
      return true;
    }
   if((seccoesC>=seccoesA && seccoesC <=seccoesB) || 
       (seccoesD>=seccoesA && seccoesD <=seccoesB)){
      return true;
   }
    else 
     return false;
}

bool verificarInclude(int seccoesA,int seccoesB, int seccoesC, int seccoesD){
  if (seccoesA >= seccoesC && seccoesB <= seccoesD) {
        return true; 
    } 
  if (seccoesC >= seccoesA && seccoesD <= seccoesB) {
        return true;
    } 
  else 
        return false;
}



int main(void) {
  
  int seccoes_n[tamanho_maximo];
 
  int count = 0;
  int o = 0;
  int i=0;
  while(1){
    
    if(!(scanf("%d-%d,%d-%d",&seccoes_n[0],&seccoes_n[1],&seccoes_n[2],&seccoes_n[3])==4)){
      break; 
    }
    o += verificarOverlap(seccoes_n[0], seccoes_n[1], seccoes_n[2], seccoes_n[3]);
    i += verificarInclude(seccoes_n[0], seccoes_n[1], seccoes_n[2], seccoes_n[3]);
    count++;
  
  }
  
  printf("intervals included %d\n",i);
  printf("intervals overlaped %d\n",o);
  printf("total cases %d\n",count);

  return 0;
}
