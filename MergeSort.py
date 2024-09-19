def Merge(list, low, mid, high):
    temp = []
    left = low
    right = mid+1
    while(left <= mid and right <= high):
        if(list[left]<=list[right]):
            temp.append(list[left])
            left = left + 1
        else:
            temp.append(list[right])
            right = right + 1
    while(left <= mid):
        temp.append(list[left])
        left = left + 1
    while(right <= high):
        temp.append(list[right])
        right = right + 1
    # print(temp)
    for i in range(low, high+1):
        list[i] = temp[i-low]
    
def MergeSort(list, low, high):
    if(low==high):
        return
    mid = (low+high)//2
    MergeSort(list, low, mid)
    MergeSort(list, mid+1, high)
    Merge(list, low, mid, high)

def main():
    list = [int(x) for x in input().split(" ")]
    MergeSort(list, 0, len(list)-1)
    
    print(list)

if __name__ == "__main__":
    main();