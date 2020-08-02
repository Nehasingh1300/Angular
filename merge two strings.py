#Merge two strings

#code
t=int(input())
while t:
    s1,s2=input().split()
    res=""
    for i in range(min(len(s1),len(s2))):
        res=res+s1[i]+s2[i]
    res=res+s1[min(len(s1),len(s2)):len(s1)]+s2[min(len(s1),len(s2)):len(s2)]
    print(res)
    t-=1