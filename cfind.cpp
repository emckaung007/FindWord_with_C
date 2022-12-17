//
// Created by kaung007 on 12/16/22.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    char ch;
    char *search = "winhtut";
    char *search1 = "NationalCyberCity";
    int count = 0;
    int pos[10];
    int pointer = 0;
    int num = 0;

    FILE *fp;
    fp = fopen("words.txt", "r");

    do
    {
        ch = fscanf(fp, "%s", word);
        if(strcmp(word, search) == 0)
        {
            pos[count] = pointer;
            count++;
        }
        pointer++;
        if(strcmp(word, search1) == 0)
        {
            pos[num] = pointer;
            num++;
        }
        pointer++;
        //printf("%s",word);
    } while (ch != EOF);

    if(count == 0){
        printf("'%s' not found in %s\n", search, fp);
        printf("'%s' not found in %s\n", search1, fp);
    }
    else
    {
        printf("'%s' is found.\n", search);
        printf("'%s' is found.\n", search1);

        printf("'%s' count : %d\n",search,count);
        printf("'%s' count : %d\n",search1,num);
    }

    fclose(fp);

    return 0;
}