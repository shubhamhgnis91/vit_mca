m = 4
n = 3

a = []
b= ["facilities","academics","infrastructure"]

for i in range(m):
    row =[]
    for j in range(n):
        row.append(int(input('Score for ' + str(b[j]) + ' for college ' + str(i+1) + ': ')))
    a.append(row)


score = []
temp1=score


for i in range(m):
    row_sum=0
    for j in range(n):
        row_sum=row_sum+a[i][j]
    score.append(row_sum)

for i in range(m):
    for j in range(m-1):
        if(score[j]<score[j+1]):
            temp=score[j]
            score[j]=score[j+1]
            score[j+1]=temp


for i in range(m):
    print('Rank '+ str(i+1) + ' is college ' + str(temp1.index(score[i])+1) + ' with score: ' + str(score[i]))

