
print("Enter total number of nuts and bolts: ")
total=int(input())

print("Enter number of nuts: ")
nuts=int(input())

print("Enter percentage of defective nuts: ")
x=int(input())

print("Enter percentage of defective bolts: ")
y=int(input())

bolts=total-nuts

ndNuts=total-((x/100)*nuts)
ndBolts=total-((y/100)*bolts)

ndPerc=((ndNuts+ndBolts)/total)*100 - 100

print("Percentage of non defective items in the bag: {:.2f}".format(ndPerc))