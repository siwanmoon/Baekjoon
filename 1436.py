n = int(input())
cnt = 0
i = 666

while True:
    if '666' in str(i):
        cnt = cnt + 1
    if cnt == n:
        print(i)
        break
    i = i + 1