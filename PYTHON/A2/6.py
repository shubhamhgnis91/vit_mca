hours = []
for i in range(5):
    hours.append(float(input("Enter hours worked on day " +str(i+1) + ": ")))

avg_hours = sum(hours) / 5

print("Average number of hours worked per day:" +str(avg_hours))
