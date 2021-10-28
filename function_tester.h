//********************************************************
//														  
//	Use the FunctionTester if you want to test            
//  particular function alone. Well suited as a           
//  base for your own testing programs and				  
//  meticoulus single responibility unit tests.           
//														  
//********************************************************

#ifndef FUNCTION_TESTER_H
#define FUNCTION_TESTER_H

#include <string>

namespace PedanticTester
{

	class FunctionTester
	{

	public:

		FunctionTester();
		virtual ~FunctionTester() = default;

	public:

		void chooseExpectedResult(bool expectedResult);
		void nameTestFunction(std::string testFunctionName);
		void nameExpectedResult(std::string expectedResultName);
		void nameUnwantedResult(std::string unwantedResultName);
		void testAndPrintResult();

	private:

		bool expectedResult;
		std::string testFunctionName;
		std::string expectedResultName;
		std::string unwantedResultName;

	};
}

#endif

//*** Author: Weronika Kinga Sleboda 2021-10-28