#include "serie.h"


void CrearListadoSeries(eSerie array[])
{
    int i;
    for(i=0;i<5;i++)
    {
        array[i].idSerie=i+1;
        if(i%2==0)
        {
            strcpy(array[i].genero,"Terror");
        }else{
             strcpy(array[i].genero,"Humor");
        }

    }
     strcpy(array[0].nombre,"Los muertos vivos");
     strcpy(array[1].nombre,"Los vickingos");
     strcpy(array[2].nombre,"Los extraterrestres");
     strcpy(array[3].nombre,"Los Hacker");
     strcpy(array[4].nombre,"Los perdidos");

}
