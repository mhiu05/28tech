if __name__ == "__main__":
    s = input()
    cnt = [0] * 256
    for x in s:
        cnt[ord(x)] += 1
    for i in range(256):
        if cnt[i] != 0:
            print(chr(i), cnt[i], sep=" ", end="\n")

    print()

    for x in s:
        if cnt[ord(x)] != 0:
            print(x, cnt[ord(x)], sep=" ", end="\n")
            cnt[ord(x)] = 0
