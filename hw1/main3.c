#include <stdio.h>
int strcopy(char a[],char b[],int len){
    for(int i=0;i<len;i++){
            a[i] = b[i];
        }
        return 0;
}

int main()
{
    char a[]= "ABCabcABC";
    int shift = 4;
    int alen = sizeof(a)/sizeof(char)-1;
    char b[alen],c[alen];
    strcopy( b , a , alen ); 
    
    for(int k=0;k<shift;k++){
        
        for(int i=0;i<alen;i++){
            b[i] = b[i+1];
        }
        
    }
    
    for(int i=shift,k=0;i>0;i--,k++){
            b[alen-i] = a[k];
        }
    printf("%s",b);
    return 0;
}
