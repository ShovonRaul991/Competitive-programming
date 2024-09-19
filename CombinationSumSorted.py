def createCombinationSumSortedNotRepeated(index, list, tempArray, targetSum):

    if(targetSum == 0):
        print(tempArray)
        return
    
    for i in range(index, len(list)):
        if(i>index and list[i]==list[i-1]):
            continue
        if(list[i]>targetSum):
            break
        tempArray.append(list[i])
        createCombinationSumSortedNotRepeated(i+1, list, tempArray, targetSum- list[i])
        tempArray.remove(list[i])
    

def main():
    list = [int(x) for x in input().split()]
    temp = []
    createCombinationSumSortedNotRepeated(0, list, temp, 6)


if __name__ == "__main__":
    main()