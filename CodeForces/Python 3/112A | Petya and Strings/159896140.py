p = input().lower()
q = input().lower()
x = [p, q]
x.sort()
if (p == q): print(0)
elif (q == x[0]): print(1)
else : print(-1)