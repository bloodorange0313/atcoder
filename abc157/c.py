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
# まずひとけた目から調べる
# 重なっていたらすべて調べて、不一致があれば答えは-1
# 桁が一致するのをすべて調べたら桁上りする(viewing++)。#このとき調べているものも1つ上げる()
# 見ている桁が調べているものより大きかったら調べているものを1つあげる(cnt++)
while viewing <= n:
    if cnt > len(list) - 1:
        break
    if viewing > list[cnt][0]:
        cnt += 1
    elif viewing < list[cnt][0]:
        ans[viewing - 1] = 0
        viewing += 1
    elif viewing == list[cnt][0]:
        ketabango = list[cnt][0]
        changed_val = list[cnt][1]
        initial = changed_val
        ans[viewing - 1] = initial
        while list[cnt][0] == ketabango:
            changed_val = list[cnt][1]
            if changed_val != initial:
                answer = -1
                break
            else:
                if cnt + 1 < len(list):
                    cnt += 1
                else:
                    break
        viewing += 1
    
    else:
        cnt += 1
        

if answer != -1:
    answer = [0] * n
    for i in range(len(ans)):
        answer[i] = str(ans[i])
    answer = ''.join(answer)
    if answer[0] == '0':
        answer = -1


print(answer)
