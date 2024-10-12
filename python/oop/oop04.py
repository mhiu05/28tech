import math


class Staff:
    def __init__(self, mnv, name, gender, birthday, province, mst, day):
        self.mnv = mnv
        self.name = name
        self.gender = gender
        self.birthday = birthday
        self.province = province
        self.mst = mst
        self.day = day

    def print_information(self):
        print(
            self.mnv
            + " "
            + self.name
            + " "
            + self.gender
            + " "
            + self.birthday
            + " "
            + self.province
            + " "
            + self.mst
            + " "
            + self.day
        )


if __name__ == "__main__":
    name = input()
    gender = input()
    birthday = input()
    province = input()
    mst = input()
    day = input()
    s = Staff("00001", name, gender, birthday, province, mst, day)
    s.print_information()
