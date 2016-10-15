#pragma once
#ifndef WORDQUERY_H
#define WORDQUERY_H
#include<string>
#include "Query_base.h"
using namespace std;
class WordQuery :public Query_base
{
	friend class Query;
	WordQuery(const string& s) :query_word(s){}
	QueryResult eval(const TextQuery& t) const { return t.query(query_word); }
	string rep() const { return query_word; }
	string query_word;
};
#endif