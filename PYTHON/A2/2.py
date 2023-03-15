try:
    nSgrades=int(input("Enter number of S grades: "))
    attendance=float(input("Enter your attendance: "))
    nParticipate=int(input("Enter number of participation in sports activity in the semester: "))

    if nSgrades < 0 or attendance < 0 or nParticipate < 0:
        raise Exception()

except:
    print("Invalid Input")


if nSgrades >=3 and attendance >=90 and nParticipate >=2:
    print("Excellent")

elif nSgrades >=3 and attendance >=90:
    print("Very good")

elif nSgrades >=3 and nParticipate>=2:
    print("Good")

else:
    print("No appreciation")