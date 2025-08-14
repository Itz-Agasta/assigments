def fibo ():
    n =10
    a, b = 0,1
    
    for i in range (n):
        print(a)
        next = a+b
        a =b
        b = next


def insertArr():
    arr = list(map(int,input("enter the nums").split()))
    pos = int(input("where y want to insert"))
    val = input ("what y want to insert")

    arr.insert(pos - 1, val)

    print(arr)

def deleatIndex():
    arr = list(map(int, input("enter the array ").split()))
    pos = int (input("where y want to del"))

    arr.remove(pos);
    print(arr)

def removeduplicate():
    arr = list(map(int, input("enter").split()))
    newArr = list(set(arr))

    print(newArr)

removeduplicate()