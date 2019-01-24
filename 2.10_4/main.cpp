#include <iostream>
#include "constants.h"

using namespace std;

float getInput();
float calDistance(float oldDistance, int second);
void showOutput(float oldDistance, int second);

int main()
{
  float a = getInput();
  float newDistance;

  // 0 seconds
  showOutput(a, 0);
  // 1 seconds
  showOutput(a, 1);
  // 2 seconds
  showOutput(a, 2);
  // 3 seconds
  showOutput(a, 3);
  // 4 seconds
  showOutput(a, 4);
  // 5 seconds
  showOutput(a, 5);
}

void showOutput(float oldDistance, int second)
{
  float newDistance = calDistance(oldDistance, second);
  if (newDistance > 0) {
    cout << "At " << second << " seconds, the ball is at height: " << newDistance << " meters\n";
  } else
    cout << "At " << second << " seconds, the ball is on the ground\n";
}
  
float getInput()
{
  cout << "Enter the height of the tower in meters: ";
  float a;
  cin >> a;
  return a;
}

float calDistance(float oldDistance, int second)
{
  float disFallen = constants::acceleration * second * second/2;
  return oldDistance - disFallen;
}
