inp = [0]*5
for i in xrange(5):inp[i] = int(raw_input())
all = [0]*(inp[4]+1)
for i in xrange(1,inp[4]+1):
    for j in xrange(4):
        if(inp[j]*i < len(all)): all[inp[j]*i]=1
print sum(all)
