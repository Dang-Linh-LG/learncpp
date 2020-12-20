#ifndef _DEPARTMENT_H_
#define _DEPARTMENT_H_

#include <string>
using namespace std;
class Department{
    string Dname;
    int Dnumber;
    long Mgrssn;
    string Mgrstartdate;
public :
    Department();
    Department(string Dname, int Dnumber, int Mgrssn, string Mgrstartdate);
};
#endif