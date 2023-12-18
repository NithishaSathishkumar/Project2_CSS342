#ifndef GREEDY_ROBOT_H
#define GREEDY_ROBOT_H

#include "coordinates.h"
#include <string>
#include <vector>
using namespace std;

class GreedyRobot{
public:
  //default constructor
  GreedyRobot();

  //Action 
  void FindShortestPaths(int x_robot, int y_robot, int x_treasure, int y_treasure, int max_distance);
  void ChangeRobotDirection(int x, int y, int max_distance, string unique_path, int up, int down, int left, int right);
  
private:
  
  //private data memebers
  Coordinates robot_;
  Coordinates treasure_;
  int total_path_;
};

#endif