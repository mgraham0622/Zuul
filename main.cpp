/*
  This is a text game where you try to escape a ship on a collision course
  
  Created By: Matthew Graham
  
  Last Worked On: 11/16/26
*/

#include <type_traits>

template <typename object>
bool isValid(const char* input,const vector<object*> &valid, object* &output){
  if(is_same_v<object,char>){
    // check if char arrays are the same
  } else {
    // check if object.name == input
  }
}

// function to get two word commands
// take in 2 carrays and vector of command pointers commands
  // use cin << twice, check first tho
    // cin >> first;
    // cin >> ws;
   // command* commandtype = nullptr
    //if (cin.peek() != EOF and first isvalid(first,commands,commandtype))
      // cin >> second
      // if second isvalid()
          // return 
    // else :
      // if first is valid command
          // cout << first << " what?"
      // else:
          // cout << first << is not a valid command
    

// set up all rooms and their dialogue before main loop

// define valid commands

// main loop

  // list exits

  // list items

  // list inspectables

  // get commands

  // define what each command does
