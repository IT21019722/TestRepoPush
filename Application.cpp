#include "Application.h"
#include <cstring>
#include <iostream>
using namespace std;

Application::Application()
{
  appID = 0;
  strcpy(appName, "");
  strcpy(appDescription, "");
  appRating = 0.0;
  numOfFeedback = 0;
}

// void Application::setAppDetails(int pID, const char pName [])
// {
//   appID = pID;
//   strcpy(appName, pName);
//   numOfFeedback = 0;
// }

// void Application::setAppRating (float pRating)
// {
//   appRating = pRating;
// }
// void Application::updateAppDetails (int newID, const char newName[])
// {
//   appID = newID;
//   strcpy(appName,  newName);
// }
// void Application::setAppDescription(const char des[])
// {
//   strcpy(appDescription, des);
// }


void Application::addFeedback (Feedback *c)
{
  if (numOfFeedback < SIZE)
  {
    comment[SIZE] = c;
    numOfFeedback ++;
  }
}
void Application::printAppDetails()
{
  cout<<"App ID: "<<appID<<endl;
  cout<<"App name: "<<appName<<endl;
  cout<<"App Description: "<<appDescription<<endl;
  cout<<"App rating"<<appRating<<endl;
  for( int i = 0; i < numOfFeedback; i++)
        comment[i]-> displayFeedback();
}


Application::~Application()
{
  cout<<"The destructor is called " <<appID<<"is deleted"<<endl;;
}













