def createSubsequenceWithSum(index, list, subsequence, sum, tempSum):
    if index >= len(list):
        if sum==tempSum:
            print(subsequence)
            return True
        return False 
    
    subsequence.append(list[index])
    tempSum = tempSum + list[index]
    if(createSubsequenceWithSum(index+1, list, subsequence, sum, tempSum) == True):
        return True

    subsequence.remove(list[index])
    tempSum = tempSum - list[index]
    if(createSubsequenceWithSum(index+1, list, subsequence, sum, tempSum) == True):
        return True
    return False
    

def main():
    list = [int(x) for x in input().split()]
    temp = []
    print(createSubsequenceWithSum(0, list, temp, 9, 0))

if __name__ == "__main__":
    main()







# def isAnySubsequenceSum(index, list, subsequence, sum, tempsum):
#     if(index >= len(list)):
#         if(sum == tempsum):
#             print(subsequence)
#             return True
        
#         return False
    
#     subsequence.append(list[index])
#     tempsum = tempsum + list[index]
#     if(isAnySubsequenceSum(index, list, subsequence, sum, tempsum)==True):
#         return True

#     subsequence.remove(list[index])
#     tempsum = tempsum - list[index]
#     if(isAnySubsequenceSum(index, list, subsequence, sum, tempsum)==True):
#         return True

#     return False

# def main():
#     list = [int(x) for x in input().split()]
#     temp = []
#     print(isAnySubsequenceSum(0,list,temp, 2, 0))

# if __name__ == "__main__":
#     main()