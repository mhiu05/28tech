import math


class Student:
    def __init__(self, msv, name, name_class, birthday, gpa):
        self.msv = msv
        self.name = name
        self.name_class = name_class
        self.birthday = birthday
        self.gpa = gpa

    def standardize_birthday(self):
        if self.birthday[2] != "/":
            self.birthday = "0" + self.birthday
        if self.birthday[5] != "/":
            self.birthday = self.birthday[:3] + "0" + self.birthday[3:]

    def print_information(self):
        print(
            self.msv
            + " "
            + self.name
            + " "
            + self.name_class
            + " "
            + self.birthday
            + " "
            + "{:.1f}".format(self.gpa)
        )


if __name__ == "__main__":
    name = input()
    name_class = input()
    birthday = input()
    gpa = float(input())
    s = Student("SV001", name, name_class, birthday, gpa)
    s.standardize_birthday()
    s.print_information()
