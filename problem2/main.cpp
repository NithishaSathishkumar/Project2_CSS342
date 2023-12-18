#include "greedy_robot.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  //check the command line inputs
  if (argc < 6) {
    cerr << "Not Enough Arguments." << endl;
    return -1;
  }else if(argc > 6){
    cerr << "Too Many Arguments" << endl;
    return -1;
  }
  
  //assign the value from the command line
  int max_distance = atoi(argv[1]);
  int robot_x = atoi(argv[2]);
  int robot_y = atoi(argv[3]);
  int treasure_x = atoi(argv[4]);
  int treasure_y = atoi(argv[5]);

  //check if the max_distance is less than 0
  if(max_distance < 0){
    cerr << "Max distance out of bounds" << endl;
    return -1;
  }

  //check is the entered value is robot and treasure are in same location
  if(robot_x == treasure_x && robot_y == treasure_y){
    cerr << "Already there" << endl;
    return -1;
  }
  
  GreedyRobot myRobot;
  myRobot.FindShortestPaths(max_distance, robot_x, robot_y, treasure_x, treasure_y);

  return 0;
}