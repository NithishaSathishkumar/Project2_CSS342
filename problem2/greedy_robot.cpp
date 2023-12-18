#include "greedy_robot.h"
using namespace std;

//constructor
GreedyRobot::GreedyRobot() {
  robot_ = Coordinates();
  treasure_ = Coordinates();
  total_path_ = 0;
}

//Value are passed in and assigned and the check if the robot as reached the tresure if not recursion function is called and prints the number of paths 
void GreedyRobot::FindShortestPaths(int max_distance, int x_robot, int y_robot, int x_treasure, int y_treasure) {
  robot_.set_x(x_robot);
  robot_.set_y(y_robot);
  treasure_.set_x(x_treasure);
  treasure_.set_y(y_treasure);  

  string unique_path = "";
  int up = 0, down = 0, left = 0, right = 0;
  total_path_ = 0;
  
  if (abs(x_robot - x_treasure) + abs(y_robot - y_treasure) == 0) {
    total_path_ = 0;
  }
  else {
    ChangeRobotDirection(robot_.x(), robot_.y(), max_distance, unique_path, up, down, left, right);
  }
  
  cout << "Number of paths: " << total_path_ << endl;
  
}

//The function takes care of the direction the robot has to move and this is the recursion function
void GreedyRobot::ChangeRobotDirection(int x, int y, int max_distance, string unique_path, int up, int down, int left, int right) {
  if ((x == treasure_.x()) && (y == treasure_.y())) {
    cout << unique_path << endl;
    total_path_++;
    return;
  }

  if ((y < treasure_.y()) && (up < max_distance)) {
    ChangeRobotDirection(x, y + 1, max_distance, unique_path + "N", up + 1, 0, 0, 0);
  }

  if ((y > treasure_.y()) && (down < max_distance)) {
    ChangeRobotDirection(x, y - 1, max_distance, unique_path + "S",  0, down + 1, 0, 0);
  }

  if ((x > treasure_.x()) && (left < max_distance)) {
    ChangeRobotDirection(x - 1, y, max_distance, unique_path + "W", 0, 0, left + 1, 0);
  }

  if ((x < treasure_.x()) && (right < max_distance)) {
    ChangeRobotDirection(x + 1, y, max_distance, unique_path + "E", 0, 0, 0, right + 1);
  }
}
