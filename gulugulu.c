#include <stdio.h>
int main(){
char a[]={24,342,31,423,41,5647,876,8};
int len=sizeof(a)/sizeof(a[0]);
int temp;
for(int i=0;i<len-1;i++){
      for(int j;j<len-i-1;j++){
           if(a[j]>a[j+1]){
               temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
}
}
          printf("%d",a[j]);
}
}
