def printSubsequenceAllSumCount(index, list, sum, tempsum):
    if(index==len(list)):
        if(sum==tempsum):
            return 1
        return 0
    
    # subsequence.append(list[index])
    tempsum += list[index]
    l = printSubsequenceAllSumCount(index+ 1, list,sum, tempsum)
   

    # subsequence.remove(list[index])
    tempsum -= list[index]
    r = printSubsequenceAllSumCount(index+ 1, list,sum, tempsum)

    return l + r
    

def main():
    list = [int(x) for x in input().split()]
    print(printSubsequenceAllSumCount(0, list, 1, 0))


if __name__ == "__main__":
    main()