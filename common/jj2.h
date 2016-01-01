#include <iostream>
#include <string>
#include <vector>


class JJ2
{
  public:
    JJ1(int n) : m_N(n) {}
    virtual ~JJ1() {}

    template <typename T>
    void add(T&& param)
    {
	m.push_back(std::forward<T>(param);
    }


  private:
    template <typename T>
    std::vector<T> m;

};