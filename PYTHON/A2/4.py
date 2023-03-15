def pascalTriangle(row):
    for i in range(0, row):
        c = 1
        for j in range(1, row-i):
            print(" ", end=" ")
        for k in range(0, i+1):
            print(" ", c, end=" ")
            c = c*(i-k)//(k+1)
        print()

n = int(input("Enter the number of rows: "))
pascalTriangle(n)
