#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<time.h>
main(int argc, char *argv[])
{
    system("title GRE-Words generator By Gaurav At");
    system("color 0a");
    float m;
    int i,j,count,ln,cn,del;
    char c,Words[4000][50],Meaning[4000][400],ext[20],fname[10];
    FILE *fp1,*fp2,*fp3;
    fp1=fopen(argv[1],"r");
    del=strtod(argv[2],'\0');
    ln=0,cn=0;
    printf("READING WORDS");
    for(i=0,count=0;c!=EOF;i++)
    {
        c=fgetc(fp1);
        if (c=='\t')
        {
            Words[ln][cn]='\0';
            count=1;
            cn=0;
        }
        else if (c=='\n')
        {
            Meaning[ln][cn]='\0';
            count=0;
            ln=ln+1;
            cn=0;
            printf(".");
        }
        else if (count==0)
        {
            Words[ln][cn++]=c;
        }
        else if (count==1)
        {
            Meaning[ln][cn++]=c;
        }
    }

    fclose(fp1);
    srand(time(NULL));
    while(1){
    m=(double)rand() / (double)RAND_MAX;
    j=floor(m*ln);
    fp2=fopen("Couple\\Word.txt","w");
    fp3=fopen("Couple\\Meaning.txt","w");
    fputs(Words[j],fp2);
    fputs(Meaning[j],fp3);
    fclose(fp2);
    fclose(fp3);
    printf("\n%s:\t%s\n",Words[j],Meaning[j]);
    int a,b;
    int c;
    Sleep(1000*del);
	}
}


