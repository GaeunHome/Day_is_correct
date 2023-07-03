#include <stdlib.h>
#include <stdbool.h>
bool flagloop(int);
int main(void) {
  int Y, M, D;
  scanf("%d#%d#%d", &Y, &M, &D);
  bool loop = flagloop(Y);
  if( Y<0 || M<=0 ){
    printf("0");
    return 0;
  }
  if(loop==true){
    if( M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12 ){
      if( D>31 || D<0) {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
    else if(  M==4 || M==6 || M==9 || M==11 ){
      if( D>30 || D<0) {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
    else{
      if( D>29 || D<0) {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
  }
  else{
    if( M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12 ){
      if( D>31 || D<0) {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
    else if(  M==4 || M==6 || M==9 || M==11 ){
      if( D>30 || D<0) {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
    else{
      if( D>28 || D<0 ) {
        printf("0");
      }
      else
      {
        printf("1");
      }
    }
  }
}
bool flagloop(int y){
  return (y%400==0) || ( (y%4==0) && !(y%100==0) );
}
