import math
y="00"
k1=(raw_input())
t=int(k1)
for i in range(t):
            k = (raw_input())
            s=int(k)
            counter=0
            r=int(math.pow(2, s))
            for i in range(r):
                    s1=format(i, '0'+k+'b')
                    if(y in s1):
                            counter=counter
                    else:
                            counter+=1
            res=counter%1000000007
            print(res)
