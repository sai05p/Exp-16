# EXPERIMENT 16
# AIM:
To study and implement Exception Handling.

# SOFTWARE USED
Visual Studio Code

# THEORY:
An exception is an unexpected problem that arises during the execution of a program our program terminates suddenly with some errors/issues. Exception occurs during the running of the program (runtime).

1. TRY IN C++:
The try keyword represents a block of code that may throw an exception placed inside the try block. It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.

2. CATCH IN C++:
The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.

3. THROW IN C++:
An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.

1. DIVISION WITH EXCEPTION HANDLING:
```
#include <iostream>
using namespace std;

int main()
{
    float n1,n2, ans;
    cout<<"enter the numbers 1 and 2: ";
    cin>>n1>>n2;
    try
    {
        if(n2==0)
        {
            throw n2;
        }
        else
        {
            ans = n1/n2;
            cout<<"answer = "<<ans<<endl;
        }
    }
    catch( float num)
    {
        cout<<"ERROR: division by "<<num<<endl;
    }
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/162c01f1-4d3b-419b-a85b-2636cc960f08)


2. EXCEPTION HANDLING FOR AGE VALIDATION:
```
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age: ";
    cin>>age;
    try
    {
        if (age<18)
        {
            throw age;
        }
        else
        {
            cout<<"age: "<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a)
    {
        cout<<"\nERROR: Underage ("<<age<<")"<<endl;
    }
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/c473e97d-f3c7-4a2b-a0a6-35d45cd02b33)

# CONCLUSION:
In both programs, exception handling is used to ensure safe execution when certain invalid conditions arise.

Division by Zero: The first code ensures that dividing by zero is avoided by throwing an exception when the denominator is zero. This prevents a runtime error and instead provides a clear error message to the user.

Age Validation: The second code uses exception handling to manage age validation, throwing an exception if the user inputs an age under 18. This enforces a rule and provides feedback without crashing the program.

Error Management: Exception handling allows a program to deal with unexpected events (such as dividing by zero or invalid input) without crashing, improving program stability.

Separation of Concerns: The try block contains code that may throw an error, while the catch block handles the error. This separation keeps error-handling logic distinct from normal code execution.

Throwing Exceptions: The throw keyword is used to raise an exception when an error condition is detected. It can be used with different data types (e.g., integers, floats, strings).
