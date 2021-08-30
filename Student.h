#pragma once;
#include <string>
#include "Date.h"
#include <math.h>

class Student
{
    private:
    int sum;
    int a=0;
    int m_id;
   std ::string m_name;
   int m_birthday;
   int m_points[3];
   int size = 3;
   static const int m_points[3];
   public:
    Student()=default;
    Student(int id  ,std ::string name ,Date butterfly , int points[3],
    int length)
    {
        m_id = id;
        m_name = name;
        for(int i=0; i<3; i++)
        {
            m_points[i]=points[i];
        }
    };

    double studentavg()
    {
        int sum;
        int a=0;
        for (int i=0; i<3;i++)
        {
           a=a+m_points[i]+ m_points[i++];
           sum=a/3; 
        }   
        return  sum;
    }
    void Print()
    {
         std::cout<<m_id<< " ";
        std::cout<< m_name<<  " ";
        std::cout<<m_id<<" ";
        std::cout<<m_points[3]<<std ::endl;
        std::cout<<studentavg()<< std ::endl;
    }

  
};