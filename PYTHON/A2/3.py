nLab=int(input("Enter the number of labourers engaged in work: "))
nToys=int(input("Enter the number of toys to be made: "))
nDays=int(input("Enter the total number of days allotted for completion: "))
nDaysWorked=int(input("Enter the number of days work had been done: "))
nToysMade=int(input("The number of toys made in above days: "))

effic=nToysMade/(nDaysWorked*nLab)
pendingToys=nToys-nToysMade
remainingDays=nDays-nDaysWorked

addLabourers= ((pendingToys/remainingDays)/effic) - nLab
addLabourers = round(addLabourers)

if addLabourers <= 0:
    print("No additional labourers required")
else:
    print("No. of additional labourer required: "+str(addLabourers))
