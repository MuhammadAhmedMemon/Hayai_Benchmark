#include <algorithm>
#include <hayai.hpp>
 
using namespace std;
 
 BENCHMARK(FindMAX, FindMAX, 100, 1'000)
{
	int a = max(10,2);
}
