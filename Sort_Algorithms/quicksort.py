import random

def partition(arr, left, right):
    pivot = arr[right-1]
    j = left
    for i in range(left,right):
        if arr[i] < pivot:
            arr[i], arr[j] = arr[j], arr[i]
            j+=1
    arr[j], arr[right-1] = arr[right-1], arr[j]
    return j
def quickSort(arr, left, right):
    if left < right:
        p = partition(arr,left,right)
        quickSort(arr,left,p)
        quickSort(arr,p+1,right)

arr = [random.randint(1,50) for _ in range(20)]
print('Origin arr: ',arr)
# print('Sort: ',sorted(arr))
quickSort(arr,0,len(arr))
print('QuickSort: ',arr)