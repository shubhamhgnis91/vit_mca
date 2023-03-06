inAmount=int(input())
nYears=int(input())
exAmount=int(input())

interestRate=(((exAmount-inAmount)/(inAmount*nYears))*100)

print("Required rate of interest is: " +str(interestRate))
