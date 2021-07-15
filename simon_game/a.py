for _ in range(int(input())):
  a,b=map(int,input().split())
  ans=[]
  for _ in range(a):
    a=list(map(int,input().split()))
    ans.append(a.count(1))
  if(len(set(ans))==1 and 0 in set(ans)):
    print(-1)
  else:
    print(ans.index(max(ans)))