#include <iostream>
#include <map>
#include <array>
#include <vector>
#include <time.h>
#include <algorithm>
#include <sys/time.h>
using namespace std;


double convertTimeMsecs(const timespec &t){
  return (t.tv_sec*1000 + t.tv_nsec/1000000.0);
}

//source: http://www.guyrutenberg.com/2007/09/22/profiling-code-using-clock_gettime/
timespec diff(timespec start, timespec end)
{
        timespec temp;
        if ((end.tv_nsec-start.tv_nsec)<0) {
                temp.tv_sec = end.tv_sec-start.tv_sec-1;
                temp.tv_nsec = 1000000000+end.tv_nsec-start.tv_nsec;
        } else {
                temp.tv_sec = end.tv_sec-start.tv_sec;
                temp.tv_nsec = end.tv_nsec-start.tv_nsec;
        }
        return temp;
}


//compilar: g++ cppParalelo.cpp -D_GLIBCXX_PARALLEL -fopenmp

int main(int argc,char**argv) {
	int n = atoi(argv[1]);

	vector<int> v(n);
	for(int &el:v) el = rand();

	timespec t0,t1;

  clock_gettime(CLOCK_REALTIME, &t0);
  int numPares = count_if(v.begin(),v.end(),[](const auto &el) {return el%2==0;});
  clock_gettime(CLOCK_REALTIME, &t1);

  cout << "Num pares: " << numPares << endl;
  cout << "Tempo (s): " << convertTimeMsecs(diff(t0,t1))/1000 << endl;

  clock_gettime(CLOCK_REALTIME, &t0);
  sort(v.begin(),v.end());
  clock_gettime(CLOCK_REALTIME, &t1);

  cout << "Ultimo: " << v.back() << endl;
  cout << "Tempo ordenar (s): " << convertTimeMsecs(diff(t0,t1))/1000 << endl;


}