import random

def merge(arr, left, right):
    mid = left + (right-left)//2
    arr1 = arr[left:mid+1]
    arr2 = arr[mid+1:right+1]
    i=j=0
    k = left
    while j<len(arr1) and i<len(arr2):
        if arr1[j] < arr2[i]:
            arr[k] = arr1[j]
            j+=1
        else:
            arr[k] = arr2[i]
            i+=1
        k+=1
    while j < len(arr1):
        arr[k] = arr1[j]
        j+=1
        k+=1
    while i < len(arr2):
        arr[k] = arr2[i]
        i+=1
        k+=1
def mergeSort(arr,left,right):
    if left < right:
        mid = left + (right-left)//2
        mergeSort(arr,left,mid)
        mergeSort(arr,mid+1,right)
        merge(arr,left,right)

arr = [random.randint(1,50) for _ in range(20)]
print(arr)
mergeSort(arr,0,len(arr))
print(arr)