def swapBitManipulation(a, b):
    a = a^b
    b = a^b
    a = a^b
    return a, b

def main():
    a, b = 3, 4
    print(swapBitManipulation(a,b))



if __name__ == "__main__":
    main()