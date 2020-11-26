#include "CoursesManager.h"

#define ASSERT_TEST(x) if(!(x)){ \
 cout<<"Failed assertion at line "<<__LINE__<<" in "<<__func__<<endl;\
  return false; }

  using namespace std;
  
int main()
{
int* timeviewed=new int;
CoursesManager DS1;
ASSERT_TEST(DS1.RemoveCourse(2)==FAILURE);
ASSERT_TEST(DS1.AddCourse(-1,-1)==INVALID_INPUT);
ASSERT_TEST(DS1.AddCourse(1,1)==SUCCESS);
ASSERT_TEST(DS1.RemoveCourse(3)==FAILURE);
ASSERT_TEST(DS1.AddCourse(2,2)==SUCCESS);
ASSERT_TEST(DS1.AddCourse(3,3)==SUCCESS);
CoursesManager DS2;
ASSERT_TEST(DS2.RemoveCourse(4)==FAILURE);
ASSERT_TEST(DS2.WatchClass(4,0,1)==FAILURE);
ASSERT_TEST(DS2.TimeViewed(4,0,timeviewed)==FAILURE);
ASSERT_TEST(DS2.AddCourse(2,3)==SUCCESS);
ASSERT_TEST(DS2.WatchClass(2,0,2)==SUCCESS);
ASSERT_TEST(DS2.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
ASSERT_TEST(DS2.WatchClass(2,0,2)==SUCCESS);
ASSERT_TEST(DS2.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
ASSERT_TEST(DS2.AddCourse(3,1)==SUCCESS);
ASSERT_TEST(DS2.AddCourse(3,5)==FAILURE);
ASSERT_TEST(DS2.WatchClass(3,3,1)==INVALID_INPUT);
ASSERT_TEST(DS2.TimeViewed(3,3,timeviewed)==INVALID_INPUT);
ASSERT_TEST(DS2.RemoveCourse(4)==SUCCESS);
ASSERT_TEST(DS2.WatchClass(4,1,5)==INVALID_INPUT);
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==INVALID_INPUT);
ASSERT_TEST(DS2.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
ASSERT_TEST(DS2.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
ASSERT_TEST(DS2.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
ASSERT_TEST(DS2.TimeViewed(3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
delete timeviewed;
}
