#include "actoresFunciones.h"
#include "peliculasFunciones.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int listarActoresPorGenero(ePelicula listadoPel[], eActor listadoAct[], int len,  char generoAlistar[21])
{
    int i;
    int posActorDeGenero;
    printf("Actores que trabajaron en peliculas de %s \n", generoAlistar);
    for(i = 0; i<len; i++)
    {
        if(listadoPel[i].estado == 0 && stricmp(generoAlistar, listadoPel[i].genero)==0)
        {
            posActorDeGenero = buscarActorPorID(listadoAct, len, listadoPel[i].idActor);
            printf("%10s \n",listadoAct[posActorDeGenero].nombreActor);

        }


    }
    return 0;
}

int mostrarPeliculasConActores(ePelicula listadoPeliculas[], eActor listadoActores[], int len)
{
    int i;
    int posActor;
    printf("%10s - %10s - %8s - %10s - %10s - %10s \n", "ID", "codigoPelicula", "titulo", "fechaDeEstreno", "genero", " Actor ");


    for(i = 0; i < len; i++)
    {
        if(listadoPeliculas[i].estado == 0)
        {

            posActor = buscarActorPorID(listadoActores, len, listadoPeliculas[i].idActor);


            printf("%10d %10d %13s %15d %15s %20s \n", listadoPeliculas[i].id, listadoPeliculas[i].codigoPelicula, listadoPeliculas[i].titulo, listadoPeliculas[i].fechaDeEstreno, listadoPeliculas[i].genero, listadoActores[posActor].nombreActor);

        }

    }


    return 0;
}


int listarPeliculasPorNacionalidad(ePelicula listadoPel[], eActor listadoAct[], int len,  char nacionalidadAlistar[21])
{
    int i;
    int j;
 //             int posActorDeNacionalidad;
    printf("Peliculas que trabajaron actores de de %s \n", nacionalidadAlistar);

    for(i = 0; i<len; i++)
    {
        if(listadoAct[i].estado == 0 && stricmp(nacionalidadAlistar, listadoAct[i].nacionalidad)==0)
        {
            for(j = 0; j<len; j++)
            {
                 if(listadoPel[j].idActor == listadoAct[i].id)
                printf("%10s \n",listadoPel[j].titulo);
            }


    }

    }
    return 0;
}

int listarPeliculasPorNacionalidadIngresa(ePelicula listadoPel[], eActor listadoAct[], int len,  char nacionalidadAlistar[21])
{
    int i;
    int j;

    printf("Peliculas que trabajaron actores de de %s \n", nacionalidadAlistar);

    for(i = 0; i<len; i++)
    {
        if(listadoAct[i].estado == 0 && stricmp(nacionalidadAlistar, listadoAct[i].nacionalidad)==0)
        {
            for(j = 0; j<len; j++)
            {
                 if(listadoPel[j].idActor == listadoAct[i].id)
                printf("%10s \n",listadoPel[j].titulo);
            }


    }

    }
    return 0;
}

int peliculasAgrupadasPorGenero(ePelicula listadoPel[], eActor listadoAct[], int len, char generoAlistar[21])
{
    int i;
    for(i = 0; i<len; i++)
        if(listadoAct[i].estado == 0 && stricmp(generoAlistar, listadoPel[i].genero)==0)
    {
        printf("%s  \n", listadoPel[i].titulo);
    }

 printf("\n");
}
