import math


class Fraction:
    def __init__(self, numerator, denominator):
        self.numerator = numerator
        self.denominator = denominator

    def reduce_fraction(self):
        reduce_numerator = self.numerator // math.gcd(self.numerator, self.denominator)
        reduce_denominator = self.denominator // math.gcd(
            self.numerator, self.denominator
        )
        print(str(reduce_numerator) + "/" + str(reduce_denominator))


if __name__ == "__main__":
    a, b = map(int, input().split())
    f = Fraction(a, b)
    f.reduce_fraction()
