m1 = int(input("Enter the initial level of water in jug: "))
m2 = int(input("Enter the level of water in jug required for drinking: "))
x = int(input("Enter the height which small pebble will increase: "))
y = int(input("Enter the height which big pebble will increase: "))
n = int(input("Enter the number of small pebbles: "))

heightIncrease=n*x
m1=m1+heightIncrease
c=0

while m2>=m1:
    m1=m1+y
    c=c+1

print("Total number of pebbles required: "+c)
