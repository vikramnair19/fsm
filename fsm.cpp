#include <iostream>
#include <string>
#include "fsm.h"
using namespace std;

FSM::FSM(void)
{
  cout<<"FSM"<<endl;
}

int FSM::add_state(state s)
{
  cout<< "Adding state: "<<s.get_name()<<endl;
}

state::state(string name)
{
  this->name=name;
}

string state::get_name(void)
{
  return this->name;
}
main()
{
  FSM fsm1;
  state s1("S1");

  fsm1.add_state(s1);


}
