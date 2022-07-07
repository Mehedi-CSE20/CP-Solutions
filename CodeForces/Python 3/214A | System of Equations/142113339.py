# problem form : https://codeforces.com/problemset/problem/214/A
 
 
# UnCool Version
count = 0
i = 0
m,n = input().split(' ')
big = m if int(m) > int(n) else n
while(i <= int(big)):
    for j in range(int(big)+1):
        if (((i**2)+ j) == int(n)) and ((i+j**2) == int(m)):
            count = count+1
    i = i+1
print(count)