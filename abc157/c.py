n, m = map(int, input().split())
s = [0] * m
c = [0] * m
list = [[0] * 2 for i in range(m)]

for i in range(m):
    s[i], c[i] = map(int, input().split())
    list[i][0] = s[i]
    list[i][1] = c[i]
    #print(list[i][0], list[i][1])

list.sort(key = lambda x:x[0])

cnt = 0
viewing = 1
ans = [0] * n
answer = 0
while viewing <= n:
    if viewing > list[cnt][0]:
        viewing += 1
    elif viewing < list[cnt][0]:
        ans[viewing] = 0
        viewing += 1
        cnt += 1
    elif viewing == list[cnt][0]:
        tmp = list[cnt][1]
        changed_val = list[cnt][0]
        initial = changed_val
        ans[cnt] = tmp
        while  list[cnt][0] == initial:
            changed_val = list[cnt][0]
            if changed_val != tmp:
                break
            else:
                cnt += 1
        viewing += 1
    
    else:
        cnt += 1
        

if answer != -1:
    answer = [0] * n
    for i in range(len(ans)):
        answer[i] = str(ans[i])
    answer = ''.join(answer)

print(answer)
