#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[])
{

    if (argc !=2)
    {
        printf("Usage: %s filename\n", argv[0]);
    }

    else
    {

        FILE *fp;
        int c;

        fp = fopen(argv[1],"r");
        if(fp == NULL)
        {
            perror ("Error opening file\n");
            return (-1);
        }

        while(1)
        {
            c = fgetc(fp);
            if (feof(fp))
            {
                break ;
            }
        printf("%c",c);
        }

        fclose (fp);
        return 0;
    }
}
