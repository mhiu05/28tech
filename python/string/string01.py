s = input()
cnt_digits = 0
cnt_character = 0
cnt_special = 0
for i in range(len(s)):
    if s[i].isdigit():
        cnt_digits += 1
    elif s[i].isalpha():
        cnt_character += 1
    else:
        cnt_special += 1
print(cnt_character, cnt_digits, cnt_special, sep=" ")
