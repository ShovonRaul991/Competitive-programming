def findSetUnset(num, index):
    if (num & (1<<index) > 0):
        return True
    return False

def setTheBit(num, index):
    return num | (1 << index)

def unsetTheBit(num, index):
    return num & ~(1 << index)

def reverse(strs):
    return strs[::-1]

def toggleBit(num, index):
    return num ^ (1<< index)

# remove the last set bit
def removeLastSetBit(num):
    return num ^ (num-1)

def CheckIfPowerofTwo(num):
    if((num & (num-1))==0):
        return True
    else:
        return False


def DecimalToBinary(num):
    strs = ""
    while num:
        # if (num & 1) = 1
        if (num & 1):
            strs += "1"
        # if (num & 1) = 0
        else:
            strs += "0"
        # right shift by 1
        num >>= 1
    return reverse(strs)

def countSetBits(num):
    count = 0
    while num:
        if num & 1:
            count += 1
        num >>= 1
    return count

# how many flips required to convert the number 
# just xor the two numbers and count the no of set bits in the result


def getPowerSet(number_array):
    ans = []
    
    for nums in range(1<<len(number_array)):
        list = []
        for j in range(nums):
            if(nums & (1<<j)):  #check if that bit is set in the subset
                list.append(number_array[j])
        ans.append(list)

    return ans

def main():
    a = 13
    b = 15
    # print(setTheBit(a, 1))
    # print(unsetTheBit(b, 1))
    # print(toggleBit(a, 2))
    # print(DecimalToBinary(13))
    # print(CheckIfPowerofTwo(155))
    # print(countSetBits(13))
    print(getPowerSet([1,2,3]))
    


if __name__ == "__main__":
    main()