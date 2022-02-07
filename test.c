#include <stdio.h>
int main()
{
    int frequency[100000] = {0};
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        frequency[arr[i]] += 1;
    }
    int ele;
    printf("Enter certain element in the array: ");
    scanf("%d", &ele);
    printf("FREQUENCY: %d", frequency[ele]);
    return 0;
}
