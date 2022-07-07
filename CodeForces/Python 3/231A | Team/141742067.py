count = 0
for i in range(int(input())):
    soln = input().split(" ").count('1')
    if (soln >= 2):
        count=count+1
print(count)