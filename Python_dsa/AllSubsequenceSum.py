def createSubsequenceWithSum(index, list, subsequence, sum, tempSum):
    if index >= len(list):
        if sum==tempSum:
            print(subsequence)
        return
    
    subsequence.append(list[index])
    tempSum = tempSum + list[index]
    createSubsequenceWithSum(index+1, list, subsequence, sum, tempSum)

    subsequence.remove(list[index])
    tempSum = tempSum - list[index]
    createSubsequenceWithSum(index+1, list, subsequence, sum, tempSum)

def main():
    list = [int(x) for x in input().split()]
    temp = []
    createSubsequenceWithSum(0, list, temp, 5, 0)

if __name__ == "__main__":
    main()