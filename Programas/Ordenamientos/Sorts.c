/*
	Sorts.c

	Implementación de las funciones de Sorting en Sorts.h

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/
#include "Sorts.h"
#include <stdlib.h>
#include <stdio.h>

void bubblesort(int* arr, int tam)
{
	int temp;
	for(int i = 0; i < tam; i++)
	{
		for(int j = i+1; j < tam; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr [j] = temp;
			}
		}
	}
}

void selectionsort (int *a, int n) 
{
    int i, j, m, t;
    for (i = 0; i < n; i++) 
    {
        for (j = i, m = i; j < n; j++) 
        {
            if (a[j] < a[m]) 
            {
                m = j;
            }
        }
        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}

void insertionsort (int *a, int n) 
{
    int i, j, t;
    for (i = 1; i < n; i++) 
    {
        t = a[i];
        for (j = i; j > 0 && t < a[j - 1]; j--) 
        {
            a[j] = a[j - 1];
        }
        a[j] = t;
    }
}

void countingsort(int *array, int n, int min, int max)
{
  int i, j, z;
 
  int rango = max - min + 1;
  int *count = malloc(rango * sizeof(*array));
 
  for(i = 0; i < rango; i++)
  {
  	count[i] = 0;
  }
  for(i = 0; i < n; i++) 
  {
  	count[ array[i] - min ]++;
  }
 
  for(i = min, z = 0; i <= max; i++) 
  {
    for(j = 0; j < count[i - min]; j++) 
    {
      array[z++] = i;
    }
  } 
 
  free(count);
}

void quicksort (int *a, int n) 
{
    int i, j, p, t;
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) 
    {
        while (a[i] < p)
        {
            i++;
        }
        while (p < a[j])
        {
            j--;
        }
        if (i >= j)
        {
            break;
        }
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    quicksort(a, i);
    quicksort(a + i, n - i);
}

void bucketsort(int* a, int n)
{

}

void radixsort(int* a, int n)
{

}