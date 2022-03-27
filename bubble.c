#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


void bubblesort(int ibubble[])
{
    int value;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (ibubble[j] > ibubble[j + 1])
            {
                value = ibubble[j];
                ibubble[j] = ibubble[j + 1];
                ibubble[j + 1] = value;
            }

        }
    }
}



int main()
{
    int inum[6] = { 0 };

    printf("6개의 숫자를 입력하세요.\n");
    scanf("%d,%d,%d,%d,%d,%d", &inum[0], &inum[1], &inum[2], &inum[3], &inum[4], &inum[5]);

    bubblesort(inum);

    printf("\n%d,%d,%d,%d,%d,%d", inum[0], inum[1], inum[2], inum[3], inum[4], inum[5]);

    return 0;
}