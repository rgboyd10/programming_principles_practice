/*
Expanding on what you have learned, write a program that lists the instructions for a computer to find the upstairs bathroom, discussed in S2.1. Can you think of any more steps that a person would assume, but that a computer would not?  Add them to your list. This is a good start in "thinking like a computer". Warning: for most people, "go to the bathroom" is a perfectly adequate instruction. For someone with no experiences with houses or bathrooms(imagine a stone-age person, somehow transported to into your dining room) the list of necessary instructions could be very long. Please do not use more than a page. For the benefit of the reader, you may add a short description of the layout of the house you are imagining.
*/

//This program tells the computer to find the upstairs bathroom.

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() //C++ programs start by executing the function main
{
  cout << "How to find the upstairs bathroom: The assumption is that you are already in the house at the base of the stairs. Stairs are wooden planks stuck or nailed together in such a way that allows you to elevate your altitude. Approach the steps. Step onto the first step with your foot. Continue to step up each step until you reach the top where there are no more steps and your feet are level with one another again. Now turn right. Now move forward to the end of the hallway and stop when you reach the door.  A hallway is a pathway from one point to another. A door is wooden and separates two rooms.  A room is a space enclodes by four walls.  Use your hand to reach the door handle. Twist the door handle until you feel it stop twisting. Push the door open.  Congratulations, you have found the upstairs bathroom.\n"; //outputs the instructions
  return 0;
}
