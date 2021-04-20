#pragma once


#include <string>

#include <iostream>
#include <unordered_set>
#include <memory>

namespace ComplierConstruction {

	using std::string;
	using std::unordered_set;
	using std::ifstream;
	using std::shared_ptr;

	class IdentiferAnalyzer
	{
	protected:
		// ³£Á¿
		static const string IDENTIFER_PATTERN;
		unordered_set<string> words;
		shared_ptr<ifstream> source;


	public:
		void analyse(ifstream& inStream);


	};

} // NAMESPACE COMPILER_CONSTRUCTION
