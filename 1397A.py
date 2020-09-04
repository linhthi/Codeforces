t = int(input())
alphabet = "abcdefghijklmnopqrstuvwxyx"

for _ in range(t):
    cnt = 0
    a = []
    for i in range(26):
        a.append(0)
    res = "YES"
    n = int(input())
    for i in range(n):
        s = input()
        cnt += len(s)
        for x in s:
            a[alphabet.find(x)] += 1
    if cnt % n is not 0:
        res = "NO"
    for j in range(26):
        if a[j] % n is not 0:
            res = "NO"
    print(res)

