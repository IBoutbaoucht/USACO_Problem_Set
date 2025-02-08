from functools import cmp_to_key
n = int(input())
SL = []
for _ in range(n):
    s = input()
    SL.append(s)
def strsorting(a,b):
    if a+b == b+a :
        return 0
    if a+b > b+a :
        return 1
    else :
        return -1

SL.sort(key=cmp_to_key(lambda a,b : strsorting(a,b)))

sol = ""
for s in SL :
    sol+=s

print(sol)