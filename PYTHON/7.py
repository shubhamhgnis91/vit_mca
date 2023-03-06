import math

wPounds = float(input("Enter weight in pounds: "))
hInches = float(input("Enter height in inches: "))

wKilos =  wPounds* 0.4536
hMetres = (hInches * 2.54) / 100

bmi = round(wPounds / math.pow(hMetres, 2), 2)

print("BMI: " + str(bmi))
