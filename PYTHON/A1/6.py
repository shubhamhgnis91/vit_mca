import math

def distance(x1, y1, x2, y2):
    return round(math.sqrt((x1-x2)**2 + (y1-y2)**2), 2)

def farthest_points(points):
    farthest_pair = ()
    farthest_distance = 0
    
    for i in range(len(points)):
        for j in range(i+1, len(points)):
            d = distance(*points[i], *points[j])
            if d > farthest_distance:
                farthest_distance = d
                farthest_pair = (points[i], points[j])
    
    return farthest_pair

numberOfPoints=int(input("Enter number of points: "))
points = []
print("\nEnter points: ")
for i in range(numberOfPoints):
    x = float(input("x"+str(i+1)+": "))
    y = float(input("y"+str(i+1)+": "))
    pointTuple = (x, y)
    points.append(pointTuple)

farthest = farthest_points(points)
print(f"The farthest points are {farthest[0]} and {farthest[1]}, with distance {distance(*farthest[0], *farthest[1])}")
