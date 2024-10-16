name = input()
print(" ".join(name.split()).title())

birthday = input()
if birthday[2] != "/":
    birthday = "0" + birthday
if birthday[5] != "/":
    birthday = birthday[:3] + "0" + birthday[3:]
print(birthday)
