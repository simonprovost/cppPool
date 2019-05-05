
#include "ex04.hpp"
#include <iostream>

int	main()
{
  {
    std::cout << equal<std::string>("bonjour", "hello") << std::endl;
    std::cout << equal<std::string>("navet_m", "navet_m") << std::endl;

    std::cout << equal(5, 6) << std::endl;
    std::cout << equal(12, 12) << std::endl;

    std::cout << equal<double>(5.4d, 6.2d) << std::endl;
    std::cout << equal<double>(12.45d, 12.45d) << std::endl;

    std::cout << equal<float>(3.14f, 3.15f) << std::endl;
    std::cout << equal<float>(0.001f, 0.001f) << std::endl;
  }

  std::cout << std::endl;

  {
    Tester<std::string>	t1;
    std::cout << t1.equal("bonjour", "hello") << std::endl;
    std::cout << t1.equal("navet_m", "navet_m") << std::endl;

    Tester<int>		t2;
    std::cout << t2.equal(5, 6) << std::endl;
    std::cout << t2.equal(12, 12) << std::endl;

    Tester<double>	t3;
    std::cout << t3.equal(5.4d, 6.2d) << std::endl;
    std::cout << t3.equal(12.45d, 12.45d) << std::endl;

    Tester<float>	t4;
    std::cout << t4.equal(3.14f, 3.15f) << std::endl;
    std::cout << t4.equal(0.001f, 0.001f) << std::endl;
  }
}
