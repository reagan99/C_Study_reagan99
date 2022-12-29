a = int(input())
check =0

for i in range (666,2666800,1):
    b = str(i)
    if "666" in b:
        check+=1
        if(check==a):
            print(i)


