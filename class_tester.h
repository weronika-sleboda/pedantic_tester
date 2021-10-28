//********************************************************
//														  
//	Use the ClassTester if you need to test	all public    
//  functions of a particular class. Well suited for      
//  testing many classes at the same time. Gives          
//  quick feedback if a class has been accepted and       
//  prints a list of failed classes if it has beenn	      
//  rejected							 		          
//														  
//********************************************************

#ifndef CLASS_TESTER_H
#define CLASS_TESTER_H

#include <map>
#include <vector>
#include <string>

namespace PedanticTester
{

	class ClassTester
	{

	public:

		ClassTester();

	public:

		void nameTestClass(std::string testClassName);

		//*** [INFO] The function below takes names of functions
		// to be tested and their expected bool 
		// results as arguments

		void chooseMapOfFunctionNamesAndExpectedResults
		(std::map<std::string, bool> mapOfFunctionNamesAndExpectedResults);

		void test();
		void printTestResult();

	private:

		unsigned int passedTestsCounter;
		std::string testClassName;
		std::map<std::string, bool> mapOfFunctionNamesAndExpectedResults;
		std::vector<std::string> namesOfFailedFunctions;

	};

}

#endif

//*** Author: Weronika Kinga Sleboda 2021-10-28