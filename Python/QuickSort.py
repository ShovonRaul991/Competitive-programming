def partition(list, left, right):
    pivot = list[left]
    i = left+1
    j = right
    while(i<j):
        while list[i]<=pivot and i <= right - 1:
            i = i + 1
        while list[j] > pivot and j >= left + 1:
            j = j - 1
        
        if i<j:
            list[i], list[j] = list[j], list[i]
    list[left], list[j] = list[j], list[left]  # don't use pivot here
    return j


def quickSort(list, low, high):
    if(low < high):
        p_index = partition(list, low, high)
        quickSort(list, low, p_index-1)
        quickSort(list, p_index+1, high)
    

def main():
    list = [int(x) for x in input().split()]
    quickSort(list, 0, len(list)-1)
    print(list)


if __name__ == "__main__":
    main()