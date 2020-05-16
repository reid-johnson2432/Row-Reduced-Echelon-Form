//
//  main.cpp
//  RREF
//
//  Created by Reid Johnson on 3/20/20.
//  Copyright © 2020 Reid Johnson. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    double  p1, p2, p3, op1, op2, op3, op4, op5, op6;
    int x;
    
    cout << "Construct the matrix by seperating elements with a space and rows with a line break (enter)" << endl;
   
    double matrix[3][4] = {{12,2,3, 4}, {7,5,2,4}, {0,2,6,8}};
      
      p1=matrix[0][0];
      op1= matrix[1][0];
      op2= matrix[2][0];
      
        for (x=0; x<=3; x++)
        {
            matrix[0][x]=matrix[0][x]/p1;
            
        }
      for (x=0; x<=3; x++)
           {
               matrix[1][x]+=-matrix[0][x]*op1;
           }
      for (x=0; x<=3; x++)
           {
               matrix[2][x]+=-matrix[0][x]*op2;
           }
      
      p2= matrix[1][1];
      op3= matrix[0][1];
      op4= matrix[2][1];
      
      
      for (x=1; x<=3; x++)
         {
             matrix[1][x]=matrix[1][x]/p2;
         }
      for (x=1; x<=3; x++)
      {
          matrix[0][x]+=-matrix[1][x]*op3;
      }
      for (x=1; x<=3; x++)
      {
          matrix[2][x]+=-matrix[1][x]*op4;
      }
      
      p3= matrix[2][2];
      op5=matrix[0][2];
      op6=matrix[1][2];
      
      
     for (x=2; x<=3; x++)
           {
               matrix[2][x]=matrix[2][x]/p3;
           }
      for (x=2; x<=3; x++)
      {
          matrix[0][x]+=-matrix[2][x]*op5;
      }
      for (x=2; x<=3; x++)
      {
          matrix[1][x]+=-matrix[2][x]*op6;
      }
      
      
      
      cout << matrix[0][0] << '\t' << matrix[0][1] << '\t' << matrix[0][2] << '\t' <<  matrix[0][3] <<  endl;
      cout << matrix[1][0] << '\t' << matrix[1][1] << '\t' << matrix[1][2] << '\t' <<  matrix[1][3] << endl;
      cout << matrix[2][0] << '\t' << matrix[2][1] << '\t' << matrix[2][2] << '\t' <<  matrix[2][3] << endl;
      
      
    
    
}























































