#include<stdio.h> // Rotate string 
#include<string.h>

int main (){
    char name [20];
    char c ;
    int l;
    fgets(name,20,stdin);
    l = strlen(name);
    for (int i =0 ; i< l/2 ; i++){
        c = name[i];
        name[i] = name[l -1-i];
        name[l-1-i]=c ;
    }


   printf ("%s",name);
    


    return 0;
}