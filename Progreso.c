#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int i, j;
    int sum[3];
    int array[23];
    for(i=0;i<3;i++){
        for(j=0;j<23;j++){
            array[j]=rand()%11;
        }
    }
    for(i=0;i<3;i++){
        printf("\nLas notas de los estudiantes durante el progreso %d, son:\n",i+1);
        for(j=0;j<23;j++){
            printf("%d ",array[j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<23;j++){
            sum[i]=sum[i]+array[j];
        }
    }
    //printf("\nLa sumatoria de notas de cada estudiante es: %f\n",prom);
    //printf("La nota promedio durante todo el semestre es: %f",prom/23);
    return 0;
}