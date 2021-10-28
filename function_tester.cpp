#include "function_tester.h"
#include <iostream>

PedanticTester::FunctionTester::FunctionTester() :

	expectedResult{ false },
	testFunctionName{ " Name test function " },
	expectedResultName{ " Name expected result " },
	unwantedResultName{ " Name unwanted result " }

{}

void PedanticTester::FunctionTester::chooseExpectedResult
(bool expectedResult)
{

	this->expectedResult = expectedResult;

}

void PedanticTester::FunctionTester::nameTestFunction
(std::string testFunctionName)
{

	this->testFunctionName = testFunctionName;

}

void PedanticTester::FunctionTester::nameExpectedResult
(std::string expectedResultName)
{

	this->expectedResultName = expectedResultName;

}

void PedanticTester::FunctionTester::nameUnwantedResult
(std::string unwantedResultName)
{

	this->unwantedResultName = unwantedResultName;

}

void PedanticTester::FunctionTester::testAndPrintResult()
{

	if (expectedResult)
	{

		std::cout

			<< "\n"
			<< "================================================================"
			<< "\n"
			<< "   Test function : " << testFunctionName + "\n"
			<< "   [PASSED] Expected result: " << expectedResultName
			<< "\n"
			<< "================================================================"
			<< "\n";

	}

	else
	{

		std::cout

			<< "\n"
			<< "==============================================================="
			<< "\n"
			<< "   Test function : " << testFunctionName << "\n"
			<< "   [FAILED] Unwanted result: " << unwantedResultName
			<< "\n"
			<< "==============================================================="
			<< "\n";

	}
}