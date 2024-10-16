name = input()
list_name = name.title().split()
name1 = ""
for i in range(0, len(list_name) - 1, 1):
    name1 += list_name[i]
    if i != len(list_name) - 2:
        name1 += " "
    else:
        name1 += ", "
name1 += list_name[len(list_name) - 1].upper()
print(name1)

name2 = list_name[len(list_name) - 1].upper()
name2 += ", "
for i in range(0, len(list_name) - 1, 1):
    name2 += list_name[i]
    name2 += " "
print(name2)
