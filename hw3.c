#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


char orginialPassword[32];
const char lower[] = "abcdefghijklmnopqrstuvwxyz";
const char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char numbers[]="1234567890";
char *lowerCase;
char *upperCase;
char *digits;


int main()
{
    int g=0;
    FILE *data;

    data = fopen("password.txt", "r");

    if (data == NULL) {
        perror("\nError in opening file");
        printf("\n");
        return (-1);
    }; // file  not opened


    while ((g=(fgetc(data)))!=EOF)
    {
        fscanf(data,"%s", orginialPassword);

/*
        if(strlen (orginialPassword)<8)//check the lengh
        {
            printf("less  than 8");
        }
*/

        lowerCase=strpbrk(orginialPassword,lower);
        upperCase=strpbrk(orginialPassword,upper);
        digits=strpbrk(orginialPassword, numbers);



        if(! lowerCase)
        {
            int max =122, min = 97;
            //int max1=11, min1=0;
            time_t t; //This is a time type

            //Initialize your RNG (RAndom Number Generator)
            //We typically do this with the current time
            //time() returns the current time
            srand((unsigned) time(&t));


            //printf(“d%\n”, (rand() % abs(max - min + 1)) + min);


            char p=(char)(rand() % abs(max - min + 1)) + min ;
            const char *p2=&p;


            int x;
            x=strlen(orginialPassword);
            x= x/2;
            char strc[50];
            strncpy(strc,orginialPassword,x);
            strc[x] = '\0';
            strcat(strc,p2);
            strc[x+1]='\0';
            strcat(strc,orginialPassword+x);
            strcpy(orginialPassword,strc);
            printf("Password proved did not have a lowercase, the new password is: %s\n",orginialPassword);

        }
         if (!upperCase)
        {
           // printf("All char are lower case, no upper case found %s\n\n",orginialPassword);
            //char *strA = "A";


            int max =90, min = 65;
            //int max1=11, min1=0;
            time_t t; //This is a time type

                //Initialize your RNG (RAndom Number Generator)
                //We typically do this with the current time
                //time() returns the current time
            srand((unsigned) time(&t));


            //printf(“d%\n”, (rand() % abs(max - min + 1)) + min);


            char p=(char)(rand() % abs(max - min + 1)) + min;

            const char *p2=&p;

            int x;
            x=strlen(orginialPassword);
            x= x/2;
            char strc[50];
            strncpy(strc,orginialPassword,x);
            strc[x] = '\0';
            strcat(strc,p2);
            strc[x+1]='\0';
            strcat(strc,orginialPassword+x);
            strcpy(orginialPassword,strc);
            printf("Password proved did not have a uppercase,\nThe new password is: %s\n",orginialPassword);

        }
        if(!digits)
        {
            //printf("all char are upper case, no lower case found %s \n\n",orginialPassword);

            int max =57, min = 48;
            //int max1=11, min1=0;
            time_t t; //This is a time type

            //Initialize your RNG (RAndom Number Generator)
            //We typically do this with the current time
            //time() returns the current time
            srand((unsigned) time(&t));


            //printf(“d%\n”, (rand() % abs(max - min + 1)) + min);


            char p=(char)(rand() % abs(max - min + 1)) + min ;
            const char *p2=&p;


            // int w=(rand() % abs(max1 - min1 + 1)) + min1 ;

            //printf("----------------%d\n",w);


            // int randNum=(rand() % abs(max - min + 1)) + min;

            //randNum = 26 * (rand() / (RAND_MAX +1.0));



            int x;
            x=strlen(orginialPassword);
            x= x/2;
            char strc[50];
            strncpy(strc,orginialPassword,x);
            strc[x] = '\0';
            strcat(strc,p2-0);
            strc[x+1]='\0';
            strcat(strc,orginialPassword+x);
            strcpy(orginialPassword,strc);
            printf("Password proved did not have a digit, the new password is:%s\n",orginialPassword);



        }
         if (!orginialPassword[strspn(orginialPassword, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_")] != 0)
        {
            //printf("all char are upper case, no lower case found %s \n\n",orginialPassword);

            int max =47, min =33;
            //int max1=11, min1=0;
            time_t t; //This is a time type

            //Initialize your RNG (RAndom Number Generator)
            //We typically do this with the current time
            //time() returns the current time
            srand((unsigned) time(&t));


            //printf(“d%\n”, (rand() % abs(max - min + 1)) + min);


            char p=(char)(rand() % abs(max - min + 1)) + min ;
            char *p2=&p;

            // int w=(rand() % abs(max1 - min1 + 1)) + min1 ;

            //printf("----------------%d\n",w);


            // int randNum=(rand() % abs(max - min + 1)) + min;

            //randNum = 26 * (rand() / (RAND_MAX +1.0));



            int x;
            x=strlen(orginialPassword);
            x= x/2;
            char strc[50];
            strncpy(strc,orginialPassword,x);
            strc[x] = '\0';
            strcat(strc,p2-0);
            strc[x+1]='\0';
            strcat(strc,orginialPassword+x);
            strcpy(orginialPassword,strc);
            printf("Password proved did not have a special character, the new password is:%s\n",orginialPassword);

        }
        if(strlen(orginialPassword) < 8)//check the lengh
        {
            int times=0;
            while(strlen(orginialPassword)<8)
            {
                times++;

                int max =122, min =33;
                time_t t; //This is a time type

                srand((unsigned) time(&t));


                char p=(char)(rand() % abs(max - min + 1)) + min ;
                const char *p2=&p;




                int x;
                x=strlen(orginialPassword);
                x= x/2;
                char strc[50];
                strncpy(strc,orginialPassword,x);
                strc[x] = '\0';
                strcat(strc,p2);
                strc[x+1]='\0';
                strcat(strc,orginialPassword+x);
                strcpy(orginialPassword,strc);

            }
            printf("Password proved did not have a leght of 8 chars, the new password is:%s\n",orginialPassword);

        }

        FILE *f = fopen("newpassword1.txt", "a");
        if (f == NULL)
        {
            perror("\nError in opening file");
            exit(-1);
        }

        fprintf(f, "%s\n", orginialPassword);


    }





    return 0;
}
