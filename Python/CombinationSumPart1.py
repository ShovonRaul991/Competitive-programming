def printAllCombinationSum(index, targetSum, tempArray, list):
    if(index == len(list)):
        if(targetSum == 0):
            print(tempArray)
        return
    if(list[index]<= targetSum):
        tempArray.append(list[index])
        printAllCombinationSum(index, targetSum-list[index],tempArray, list)
        tempArray.remove(list[index])
    printAllCombinationSum(index+1, targetSum,tempArray, list)

def main():
    list = [int(x) for x in input().split()]
    temp = []
    printAllCombinationSum(0, 7, temp, list)


if __name__ =="__main__":
    main()