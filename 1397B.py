n = int(input())
a = list(map(int,input().split()))
a = sorted(a)
 
c = int(a[-1] ** (1/(n-1)) )
res1 = sum(abs((c**i -a[i])) for i in range(n))
res2 = sum(abs((c+1)**i -a[i]) for i in range(n))
print(res1 if res1<res2 else res2)