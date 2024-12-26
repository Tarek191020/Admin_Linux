#include<stdio.h>

int binary_search(int arr[], int size, int element)
{
        int left = 0, right = size - 1;
        int index = -1;

        while(left <= right)
        {

                int mid = left + (right - left) / 2;

                //check if the element is at mid
                if(element == arr[mid])
                {
                        index = mid;
                        break;
                }
                //if element is smaller, ignore right half
                else if(element < arr[mid])
                {
                        right = mid - 1;
                }
                //if element is greater, ignore left half
                else
                {
                        left = mid + 1;
                }
        }
        return index;
}
int main()
{
        int arr[] = {1, 4, 8, 13, 19, 24, 32, 39} ;
        int size = sizeof(arr)/sizeof(arr[0]);
        int element;
	
	printf("Enter the element to search: ");
        scanf("%d", &element);  // Take input from the user
        int result = binary_search(arr, size, element);
	
        if (result == -1)
        {
                printf("element not found in array\n");
        }
        else
        {
                printf("element is found at index: %d\n", result);
        }

        return 0;
}
