day=int(input())
month=int(input())
year=int(input())
cYear=int(input())

if cYear<year : 
    print("Invalid Input")
    
else : 
    
    nBdays=cYear-year
    
    if day != 29 and month != 2:
        print(nBdays)
        
        
    else:
        nBdays=0
        
        for i in range(year+1,cYear+1,4):
            if (i%4==0 and i%100!=0) or i%400==0:
                nBdays=nBdays + 1
        
        print(nBdays)
            
