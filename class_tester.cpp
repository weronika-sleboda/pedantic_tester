#include "class_tester.h"
#include <iostream>
#include <vector>
#include <iterator>

PedanticTester::ClassTester::ClassTester() :

	passedTestsCounter{ 0 }

{}

void PedanticTester::ClassTester::nameTestClass(std::string testClassName)
{

	this->testClassName = testClassName;

}

void PedanticTester::ClassTester::chooseMapOfFunctionNamesAndExpectedResults
(std::map<std::string, bool> mapOfFunctionNamesAndExpectedResults)
{

	this->mapOfFunctionNamesAndExpectedResults = mapOfFunctionNamesAndExpectedResults;

}

void PedanticTester::ClassTester::test()
{

	namesOfFailedFunctions.clear();
	passedTestsCounter = 0;

	for (auto function : mapOfFunctionNamesAndExpectedResults)
	{

		if (function.second)
		{

			passedTestsCounter++;

		}

		else
		{

			namesOfFailedFunctions.push_back(function.first);

		}

	} // End of for loop

}

void PedanticTester::ClassTester::printTestResult()
{

	if (passedTestsCounter == mapOfFunctionNamesAndExpectedResults.size())
	{

		std::cout

			<< "\n"
			<< "------------------------------------------------"
			<< "\n"
			<< "   [V] " + testClassName + " has been ACCEPTED  "
			<< "\n"
			<< "------------------------------------------------"
			<< "\n";

	}

	else
	{

		std::cout

			<< "\n"
			<< "------------------------------------------------"
			<< "\n"
			<< "   [X] " + testClassName + " has been REJECTED  "
			<< "\n"
			<< "------------------------------------------------"
			<< "\n";

		std::cout

			<< "\n"
			<< ">>>>>>>> Functions below has failed: <<<<<<<<<"
			<< "\n\n";

		int number{ 1 };

		for (int index = 0; index < namesOfFailedFunctions.size(); index++)
		{

			std::cout << number++ << ". " << namesOfFailedFunctions.at(index) << "\n";

		}

		std::cout

			<< "\n\n";

	} // End of else-statement

}