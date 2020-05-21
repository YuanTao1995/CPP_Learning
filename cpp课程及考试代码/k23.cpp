#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
int main ()
{     vector<vector<int> > datas;
       ifstream  ifs("test.dat");
       int    m,   n;
       ifs >> m >> n;
       int    i, j;
       for (i = 0; i < m; i ++) {
              vector<int>  V;
              for (j = 0; j < n; j ++ ) { int x; ifs>>x; V.push_back(x); }
              datas.push_back (V);    }
       for (i = 0; i < m; i ++) {
              for (j = 0 ;j < n; j ++) { cout << datas [i][j]<< " ";}
              cout << endl;  }
}

//答案
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 