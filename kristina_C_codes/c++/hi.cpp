#include <iostream>

class Rational
{
    int numerator, denominator;

public:
    Rational()
    {
        this->numerator = 0;
        this->denominator = 0;
    }

    Rational(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;

        this->reduceFraction();
    }
    void reduceFraction()
    {
        if (this->denominator == 0)
        {
            exit(1);
        }
        int num = this->numerator;
        int den = this->denominator;

        for (int i = den * num; i > 1; i--)
        {
            if ((den % i == 0) && (num % i == 0))
            {
                den /= i;
                num /= i;
            }
        }

        this->numerator = num;
        this->denominator = den;
    }

    Rational operator+(Rational r2)
    {

        Rational temp;
        temp.numerator = this->numerator * r2.denominator + r2.numerator * this->denominator;
        temp.denominator = this->denominator * r2.denominator;

        temp.reduceFraction();
        return temp;
    }

    Rational operator-(Rational r2)
    {

        Rational temp;
        temp.numerator = this->numerator * r2.denominator - r2.numerator * this->denominator;
        temp.denominator = this->denominator * r2.denominator;

        temp.reduceFraction();
        return temp;
    }

    Rational operator*(Rational r2)
    {

        Rational temp;
        temp.numerator = this->numerator * r2.numerator;
        temp.denominator = this->denominator * r2.denominator;

        temp.reduceFraction();
        return temp;
    }

    Rational operator/(Rational r2)
    {

        Rational temp;
        temp.numerator = this->numerator * r2.denominator;
        temp.denominator = this->denominator * r2.numerator;

        temp.reduceFraction();
        return temp;
    }

    void display_fraction()
    {
        std::cout << this->numerator << " / " << this->denominator << std::endl;
    }
    void display_float()
    {
        std::cout << (float)this->numerator / this->denominator << std::endl;
    }
};

int main()
{
    Rational r1(1, 2), r2(2, 3);

    Rational r3 = r1 / r2;
    r3.display_fraction();
    r3.display_float();
}
