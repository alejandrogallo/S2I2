#include <iostream>
#include <omp.h>

int a = 1;

int main(int argc, const char** argv) 
{
  int b=1;

#pragma omp parallel default(none) shared(a) firstprivate(b)
  {
    a = b;
  }

  std::cout << a << " " << b << " " << std::endl;
  return 0;
}

