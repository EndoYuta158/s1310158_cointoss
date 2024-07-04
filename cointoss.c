#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  srand(time(NULL));
  int i,count,result[4];
  char name[100];
  char* HeadOrTail;
  printf("Who are you?\n> ");
  scanf("%s",&name);
  printf("Hello,%s!\n",name);
  printf("Tossing a coin...\n");
  for(i=1;i<=3;i++){
    result[i] = rand()%2;
    if(result[i] == 1){
      count++;
      HeadOrTail = "Heads";
    } else { HeadOrTail = "Tails";}
    printf("Round %d:%s\n",i,HeadOrTail);
  }
  printf("Heads:%d,Tails:%d\n",count,3-count);
  if(count>3-count){
    printf("%s won!\n",name);
  } else {
    printf("%s lost.\n",name);
  }
  return 0;
}
    
    
