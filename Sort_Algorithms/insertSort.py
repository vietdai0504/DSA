import random

def insertSort(arr, length):
    for i in range(1,length):
        j = i - 1
        key = arr[i]
        while j>=0 and key < arr[j]:
            arr[j+1] = arr[j]
            j-=1
        arr[j+1] = key

arr = [random.randint(1,50) for _ in range(20)]
print('Origin arr: ', arr)
insertSort(arr, len(arr))
print('Selection Sort: ',arr)