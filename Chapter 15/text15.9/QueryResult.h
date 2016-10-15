#pragma once
#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include<string>
#include<vector>
#include<memory>
#include<set>
#include "TextQuery.h"
using namespace std;
class QueryResult
{
	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string s,shared_ptr<set<line_no>> p,shared_ptr<vector<string>> f):
		sought(s),lines(p),file(f){}
private:
	string sought;
	shared_ptr<set<line_no>> lines;
	shared_ptr<vector<string>> file;
};
QueryResult TextQuery::query(const string& sought) const 
{
	static shared_ptr<set<line_no >> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if (loc == wm.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}
ostream &print(ostream& os, const QueryResult& qr)
{
	os << qr.sought << " occus " << qr.lines->size() << " times" << endl;
	for (auto num : *qr.lines)
		os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
	return os;
}
#endif