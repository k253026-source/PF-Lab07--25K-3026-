#include <stdio.h>
  int main() {
    int arr[10];
    int i;
    int visited[1000] = {0}; 
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(visited[arr[i]] == 1) {
            arr[i] = -1;
        } else {
            visited[arr[i]] = 1;
        }
    }
    printf("\nUpdated array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

