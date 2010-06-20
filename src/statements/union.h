#ifndef UNION_STATEMENT_DEFINED
#define UNION_STATEMENT_DEFINED

#include <map>
#include <string>
#include <vector>

#include "statement.h"

using namespace std;

class Union_Statement : public Statement
{
  public:
    Union_Statement(int line_number_) : Statement(line_number_) {}
    virtual void set_attributes(const char **attr);
    virtual void add_statement(Statement* statement, string text);
    virtual string get_name() const { return "union"; }
    virtual string get_result_name() const { return output; }
    virtual void forecast();
    virtual void execute(map< string, Set >& maps);
    virtual ~Union_Statement() {}
    
  private:
    string output;
    vector< Statement* > substatements;
};

#endif
