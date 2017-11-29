 /**
 *Joshua Whiteford
 *13/11/2017
 *Lab 11
 *Complex Number Calculator.
 */
#include <iostream>
#include <math.h>
#include <tgmath.h>

using namespace std;
//double multiply();
//double divide();
struct ComplexCartesian addition(struct ComplexCartesian, struct ComplexCartesian);
struct ComplexCartesian subtraction(struct ComplexCartesian n1, struct ComplexCartesian n2);
struct ComplexCartesian multiplication(struct ComplexCartesian n1, struct ComplexCartesian n2);
struct ComplexCartesian division(struct ComplexCartesian n1, struct ComplexCartesian n2);

/**< A structure to group the ComplexCartesian with two groupd Imag & Real */
struct ComplexCartesian
{
    double Imag;
    double Real;
};

/**< A structure to group the ComplexPolar with two groupd Mag & Angle  */
struct ComplexPolar
{
    double Mag;
    double Angle;
};

/**< Calling the Function */
int main(void)
{

    struct ComplexCartesian Num1;
    struct ComplexCartesian Num2;

    /**< Introducing the User */
    cout << "Comlpex Numbers Calculations!" << endl;

    /**< Telling the User the form to enter the Real And Imaginary parts in */
    cout << "Please enter the Complex number in the following Form:" << endl;
    cout << "Real Part: X" << "\tImaginary part: Y" << endl;

    /**< Getting the user to enter in values for Num1 & Num2 ,Real & Imaginary parts */
    cout << "First Number Real part" << endl;
    cin >> Num1.Real;
    cout << "First Number Imaginary part" << endl;
    cin >> Num1.Imag;

    cout << "Second Number Real part" << endl;
    cin >> Num2.Real;
    cout << "Second Number Imaginary part" << endl;
    cin >> Num2.Imag;

    /**< Calling 4 Fuctions to Do the Calculations  */
    addition(Num1, Num2);
    subtraction(Num1, Num2);
    multiplication(Num1, Num2);
    division(Num1, Num2);



    return 0;
}

/**< Calling the Function */
struct ComplexCartesian addition(struct ComplexCartesian n1, struct ComplexCartesian n2)
{
    struct ComplexCartesian result;

    /**< Calculations to Get the Real And Imaginary parts */
    result.Real = n1.Real + n2.Real;
    result.Imag = n1.Imag + n2.Imag;

    /**< Displaying the Result */
    cout << "Addition:" << result.Real << "j" << result.Imag << endl;
    return result;

}

/**< Calling the Function */
struct ComplexCartesian subtraction(struct ComplexCartesian n1, struct ComplexCartesian n2)
{
    struct ComplexCartesian result;

    /**< Calculations to Get the Real And Imaginary parts */
    result.Real = n1.Real - n2.Real;
    result.Imag = n1.Imag - n2.Imag;

    /**< Displaying the Result */
    cout << "Subtraction:" << result.Real << "j" << result.Imag << endl;
    return result;

}

/**< Calling the Function */
struct ComplexCartesian multiplication(struct ComplexCartesian n1, struct ComplexCartesian n2)
{
    struct ComplexPolar n1p;
    struct ComplexPolar n2p;
    struct ComplexPolar resultP;
    struct ComplexCartesian result;

    /**< Calculations to Get the Real And Imaginary parts */
    n1p.Mag = sqrt(n1.Real * n1.Real + n1.Imag * n1.Imag);
    n1p.Angle = atan2(n1.Imag, n1.Real);

    /**< Calculations to Get the Real And Imaginary parts */
    n2p.Mag = sqrt(n2.Real * n2.Real + n2.Imag * n2.Imag);
    n2p.Angle = atan2(n2.Imag, n2.Real);

    /**< Calculations to Get the Real And Imaginary parts */
    resultP.Mag = n1p.Mag*n2p.Mag;
    resultP.Angle = n1p.Angle+n2p.Angle;

    /**< Displaying the Result */
    cout << "Multiplication:" << resultP.Mag << "j" << resultP.Angle << endl;

    return result;
}

/**< Calling the Function */
struct ComplexCartesian division(struct ComplexCartesian n1, struct ComplexCartesian n2)
{
    struct ComplexPolar n1p;
    struct ComplexPolar n2p;
    struct ComplexPolar resultP;
    struct ComplexCartesian result;

    /**< Calculations to Get the Real And Imaginary parts */
    n1p.Mag = sqrt(n1.Real * n1.Real + n1.Imag * n1.Imag);
    n1p.Angle = atan2(n1.Imag, n1.Real);

    /**< Calculations to Get the Real And Imaginary parts */
    n2p.Mag = sqrt(n2.Real * n2.Real + n2.Imag * n2.Imag);
    n2p.Angle = atan2(n2.Imag, n2.Real);

    /**< Calculations to Get the Real And Imaginary parts */
    resultP.Mag = n1p.Mag/n2p.Mag;
    resultP.Angle = n1p.Angle-n2p.Angle;

    /**< Displaying the Result */
    cout << "Division:" << resultP.Mag << "j" << resultP.Angle << endl;

    return result;
}
