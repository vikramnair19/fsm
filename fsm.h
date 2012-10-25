#ifndef __FSM_H__
#define __FSM_H__

using namespace std;

class state{
 public:
  state(std::string name);
  string get_name(void);

 private:
  string name;
};


class FSM{
 public:
  FSM(void);
  int add_state(state s);
 /*  int add_transition(transition t); */

 /* private: */
 /*  state current_state; */
 /*  state states[]; */
 /*  transition transitions[] */
};





#endif
