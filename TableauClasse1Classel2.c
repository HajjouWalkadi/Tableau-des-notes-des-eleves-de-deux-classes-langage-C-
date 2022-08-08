#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int classe1[13];
    int classe2[15];
    int tri[28];
    int i, j, N, moyenne,k=13;
    int c =0;
    int min, max;
do{
    printf ("Pour sortir du programme entrer 0 ");
    printf("Donner le numero du classe : ");
    scanf("%d", &N);
    switch (N) 
    {
    case 1:
        printf("Veuiller entrer les notes des eleves pour la classe 1:\n");
        for (i = 0; i < 13; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &classe1[i]);
        }
        max = classe1[0];
        min = classe1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (max < classe1[i])
                max = classe1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (classe1[i] < min)
                min = classe1[i];
        }
        for (i = 0; i < 13; i++)
                {if (classe1[i]>=10 ) {c++;}
                }
                printf ("Le nombre des eleves>=10 est:%d\n",c);
        printf("La plus grande moyenne est:%d\nla plus petite moyenne est: %d\n ", max, min);
        break;

    case 2:
        printf("Veuiller entrer les notes pour la classe 2:\n");
        for (i = 0; i < 15; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &classe2[i]);
        }
        max = classe2[0];
        min = classe2[0];
        for (i = 1; i < 15; i++)
        {
            if (max < classe2[i])
                max = classe2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (min > classe2[i])
                min = classe2[i];
        }
                for (i = 0; i < 15; i++)
                {if (classe2[i]>=10 ) {c++;}
                }
                printf ("Le nombre des eleves>=10 est:%d\n",c);
        
        printf("La plus grande moyenne des eleves est:%d\n la plus petite moyenne des eleves est: %d\n", max, min);
        break;
    case 3:
        printf("Veuiller entrer les notes des eleves pour les deux classes :\n");
    for (i = 0; i < 13; i++)
    {
        tri[i]=classe1[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[k]=classe2[i];
         k++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("Les notes de deux classes par ordre croissant est:");
            for (i = 0; i < 28; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf("Veuiller choisir 1 ou 2 ou 3");
    }
    }while(N!=0);
    }