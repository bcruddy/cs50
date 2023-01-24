#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rowCount;
    printf("Height: ");
    scanf("%d", &rowCount);

    if (rowCount < 1) {
        printf("height must be a positive integer, '%d' is invalid\n", rowCount);
        exit(1);
    }

    if (rowCount > 8) {
        printf("height must not exceed 8, '%d' is invalid\n", rowCount);
        exit(1);
    }

    rowCount = rowCount + 1; // account for starting at 1 instead of 0

    for (int i = 1; i < rowCount; i++)
    {
        int paddingWidth = rowCount - i;
        int blockCount = rowCount - paddingWidth;

        for (int j = 0; j < paddingWidth; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < blockCount; k++)
        {
            printf("#");
        }

        printf("\n");
    }

    exit(0);
}
