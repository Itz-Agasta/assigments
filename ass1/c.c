#include <stdio.h>

void printStar()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void fibo()
{
    int n = 10;
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }
}

void insertElement(int n, int arr[])
{
    int num;
    scanf("%d", &num);
    int location;
    scanf("%d", &location);

    for (int i = n; i >= location; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[location - 1] = num;
    n++;
}

int deleatindex(int n, int arr[])
{

    int pos;
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int removeDuplicate(int n, int arr[])
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

void findMax(int n, int arr[])
{
    int max = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d", max);
}

void rotate(int arr[], int st, int end)
{
    while (st < end)
    {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
}

int unionArray(int n1, int arr1[], int n2, int arr2[])
{
    int result[100];
    int size = 0;

    for (int i = 0; i < n1; i++)
    {
        result[size++] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        int isPresent = 0;
        for (int j = 0; j < size; j++)
        {
            if (result[j] == arr2[i])
            {
                isPresent = 1;
                break;
            }
        }
        if (!isPresent)
        {
            result[size++] = arr2[i];
        }
    }

    return size;
}
void rotateArray(int n, int arr[])
{
    int d;
    scanf("%d", &d);
    d = d % n;
    rotate(arr, 0, d - 1);
    rotate(arr, d, n - 1);
    rotate(arr, 0, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    rotateArray(n, arr);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}