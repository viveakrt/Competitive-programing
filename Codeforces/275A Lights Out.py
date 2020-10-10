l=[1,1,1,1,1,1,1,1,1]
a,b,c=map(int,input().split())
if a%2==1:
	l[0]=int(not(l[0]))
	l[1]=int(not(l[1]))
	l[3]=int(not(l[3]))
if b%2==1:
	l[0]=int(not(l[0]))
	l[1]=int(not(l[1]))
	l[2]=int(not(l[2]))
	l[4]=int(not(l[4]))
if c%2==1:
	l[2]=int(not(l[2]))
	l[1]=int(not(l[1]))
	l[5]=int(not(l[5]))
a,b,c=map(int,input().split())
if a%2==1:
	l[0]=int(not(l[0]))
	l[6]=int(not(l[6]))
	l[3]=int(not(l[3]))
	l[4]=int(not(l[4]))
if b%2==1:
	l[7]=int(not(l[7]))
	l[1]=int(not(l[1]))
	l[5]=int(not(l[5]))
	l[3]=int(not(l[3]))
	l[4]=int(not(l[4]))
if c%2==1:
	l[2]=int(not(l[2]))
	l[8]=int(not(l[8]))
	l[5]=int(not(l[5]))
	l[4]=int(not(l[4]))
a,b,c=map(int,input().split())
if a%2==1:
	l[6]=int(not(l[6]))
	l[7]=int(not(l[7]))
	l[3]=int(not(l[3]))
if b%2==1:
	l[6]=int(not(l[6]))
	l[7]=int(not(l[7]))
	l[8]=int(not(l[8]))
	l[4]=int(not(l[4]))
if c%2==1:
	l[7]=int(not(l[7]))
	l[8]=int(not(l[8]))
	l[5]=int(not(l[5]))

print(str(l[0])+str(l[1])+str(l[2]))
print(str(l[3])+str(l[4])+str(l[5]))
print(str(l[6])+str(l[7])+str(l[8]))
