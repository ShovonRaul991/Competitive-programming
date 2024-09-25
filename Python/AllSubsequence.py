def createSubsequence(index, list, subsequence):
    
    if index >= len(list):
        print(subsequence)
        return
    
    subsequence.append(list[index])
    createSubsequence(index+1, list, subsequence) # taking the element in the sequence

    subsequence.remove(list[index])
    createSubsequence(index+1, list, subsequence) # not taking the element in the sequence



def main():
    list = [int(x) for x in input().split()]
    temp = []
    createSubsequence(0,list,temp )

if __name__ == "__main__":
    main()