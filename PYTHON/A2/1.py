m = 10
n = 3

a = []
b= ["facilities","academics","infrastructure"]

for i in range(m):
    row =[]
    for j in range(n):
        while True:
            score = input('Score for ' + str(b[j]) + ' for college ' + str(i+1) + ': ')
            try:
                score = float(score)
                if score < 0 or score > 25 and j == 0 or score > 50 and j == 1 or score > 25 and j == 2:
                    print('Invalid score! Enter a score between 0 and 25 for facilities, between 0 and 50 for academics, and between 0 and 25 for infrastructure.')
                else:
                    row.append(score)
                    break
            except ValueError:
                print('Invalid input! Enter a valid score.')
    a.append(row)


score = []
score_copy=score


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
    print('Rank '+ str(i+1) + ' is college ' + str(score_copy.index(score[i])+1) + ' with score: ' + str(score[i]))
