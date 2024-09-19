parcel1 = [2, 3, 6, 10, 11]
k1 = 9
parcel2 = [4, 5, 7, 1]
k2 = 4

parcel3 = [6,5,4,1,3]
k3 = 7

def x(parcel, k):
    Psize = len(parcel)
    parcel.sort()
    #return parcel
    if(k == Psize):
        return 0
    i = 1
    sum = 0
    while(i):
        if(Psize>=k):
            break
        if(i not in parcel):
            sum+=i
            Psize+=1
        i+=1
        
    return sum
    
print(x(parcel3, k3))



