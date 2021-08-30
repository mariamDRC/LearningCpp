#pragma once;
#include <string>
#include "Date.h"
#include "Student.h"
#include <cassert>
class Classroom
{
    private:
    int a;
    int m_id;
    static const int size = 5; 
    Student m_student[ size];
    public:
      Classroom(int id,  Student studentt[size],int size2){
       for ( int i=0; i<5; i++)
       {
        m_student[i]=studentt[i]; 
       }
    };
    #define assert(void)(m_id<9999));
       
    #define assert(void)(m_id>100000));


  
     double GetClassAvg()
     {
        for (int i=0;i<5;i++ ){
         a=a+m_student[i].studentavg();
        }
       double sum=a/5;
       return sum;
     }

};
