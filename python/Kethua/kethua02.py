import math


class Person:
    def __init__(self, name, birthday, address):
        self.name = name
        self.birthday = birthday
        self.address = address

    def standardize(self):
        # standardize birthday:
        if self.birthday[2] != "/":
            self.birthday = "0" + self.birthday
        if self.birthday[5] != "/":
            self.birthday = self.birthday[:3] + "0" + self.birthday[3:]
        # standardize name:
        self.name = self.name.title()

    def __str__(self):
        return self.name + " " + self.birthday + " " + self.address


class Student(Person):
    def __init__(self, msv, name, birthday, address, Class, gpa):
        self.msv = "{:04d}".format(msv)
        Person.__init__(self, name, birthday, address)
        self.Class = Class
        self.gpa = "{:.2f}".format(gpa)

    def __str__(self):
        return self.msv + " " + Person.__str__(self) + " " + self.Class + " " + self.gpa


def cmp_name(s):
    a = s.split()
    res = a[-1] + " "
    res += " ".join(a[:-1])
    return res


if __name__ == "__main__":
    n = int(input())
    a = []
    for i in range(n):
        name = input()
        birthday = input()
        address = input()
        Class = input()
        gpa = float(input())
        s = Student(int(i + 1), name, birthday, address, Class, gpa)
        s.standardize()
        a.append(s)
        a.sort(key=lambda x: (cmp_name(x.name)))
    for i in a:
        print(i)
