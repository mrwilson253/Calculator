/*
* Jordan Wilson
* jwilson160@cnm.edu
* WilsonP4
* SimpleCalc.cpp
*/

#include "SimpleCalc.h"

SimpleCalc::SimpleCalc()
{}

void SimpleCalc::Calculate()
{
	switch(operation)
	{
	case '+':
		answer = operand1 + operand2;
		desc = "Addition";
		break;
	case '-':
		answer = operand1 - operand2;
		desc = "Subtraction";
		break;
	case '*':
		answer = operand1 * operand2;
		desc = "Multiplication";
		break;
	case '/':
		if (operand2 == 0.0)
		{
			desc = "\nIllegal Operation!";
		}
		else
		{
			//do the math,
			answer = operand1 / operand2;
			//set a different description
			desc = "Division";
		}
		break;
	default:
		desc = "That is not a recognized operation.";

	}

}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
	operation = oper;
	operand1 = op1;
	operand2 = op2;
	Calculate();
}

string SimpleCalc::GetResults()
{
	string results;

	if (operation == '/' && operand2 == 0)
		results = desc;
	else
	{
		stringstream ss;
		ss.precision(2);
		ss.setf(ios::fixed);
		ss << answer;
		results = ss.str();
	}
	return results;
}
