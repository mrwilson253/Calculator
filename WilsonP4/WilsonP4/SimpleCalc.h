/*
* Jordan Wilson
* jwilson160@cnm.edu
* WilsonP4
* SimpleCalc.h
*/

#ifndef _SIMPLECALC_H
#define _SIMPLECALC_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class SimpleCalc
{
private:
	char operation{ '+' };	//which arithmetic operation is chosen
	double operand1{ 0.0 };
	double operand2{ 1.0 };
	double answer{ 0.0 };	//the answer in numerical form
	string results;	//formatted string
	string desc;	//description of the operation (optional)	
	void Calculate();
public:
	SimpleCalc();	//default constructor		
	void SetOperation(char oper, double op1, double op2);
	string GetResults();

};
#endif

