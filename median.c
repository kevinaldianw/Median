/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int arrayInput[7];

void buatArray()
{
    printf("Masukkan 7 angka:");
    for(int i = 0; i <= 6; i++)
    {
        scanf("%d", &arrayInput[i]);
    }
}

void urutkanArray(int arrayTidakUrut[], int jumlahData)
{
  for (int i = 1; i < jumlahData; ++i)
  {
    int j = arrayTidakUrut[i];
    int k;
    for (k = i - 1; (k >= 0) && (j < arrayTidakUrut[k]); k--)
    {
      arrayTidakUrut[k + 1] = arrayTidakUrut[k];
    }
    arrayTidakUrut[k + 1] = j;
  }    

}

int cariMedian(int arrayUrut[], int jumlahData)
{
    int indeksMedian = (jumlahData+1) / 2 - 1;
    return arrayUrut[indeksMedian];
}

int main()
{
    buatArray();
    urutkanArray(arrayInput, 7);
    int median = cariMedian(arrayInput, 7);
    printf("Median = %d", median);

    return 0;
}
