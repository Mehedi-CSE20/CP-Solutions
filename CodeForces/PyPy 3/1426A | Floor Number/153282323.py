# KoDer ;P
 
for i in range(int(input())):
    y = [int(x) for x in input().split(' ')]
    print(1) if (y[0] <= 2) else print(int((y[0]-3)/y[1])+2)