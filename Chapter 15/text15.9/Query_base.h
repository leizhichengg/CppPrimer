#pragma once
#ifndef QUERY_BASE_H
#define QUERY_BASE_H
#include<string>
#include "QueryResult.h"
#include "TextQuery.h"
using namespace std;
class Query_base
{
	friend class Query;
protected:
	using line_no = TextQuery::line_no;
	virtual ~Query_base() = default;
private:
	virtual QueryResult eval(const TextQuery&) const = 0;
	virtual string rep() const = 0;
};
#endif