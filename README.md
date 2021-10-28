# pedantic_tester
Small, simple and adaptable testing framework
===========================================================================================================================

						HOW TO TEST WITH PEDANTIC TESTER

===========================================================================================================================

* HOW TO TEST FUNCTIONS:

[ 1.] Create object of class FunctionTester from namespace PedanticTester

Example code:


	PedanticTester::FunctionTester pedanticTester;


[ 2.] Call function >>> chooseExpectedResult(passExpectedBoolValueHereAsArgument);

Example code number 1:

	chooseExpectedResult(connectToServer());


Example code number 2:

	chooseExpectedResult(getName() == "Name");


Example code number 3:

	chooseExpectedResult(getName().length() > 0);


Example code number 4:

	chooseExpectedResult(getNumber() == 3);


[ 3.] Call function >>> pedanticTester.nameTestFunction("Write the name of the function you want to test here");

[ 4.] Call function >>> pedanticTester.nameExpectedResult("This is just an example: Function is greater than 0");
	
[ 5.] Call function >>> pedanticTester.nameUnwantedResult("This is just an example: Client has been connected to server");

[ 6.] Call function >>> pedanticTester.testAndPrintResult();

[ 7.] The test is DONE!


Here is an example output

================================================================
   Test function : TestClass::function1()
   [PASSED] Expected result: Client has been connected to server
================================================================

===============================================================
   Test function : TestClass::function2()
   [FAILED] Unwanted result: Numnber is not 0
===============================================================

.................................................................................................................................

* HOW TO TEST CLASSES:

[ 1.] Create an object of class ClassTester of namespace PedanticTester

Example code:

	PedanticTester::ClassTester pedanticTester;

[ 2.] Create a conatiner of type std::map<std::string, bool> 

Example code number 1:


	std::map<std::string, bool> classToTest =
	{
	
		{"ExampleFunction1()", testClass.function1() == 1},
		{"ExampleFunction2()", testClass.function2() != "Hello"},
		{"ExampleFunction3()", testClass.function3()}
	
	};


The key is the name of the function you want to test and the value is the bool you expect
the function to return. If it fails the class will be rejected and the function printed
in a list of functions which failed and need to be handled.


[ 3.] Call function >>> pedanticTester.nameTestClass("Write the name of the class you want to test here");  

[ 4.] Call function >>> pedanticTester.chooseMapOfFunctionNamesAndExpectedResults(classToTest);

[ 5.] Call function >>> pedanticTester.test();

[ 6.] Call function >>> pedanticTester.printTestResult();

[ 7.] The test is DONE!

Here is an example output:


------------------------------------------------
   [X] TestClass1 has been REJECTED
------------------------------------------------

>>>>>>>> Functions below has failed: <<<<<<<<<

1. Function3



------------------------------------------------
   [X] TestClass2 has been REJECTED
------------------------------------------------

>>>>>>>> Functions below has failed: <<<<<<<<<

1. Function1
2. Function3



------------------------------------------------
   [V] TestClass3 has been ACCEPTED
------------------------------------------------


*******************************************************************************************************

Author: Weronika Kinga Sleboda 2021-10-28

*******************************************************************************************************
