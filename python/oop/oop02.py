import math


class Student:
    def __init__(self, name, birthday, math, physics, chemistry):
        self.name = name
        self.birthday = birthday
        self.math = math
        self.physics = physics
        self.chemistry = chemistry

    def print_information(self):
        self.grade = self.math + self.physics + self.chemistry
        print(self.name + " " + self.birthday + " " + str("{:.1f}".format(self.grade)))


if __name__ == "__main__":
    name = input()
    birthday = input()
    math = float(input())
    physics = float(input())
    chemistry = float(input())
    s = Student(name, birthday, math, physics, chemistry)
    s.print_information()
