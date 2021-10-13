#include "Feedback.h"
#include "ApplicationDeveloper"
#define SIZE 100

class Application
{
  private:
    int appID;
    char appName [20];
    char appDescription [100];
    float appRating;
    int numOfFeedback;
    Feedback *comment[SIZE];
    ApplicationDeveloper *dev[SIZE];
  public:
    Application();
    void setAppDetails(int pID, const char pName []);
    void setAppRating (float pRating);
    void updateAppDetails (int newID, const char newName[]);
    void setAppDescription(const char des[]);
    void addFeedback (Feedback *c);
    void addDeveloper (ApplicationDeveloper *);
    void printAppDetails();
    ~Application();
};