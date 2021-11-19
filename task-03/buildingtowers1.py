from collections import Counter
a=int(input())
l=list(map(int,input().split()))
temp=Counter(l)
print(max(temp.values()),len(temp.keys()))
