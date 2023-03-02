length=int(input())
breadth=int(input())

c1=0
c2=0

while length>=0 or breadth>=0:
    if length>=0:
        c1=c1+1
        length=length-2
    
    if breadth>=0:
        c2=c2+1
        breadth=breadth-2

print("No. of rows: ",c1)
print("No. of columns: ",c2)
print("No. of plants required: ",c1*c2)