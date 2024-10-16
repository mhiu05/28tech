s = input()
cnt = [0] * 256
max_cnt = 1
min_cnt = 10**9
for x in s:
    cnt[ord(x)] += 1
for i in range(256):
    max_cnt = max(max_cnt, cnt[i])
    if cnt[i] != 0:
        min_cnt = min(min_cnt, cnt[i])
for i in range(255, -1, -1):
    if max_cnt == cnt[i]:
        print(chr(i), cnt[i], sep=" ", end="\n")
        break
for i in range(255, -1, -1):
    if min_cnt == cnt[i]:
        print(chr(i), cnt[i], sep=" ", end="\n")
        break
