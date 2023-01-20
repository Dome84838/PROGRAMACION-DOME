#include <stdio.h>
int main(){
FILE *archivo=NULL;
FILE *archivo2=NULL;
int f;
archivo=fopen("vector.txt","r");
archivo2=fopen("total.txt","w");
if(archivo==NULL){
 printf("No existen permisos para poder abrir el archivo");
return -1;
}
if(archivo2==NULL){
 printf("No existen permisos para poder abrir el archivo");
return (-1);
}
while(!feof(archivo)){
 fscanf(archivo,"%d",&f);
if(f%10==0 && f!=0){
 fprintf(archivo2,"El valor %d es multiplo de 10\n",f);
printf("El valor %d es multiplo de 10\n",f);
}
else{
     fprintf(archivo2,"%d\n",f);
 printf("%d\n",f);
}
 }
fclose(archivo);
fclose(archivo2);
 return 0;
}