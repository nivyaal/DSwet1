#include "CoursesManager.h"
#include "util.h"
int main()
{
int* timeviewed=new int;
int* classes;
int* courses;
ofstream myfile;
myfile.open("myoutput.txt");
//Line Number: 0
CoursesManager DS1;
//Line Number: 1
ASSERT_TEST(DS1.AddCourse(9,9)==SUCCESS);
//Line Number: 2
ASSERT_TEST(DS1.AddCourse(-1,1)==INVALID_INPUT);
//Line Number: 3
ASSERT_TEST(DS1.RemoveCourse(9)==SUCCESS);
//Line Number: 4
ASSERT_TEST(DS1.AddCourse(3,3)==SUCCESS);
//Line Number: 5
ASSERT_TEST(DS1.AddCourse(9,9)==SUCCESS);
//Line Number: 6
ASSERT_TEST(DS1.AddCourse(2,2)==SUCCESS);
//Line Number: 7
ASSERT_TEST(DS1.RemoveCourse(8)==FAILURE);
//Line Number: 8
ASSERT_TEST(DS1.AddCourse(10,10)==SUCCESS);
//Line Number: 9
ASSERT_TEST(DS1.AddCourse(8,8)==SUCCESS);
//Line Number: 10
ASSERT_TEST(DS1.AddCourse(3,3)==FAILURE);
//Line Number: 11
ASSERT_TEST(DS1.RemoveCourse(9)==SUCCESS);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//Line Number: 12
CoursesManager DS2;
//Line Number: 13
ASSERT_TEST(DS2.AddCourse(3,8)==SUCCESS);
//Line Number: 14
ASSERT_TEST(DS2.WatchClass(3,1,10)==SUCCESS);
//Line Number: 15
ASSERT_TEST(DS2.TimeViewed(3,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 16
ASSERT_TEST(DS2.WatchClass(3,1,10)==SUCCESS);
//Line Number: 17
ASSERT_TEST(DS2.TimeViewed(3,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 18
ASSERT_TEST(DS2.AddCourse(9,7)==SUCCESS);
//Line Number: 19
ASSERT_TEST(DS2.AddCourse(8,5)==SUCCESS);
//Line Number: 20
ASSERT_TEST(DS2.WatchClass(8,3,7)==SUCCESS);
//Line Number: 21
ASSERT_TEST(DS2.TimeViewed(8,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 22
ASSERT_TEST(DS2.WatchClass(8,0,7)==SUCCESS);
//Line Number: 23
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 24
ASSERT_TEST(DS2.WatchClass(8,1,7)==SUCCESS);
//Line Number: 25
ASSERT_TEST(DS2.TimeViewed(8,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 26
ASSERT_TEST(DS2.WatchClass(8,1,7)==SUCCESS);
//Line Number: 27
ASSERT_TEST(DS2.TimeViewed(8,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 28
ASSERT_TEST(DS2.RemoveCourse(9)==SUCCESS);
//Line Number: 29
ASSERT_TEST(DS2.WatchClass(9,0,10)==FAILURE);
//Line Number: 30
ASSERT_TEST(DS2.TimeViewed(9,0,timeviewed)==FAILURE);
//Line Number: 31
ASSERT_TEST(DS2.AddCourse(6,6)==SUCCESS);
//Line Number: 32
ASSERT_TEST(DS2.WatchClass(6,0,8)==SUCCESS);
//Line Number: 33
ASSERT_TEST(DS2.TimeViewed(6,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 34
ASSERT_TEST(DS2.WatchClass(6,1,8)==SUCCESS);
//Line Number: 35
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 36
ASSERT_TEST(DS2.AddCourse(10,3)==SUCCESS);
//Line Number: 37
ASSERT_TEST(DS2.WatchClass(10,1,1)==SUCCESS);
//Line Number: 38
ASSERT_TEST(DS2.TimeViewed(10,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 39
ASSERT_TEST(DS2.WatchClass(10,1,1)==SUCCESS);
//Line Number: 40
ASSERT_TEST(DS2.TimeViewed(10,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 41
ASSERT_TEST(DS2.RemoveCourse(7)==FAILURE);
//Line Number: 42
ASSERT_TEST(DS2.WatchClass(7,3,2)==FAILURE);
//Line Number: 43
ASSERT_TEST(DS2.TimeViewed(7,3,timeviewed)==FAILURE);
//Line Number: 44
ASSERT_TEST(DS2.AddCourse(8,2)==FAILURE);
//Line Number: 45
ASSERT_TEST(DS2.WatchClass(8,0,6)==SUCCESS);
//Line Number: 46
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 47
ASSERT_TEST(DS2.RemoveCourse(5)==FAILURE);
//Line Number: 48
ASSERT_TEST(DS2.WatchClass(5,1,9)==FAILURE);
//Line Number: 49
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==FAILURE);
//Line Number: 50
ASSERT_TEST(DS2.AddCourse(1,7)==SUCCESS);
//Line Number: 51
ASSERT_TEST(DS2.WatchClass(1,0,9)==SUCCESS);
//Line Number: 52
ASSERT_TEST(DS2.TimeViewed(1,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 53
ASSERT_TEST(DS2.TimeViewed(1,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 54
ASSERT_TEST(DS2.TimeViewed(1,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 55
ASSERT_TEST(DS2.TimeViewed(1,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 56
ASSERT_TEST(DS2.TimeViewed(1,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 57
ASSERT_TEST(DS2.TimeViewed(1,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 58
ASSERT_TEST(DS2.TimeViewed(1,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 59
ASSERT_TEST(DS2.TimeViewed(1,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 60
ASSERT_TEST(DS2.TimeViewed(3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 61
ASSERT_TEST(DS2.TimeViewed(3,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 62
ASSERT_TEST(DS2.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 63
ASSERT_TEST(DS2.TimeViewed(3,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 64
ASSERT_TEST(DS2.TimeViewed(3,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 65
ASSERT_TEST(DS2.TimeViewed(3,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 66
ASSERT_TEST(DS2.TimeViewed(3,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 67
ASSERT_TEST(DS2.TimeViewed(3,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 68
ASSERT_TEST(DS2.TimeViewed(6,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 69
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 70
ASSERT_TEST(DS2.TimeViewed(6,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 71
ASSERT_TEST(DS2.TimeViewed(6,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 72
ASSERT_TEST(DS2.TimeViewed(6,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 73
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 74
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 75
ASSERT_TEST(DS2.TimeViewed(8,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 76
ASSERT_TEST(DS2.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 77
ASSERT_TEST(DS2.TimeViewed(8,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 78
ASSERT_TEST(DS2.TimeViewed(8,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 79
ASSERT_TEST(DS2.TimeViewed(10,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 80
ASSERT_TEST(DS2.TimeViewed(10,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 81
ASSERT_TEST(DS2.TimeViewed(10,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//Line Number: 82
CoursesManager DS3;
//Line Number: 83
ASSERT_TEST(DS3.AddCourse(7,9)==SUCCESS);
classes=new int[0];
courses=new int[0];
//Line Number: 84
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==FAILURE);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 85
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 86
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 87
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 88
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 89
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 90
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 91
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 92
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 93
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 94
ASSERT_TEST(DS3.AddCourse(4,8)==SUCCESS);
//Line Number: 95
ASSERT_TEST(DS3.WatchClass(4,0,6)==SUCCESS);
//Line Number: 96
ASSERT_TEST(DS3.TimeViewed(4,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
classes=new int[1];
courses=new int[1];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 97
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 98
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 99
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 100
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 101
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 102
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 103
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 104
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 105
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 106
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 107
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 108
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 109
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 110
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 111
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 112
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 113
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 114
ASSERT_TEST(DS3.RemoveCourse(1)==FAILURE);
//Line Number: 115
ASSERT_TEST(DS3.WatchClass(1,7,1)==FAILURE);
//Line Number: 116
ASSERT_TEST(DS3.TimeViewed(1,7,timeviewed)==FAILURE);
//Line Number: 117
ASSERT_TEST(DS3.AddCourse(9,3)==SUCCESS);
//Line Number: 118
ASSERT_TEST(DS3.WatchClass(9,0,8)==SUCCESS);
//Line Number: 119
ASSERT_TEST(DS3.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 120
ASSERT_TEST(DS3.WatchClass(9,1,8)==SUCCESS);
//Line Number: 121
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 122
ASSERT_TEST(DS3.RemoveCourse(1)==FAILURE);
//Line Number: 123
ASSERT_TEST(DS3.WatchClass(1,6,3)==FAILURE);
//Line Number: 124
ASSERT_TEST(DS3.TimeViewed(1,6,timeviewed)==FAILURE);
classes=new int[4];
courses=new int[4];
//Line Number: 125
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==FAILURE);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 126
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 127
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 128
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 129
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 130
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 131
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 132
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 133
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 134
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 135
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 136
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 137
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 138
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 139
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 140
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 141
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 142
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 143
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 144
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 145
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 146
ASSERT_TEST(DS3.AddCourse(2,8)==SUCCESS);
//Line Number: 147
ASSERT_TEST(DS3.WatchClass(2,0,3)==SUCCESS);
//Line Number: 148
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 149
ASSERT_TEST(DS3.WatchClass(2,0,3)==SUCCESS);
//Line Number: 150
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 151
ASSERT_TEST(DS3.AddCourse(7,3)==FAILURE);
//Line Number: 152
ASSERT_TEST(DS3.AddCourse(8,10)==SUCCESS);
//Line Number: 153
ASSERT_TEST(DS3.WatchClass(8,2,4)==SUCCESS);
//Line Number: 154
ASSERT_TEST(DS3.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 155
ASSERT_TEST(DS3.WatchClass(8,6,4)==SUCCESS);
//Line Number: 156
ASSERT_TEST(DS3.TimeViewed(8,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 157
ASSERT_TEST(DS3.WatchClass(8,2,4)==SUCCESS);
//Line Number: 158
ASSERT_TEST(DS3.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 159
ASSERT_TEST(DS3.WatchClass(8,1,4)==SUCCESS);
//Line Number: 160
ASSERT_TEST(DS3.TimeViewed(8,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 161
ASSERT_TEST(DS3.WatchClass(8,4,4)==SUCCESS);
//Line Number: 162
ASSERT_TEST(DS3.TimeViewed(8,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 163
ASSERT_TEST(DS3.WatchClass(8,8,4)==SUCCESS);
//Line Number: 164
ASSERT_TEST(DS3.TimeViewed(8,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 165
ASSERT_TEST(DS3.WatchClass(8,0,4)==SUCCESS);
//Line Number: 166
ASSERT_TEST(DS3.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 167
ASSERT_TEST(DS3.WatchClass(8,3,4)==SUCCESS);
//Line Number: 168
ASSERT_TEST(DS3.TimeViewed(8,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 169
ASSERT_TEST(DS3.WatchClass(8,2,4)==SUCCESS);
//Line Number: 170
ASSERT_TEST(DS3.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 171
ASSERT_TEST(DS3.AddCourse(9,4)==FAILURE);
//Line Number: 172
ASSERT_TEST(DS3.AddCourse(1,5)==SUCCESS);
//Line Number: 173
ASSERT_TEST(DS3.WatchClass(1,3,10)==SUCCESS);
//Line Number: 174
ASSERT_TEST(DS3.TimeViewed(1,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 175
ASSERT_TEST(DS3.WatchClass(1,1,10)==SUCCESS);
//Line Number: 176
ASSERT_TEST(DS3.TimeViewed(1,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 177
ASSERT_TEST(DS3.WatchClass(1,3,10)==SUCCESS);
//Line Number: 178
ASSERT_TEST(DS3.TimeViewed(1,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 179
ASSERT_TEST(DS3.WatchClass(1,1,10)==SUCCESS);
//Line Number: 180
ASSERT_TEST(DS3.TimeViewed(1,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
delete timeviewed;
myfile.flush();
myfile.close();
}