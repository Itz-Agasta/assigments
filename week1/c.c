#include <stdio.h>

// Insert an element at end of array
// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-end-of-an-array/0
void insert(int arr[], int n)
{
    int num;
    scanf("%d", &num);
    arr[n] = num;
}

// 2. Find largest element in array
// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
int findLarge(int arr[], int n)
{
    int large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}

// 3. Find second largest element
// https://www.geeksforgeeks.org/problems/second-largest/1
void findSLarge(int arr[], int n)
{
    int large = arr[0];
    int sLarge = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            sLarge = large;
            large = arr[i];
        }
    }

    printf("%d\n", sLarge);
}

// 4. Move all zeros to end
// https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
void moveZeros(int arr[], int n)
{
    // S1: Find the index of first 0
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    // S2: now after that 0 if the next index is non-Zero swap
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            // swap arr[j] & arr[i]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

// 5. Rotate array by one (D)
// https://www.geeksforgeeks.org/problems/rotate-array-by-one2614/1
void reverse(int arr[], int st, int end)
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

void rotate(int arr[], int n, int d)
{
    d = d % n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

// 6. Check if array is sorted
// https://www.geeksforgeeks.org/problems/check-if-array-is-sorted-and-rotated/1
#include <stdbool.h>
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

// 7. Reverse a string
// https://www.geeksforgeeks.org/problems/reverse-a-string-1587115621/1
#include <string.h>
void revStr(char str[])
{
    int st = 0;
    int end = strlen(str) - 1;
    while (st < end)
    {
        char temp = str[st];
        str[st] = str[end];
        str[end] = temp;
        st++;
        end--;
    }
}

// 8. Check if string is palindrome
// https://www.geeksforgeeks.org/problems/check-if-string-is-palindrome-or-not/1
bool isPal(char str[])
{
    int st = 0;
    int end = strlen(str) - 1;
    while (st < end)
    {
        if (str[st] != str[end])
            return false;
        st++;
        end--;
    }
    return true;
}

// 9. Count frequency of array elements
// https://www.geeksforgeeks.org/problems/frequency-of-array-elements/1
int feq(int arr[], int n, int num)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            count++;
    }
    return count;
}

// 10. Hackerrank: Arrays - DS
// https://www.hackerrank.com/challenges/arrays-ds/problem

int main()
{
    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // {
    //     printf("%d ", arr[i]);
    // }

    // char str[100];
    // scanf("%s", &str);

    return 0;
}