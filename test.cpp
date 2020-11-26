#include "CoursesManager.h"

using namespace std;

#define ASSERT_TEST(x) if(!(x)){ \
 cout<<"Failed assertion at line "<<__LINE__<<" in "<<__func__<<endl;\
return false; }

int main()
{
int* timeviewed=new int;
//Line Number: 0
CoursesManager DS1;
//Line Number: 1
ASSERT_TEST(DS1.RemoveCourse(7)==FAILURE);
//Line Number: 2
ASSERT_TEST(DS1.AddCourse(-1,-1)==INVALID_INPUT);
//Line Number: 3
ASSERT_TEST(DS1.AddCourse(16,16)==SUCCESS);
//Line Number: 4
ASSERT_TEST(DS1.RemoveCourse(13)==FAILURE);
//Line Number: 5
ASSERT_TEST(DS1.AddCourse(2,2)==SUCCESS);
//Line Number: 6
ASSERT_TEST(DS1.AddCourse(8,8)==SUCCESS);
//Line Number: 7
ASSERT_TEST(DS1.AddCourse(20,20)==SUCCESS);
//Line Number: 8
ASSERT_TEST(DS1.AddCourse(7,7)==SUCCESS);
//Line Number: 9
ASSERT_TEST(DS1.AddCourse(7,7)==FAILURE);
//Line Number: 10
ASSERT_TEST(DS1.RemoveCourse(17)==FAILURE);
//Line Number: 11
ASSERT_TEST(DS1.AddCourse(9,9)==SUCCESS);
//Line Number: 12
ASSERT_TEST(DS1.AddCourse(10,10)==SUCCESS);
//Line Number: 13
ASSERT_TEST(DS1.AddCourse(11,11)==SUCCESS);
//Line Number: 14
ASSERT_TEST(DS1.RemoveCourse(-12)==INVALID_INPUT);
//Line Number: 15
ASSERT_TEST(DS1.RemoveCourse(16)==SUCCESS);
//Line Number: 16
ASSERT_TEST(DS1.AddCourse(3,3)==SUCCESS);
//Line Number: 17
ASSERT_TEST(DS1.AddCourse(19,19)==SUCCESS);
//Line Number: 18
ASSERT_TEST(DS1.AddCourse(8,8)==FAILURE);
//Line Number: 19
ASSERT_TEST(DS1.RemoveCourse(17)==FAILURE);
//Line Number: 20
ASSERT_TEST(DS1.RemoveCourse(3)==SUCCESS);
//Line Number: 21
ASSERT_TEST(DS1.AddCourse(14,14)==SUCCESS);
//Line Number: 22
ASSERT_TEST(DS1.AddCourse(20,20)==FAILURE);
//Line Number: 23
CoursesManager DS2;
//Line Number: 24
ASSERT_TEST(DS2.AddCourse(19,18)==SUCCESS);
//Line Number: 25
ASSERT_TEST(DS2.WatchClass(19,6,5)==SUCCESS);
//Line Number: 26
ASSERT_TEST(DS2.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 27
ASSERT_TEST(DS2.WatchClass(19,8,5)==SUCCESS);
//Line Number: 28
ASSERT_TEST(DS2.TimeViewed(19,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 29
ASSERT_TEST(DS2.WatchClass(19,6,5)==SUCCESS);
//Line Number: 30
ASSERT_TEST(DS2.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 31
ASSERT_TEST(DS2.WatchClass(19,2,5)==SUCCESS);
//Line Number: 32
ASSERT_TEST(DS2.TimeViewed(19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 33
ASSERT_TEST(DS2.WatchClass(19,2,5)==SUCCESS);
//Line Number: 34
ASSERT_TEST(DS2.TimeViewed(19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 35
ASSERT_TEST(DS2.WatchClass(19,7,5)==SUCCESS);
//Line Number: 36
ASSERT_TEST(DS2.TimeViewed(19,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 37
ASSERT_TEST(DS2.WatchClass(19,6,5)==SUCCESS);
//Line Number: 38
ASSERT_TEST(DS2.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 39
ASSERT_TEST(DS2.WatchClass(19,6,5)==SUCCESS);
//Line Number: 40
ASSERT_TEST(DS2.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 41
ASSERT_TEST(DS2.WatchClass(19,5,5)==SUCCESS);
//Line Number: 42
ASSERT_TEST(DS2.TimeViewed(19,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 43
ASSERT_TEST(DS2.WatchClass(19,5,5)==SUCCESS);
//Line Number: 44
ASSERT_TEST(DS2.TimeViewed(19,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 45
ASSERT_TEST(DS2.WatchClass(19,7,5)==SUCCESS);
//Line Number: 46
ASSERT_TEST(DS2.TimeViewed(19,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 47
ASSERT_TEST(DS2.AddCourse(5,6)==SUCCESS);
//Line Number: 48
ASSERT_TEST(DS2.WatchClass(5,1,6)==SUCCESS);
//Line Number: 49
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 50
ASSERT_TEST(DS2.WatchClass(5,0,6)==SUCCESS);
//Line Number: 51
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 52
ASSERT_TEST(DS2.AddCourse(18,14)==SUCCESS);
//Line Number: 53
ASSERT_TEST(DS2.WatchClass(18,0,10)==SUCCESS);
//Line Number: 54
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 55
ASSERT_TEST(DS2.WatchClass(18,0,10)==SUCCESS);
//Line Number: 56
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 57
ASSERT_TEST(DS2.WatchClass(18,2,10)==SUCCESS);
//Line Number: 58
ASSERT_TEST(DS2.TimeViewed(18,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 59
ASSERT_TEST(DS2.AddCourse(5,15)==FAILURE);
//Line Number: 60
ASSERT_TEST(DS2.WatchClass(5,2,8)==SUCCESS);
//Line Number: 61
ASSERT_TEST(DS2.TimeViewed(5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 62
ASSERT_TEST(DS2.WatchClass(5,3,8)==SUCCESS);
//Line Number: 63
ASSERT_TEST(DS2.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 64
ASSERT_TEST(DS2.WatchClass(5,1,8)==SUCCESS);
//Line Number: 65
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 66
ASSERT_TEST(DS2.WatchClass(5,3,8)==SUCCESS);
//Line Number: 67
ASSERT_TEST(DS2.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 68
ASSERT_TEST(DS2.WatchClass(5,3,8)==SUCCESS);
//Line Number: 69
ASSERT_TEST(DS2.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 70
ASSERT_TEST(DS2.AddCourse(12,4)==SUCCESS);
//Line Number: 71
ASSERT_TEST(DS2.WatchClass(12,0,5)==SUCCESS);
//Line Number: 72
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 73
ASSERT_TEST(DS2.WatchClass(12,0,5)==SUCCESS);
//Line Number: 74
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 75
ASSERT_TEST(DS2.WatchClass(12,2,5)==SUCCESS);
//Line Number: 76
ASSERT_TEST(DS2.TimeViewed(12,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 77
ASSERT_TEST(DS2.RemoveCourse(13)==FAILURE);
//Line Number: 78
ASSERT_TEST(DS2.WatchClass(13,6,9)==FAILURE);
//Line Number: 79
ASSERT_TEST(DS2.TimeViewed(13,6,timeviewed)==FAILURE);
//Line Number: 80
ASSERT_TEST(DS2.RemoveCourse(16)==FAILURE);
//Line Number: 81
ASSERT_TEST(DS2.WatchClass(16,14,15)==FAILURE);
//Line Number: 82
ASSERT_TEST(DS2.TimeViewed(16,14,timeviewed)==FAILURE);
//Line Number: 83
ASSERT_TEST(DS2.AddCourse(2,8)==SUCCESS);
//Line Number: 84
ASSERT_TEST(DS2.WatchClass(2,3,19)==SUCCESS);
//Line Number: 85
ASSERT_TEST(DS2.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 86
ASSERT_TEST(DS2.WatchClass(2,0,19)==SUCCESS);
//Line Number: 87
ASSERT_TEST(DS2.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 88
ASSERT_TEST(DS2.WatchClass(2,4,19)==SUCCESS);
//Line Number: 89
ASSERT_TEST(DS2.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 90
ASSERT_TEST(DS2.WatchClass(2,2,19)==SUCCESS);
//Line Number: 91
ASSERT_TEST(DS2.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 92
ASSERT_TEST(DS2.WatchClass(2,1,19)==SUCCESS);
//Line Number: 93
ASSERT_TEST(DS2.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 94
ASSERT_TEST(DS2.WatchClass(2,2,19)==SUCCESS);
//Line Number: 95
ASSERT_TEST(DS2.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 96
ASSERT_TEST(DS2.AddCourse(6,2)==SUCCESS);
//Line Number: 97
ASSERT_TEST(DS2.AddCourse(10,1)==SUCCESS);
//Line Number: 98
ASSERT_TEST(DS2.AddCourse(2,12)==FAILURE);
//Line Number: 99
ASSERT_TEST(DS2.WatchClass(2,9,18)==INVALID_INPUT);
//Line Number: 100
ASSERT_TEST(DS2.TimeViewed(2,9,timeviewed)==INVALID_INPUT);
//Line Number: 101
ASSERT_TEST(DS2.AddCourse(17,8)==SUCCESS);
//Line Number: 102
ASSERT_TEST(DS2.WatchClass(17,0,8)==SUCCESS);
//Line Number: 103
ASSERT_TEST(DS2.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 104
ASSERT_TEST(DS2.AddCourse(4,7)==SUCCESS);
//Line Number: 105
ASSERT_TEST(DS2.WatchClass(4,3,6)==SUCCESS);
//Line Number: 106
ASSERT_TEST(DS2.TimeViewed(4,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 107
ASSERT_TEST(DS2.WatchClass(4,1,6)==SUCCESS);
//Line Number: 108
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 109
ASSERT_TEST(DS2.WatchClass(4,2,6)==SUCCESS);
//Line Number: 110
ASSERT_TEST(DS2.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 111
ASSERT_TEST(DS2.WatchClass(4,4,6)==SUCCESS);
//Line Number: 112
ASSERT_TEST(DS2.TimeViewed(4,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 113
ASSERT_TEST(DS2.WatchClass(4,3,6)==SUCCESS);
//Line Number: 114
ASSERT_TEST(DS2.TimeViewed(4,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 115
ASSERT_TEST(DS2.RemoveCourse(9)==FAILURE);
//Line Number: 116
ASSERT_TEST(DS2.WatchClass(9,7,20)==FAILURE);
//Line Number: 117
ASSERT_TEST(DS2.TimeViewed(9,7,timeviewed)==FAILURE);
//Line Number: 118
ASSERT_TEST(DS2.AddCourse(17,10)==FAILURE);
//Line Number: 119
ASSERT_TEST(DS2.WatchClass(17,5,1)==SUCCESS);
//Line Number: 120
ASSERT_TEST(DS2.TimeViewed(17,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 121
ASSERT_TEST(DS2.WatchClass(17,6,1)==SUCCESS);
//Line Number: 122
ASSERT_TEST(DS2.TimeViewed(17,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 123
ASSERT_TEST(DS2.WatchClass(17,3,1)==SUCCESS);
//Line Number: 124
ASSERT_TEST(DS2.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 125
ASSERT_TEST(DS2.WatchClass(17,1,1)==SUCCESS);
//Line Number: 126
ASSERT_TEST(DS2.TimeViewed(17,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 127
ASSERT_TEST(DS2.WatchClass(17,3,1)==SUCCESS);
//Line Number: 128
ASSERT_TEST(DS2.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 129
ASSERT_TEST(DS2.WatchClass(17,3,1)==SUCCESS);
//Line Number: 130
ASSERT_TEST(DS2.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 131
ASSERT_TEST(DS2.WatchClass(17,0,1)==SUCCESS);
//Line Number: 132
ASSERT_TEST(DS2.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 133
ASSERT_TEST(DS2.WatchClass(17,4,1)==SUCCESS);
//Line Number: 134
ASSERT_TEST(DS2.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 135
ASSERT_TEST(DS2.AddCourse(11,2)==SUCCESS);
//Line Number: 136
ASSERT_TEST(DS2.RemoveCourse(5)==SUCCESS);
//Line Number: 137
ASSERT_TEST(DS2.WatchClass(5,2,15)==FAILURE);
//Line Number: 138
ASSERT_TEST(DS2.TimeViewed(5,2,timeviewed)==FAILURE);
//Line Number: 139
ASSERT_TEST(DS2.AddCourse(12,4)==FAILURE);
//Line Number: 140
ASSERT_TEST(DS2.WatchClass(12,0,17)==SUCCESS);
//Line Number: 141
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==27);
//Line Number: 142
ASSERT_TEST(DS2.AddCourse(12,13)==FAILURE);
//Line Number: 143
ASSERT_TEST(DS2.WatchClass(12,0,17)==SUCCESS);
//Line Number: 144
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==44);
//Line Number: 145
ASSERT_TEST(DS2.AddCourse(2,15)==FAILURE);
//Line Number: 146
ASSERT_TEST(DS2.WatchClass(2,10,8)==INVALID_INPUT);
//Line Number: 147
ASSERT_TEST(DS2.TimeViewed(2,10,timeviewed)==INVALID_INPUT);
//Line Number: 148
ASSERT_TEST(DS2.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 149
ASSERT_TEST(DS2.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 150
ASSERT_TEST(DS2.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 151
ASSERT_TEST(DS2.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 152
ASSERT_TEST(DS2.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 153
ASSERT_TEST(DS2.TimeViewed(2,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 154
ASSERT_TEST(DS2.TimeViewed(2,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 155
ASSERT_TEST(DS2.TimeViewed(2,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 156
ASSERT_TEST(DS2.TimeViewed(4,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 157
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 158
ASSERT_TEST(DS2.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 159
ASSERT_TEST(DS2.TimeViewed(4,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 160
ASSERT_TEST(DS2.TimeViewed(4,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 161
ASSERT_TEST(DS2.TimeViewed(4,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 162
ASSERT_TEST(DS2.TimeViewed(4,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 163
ASSERT_TEST(DS2.TimeViewed(6,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 164
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 165
ASSERT_TEST(DS2.TimeViewed(10,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 166
ASSERT_TEST(DS2.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 167
ASSERT_TEST(DS2.TimeViewed(11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 168
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==44);
//Line Number: 169
ASSERT_TEST(DS2.TimeViewed(12,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 170
ASSERT_TEST(DS2.TimeViewed(12,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 171
ASSERT_TEST(DS2.TimeViewed(12,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 172
ASSERT_TEST(DS2.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 173
ASSERT_TEST(DS2.TimeViewed(17,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 174
ASSERT_TEST(DS2.TimeViewed(17,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 175
ASSERT_TEST(DS2.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 176
ASSERT_TEST(DS2.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 177
ASSERT_TEST(DS2.TimeViewed(17,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 178
ASSERT_TEST(DS2.TimeViewed(17,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 179
ASSERT_TEST(DS2.TimeViewed(17,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 180
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 181
ASSERT_TEST(DS2.TimeViewed(18,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 182
ASSERT_TEST(DS2.TimeViewed(18,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 183
ASSERT_TEST(DS2.TimeViewed(18,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 184
ASSERT_TEST(DS2.TimeViewed(18,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 185
ASSERT_TEST(DS2.TimeViewed(18,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 186
ASSERT_TEST(DS2.TimeViewed(18,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 187
ASSERT_TEST(DS2.TimeViewed(18,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 188
ASSERT_TEST(DS2.TimeViewed(18,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 189
ASSERT_TEST(DS2.TimeViewed(18,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 190
ASSERT_TEST(DS2.TimeViewed(18,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 191
ASSERT_TEST(DS2.TimeViewed(18,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 192
ASSERT_TEST(DS2.TimeViewed(18,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 193
ASSERT_TEST(DS2.TimeViewed(18,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 194
ASSERT_TEST(DS2.TimeViewed(19,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 195
ASSERT_TEST(DS2.TimeViewed(19,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 196
ASSERT_TEST(DS2.TimeViewed(19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 197
ASSERT_TEST(DS2.TimeViewed(19,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 198
ASSERT_TEST(DS2.TimeViewed(19,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 199
ASSERT_TEST(DS2.TimeViewed(19,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 200
ASSERT_TEST(DS2.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 201
ASSERT_TEST(DS2.TimeViewed(19,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 202
ASSERT_TEST(DS2.TimeViewed(19,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 203
ASSERT_TEST(DS2.TimeViewed(19,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 204
ASSERT_TEST(DS2.TimeViewed(19,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 205
ASSERT_TEST(DS2.TimeViewed(19,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 206
ASSERT_TEST(DS2.TimeViewed(19,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 207
ASSERT_TEST(DS2.TimeViewed(19,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 208
ASSERT_TEST(DS2.TimeViewed(19,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 209
ASSERT_TEST(DS2.TimeViewed(19,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 210
ASSERT_TEST(DS2.TimeViewed(19,16,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 211
ASSERT_TEST(DS2.TimeViewed(19,17,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 212
CoursesManager DS3;
//Line Number: 213
ASSERT_TEST(DS3.AddCourse(14,16)==SUCCESS);
//Line Number: 214
ASSERT_TEST(DS3.WatchClass(14,3,18)==SUCCESS);
//Line Number: 215
ASSERT_TEST(DS3.TimeViewed(14,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 216
ASSERT_TEST(DS3.WatchClass(14,3,18)==SUCCESS);
//Line Number: 217
ASSERT_TEST(DS3.TimeViewed(14,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 218
ASSERT_TEST(DS3.WatchClass(14,0,18)==SUCCESS);
//Line Number: 219
ASSERT_TEST(DS3.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 220
ASSERT_TEST(DS3.WatchClass(14,9,18)==SUCCESS);
//Line Number: 221
ASSERT_TEST(DS3.TimeViewed(14,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 222
ASSERT_TEST(DS3.WatchClass(14,8,18)==SUCCESS);
//Line Number: 223
ASSERT_TEST(DS3.TimeViewed(14,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 224
ASSERT_TEST(DS3.WatchClass(14,4,18)==SUCCESS);
//Line Number: 225
ASSERT_TEST(DS3.TimeViewed(14,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 226
ASSERT_TEST(DS3.WatchClass(14,7,18)==SUCCESS);
//Line Number: 227
ASSERT_TEST(DS3.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 228
ASSERT_TEST(DS3.WatchClass(14,7,18)==SUCCESS);
//Line Number: 229
ASSERT_TEST(DS3.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 230
ASSERT_TEST(DS3.WatchClass(14,5,18)==SUCCESS);
//Line Number: 231
ASSERT_TEST(DS3.TimeViewed(14,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 232
ASSERT_TEST(DS3.WatchClass(14,2,18)==SUCCESS);
//Line Number: 233
ASSERT_TEST(DS3.TimeViewed(14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 234
ASSERT_TEST(DS3.WatchClass(14,2,18)==SUCCESS);
//Line Number: 235
ASSERT_TEST(DS3.TimeViewed(14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 236
ASSERT_TEST(DS3.WatchClass(14,4,18)==SUCCESS);
//Line Number: 237
ASSERT_TEST(DS3.TimeViewed(14,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 238
ASSERT_TEST(DS3.AddCourse(9,9)==SUCCESS);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
//Line Number: 239
ASSERT_TEST(DS3.AddCourse(4,5)==SUCCESS);
//Line Number: 240
ASSERT_TEST(DS3.WatchClass(4,2,17)==SUCCESS);
//Line Number: 241
ASSERT_TEST(DS3.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 242
ASSERT_TEST(DS3.WatchClass(4,2,17)==SUCCESS);
//Line Number: 243
ASSERT_TEST(DS3.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 244
ASSERT_TEST(DS3.WatchClass(4,1,17)==SUCCESS);
//Line Number: 245
ASSERT_TEST(DS3.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
//Line Number: 246
ASSERT_TEST(DS3.AddCourse(6,11)==SUCCESS);
//Line Number: 247
ASSERT_TEST(DS3.WatchClass(6,0,5)==SUCCESS);
//Line Number: 248
ASSERT_TEST(DS3.TimeViewed(6,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
//Line Number: 249
ASSERT_TEST(DS3.AddCourse(5,3)==SUCCESS);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
//Line Number: 250
ASSERT_TEST(DS3.AddCourse(12,9)==SUCCESS);
//Line Number: 251
ASSERT_TEST(DS3.WatchClass(12,2,5)==SUCCESS);
//Line Number: 252
ASSERT_TEST(DS3.TimeViewed(12,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 253
ASSERT_TEST(DS3.WatchClass(12,0,5)==SUCCESS);
//Line Number: 254
ASSERT_TEST(DS3.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 255
ASSERT_TEST(DS3.WatchClass(12,1,5)==SUCCESS);
//Line Number: 256
ASSERT_TEST(DS3.TimeViewed(12,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 257
ASSERT_TEST(DS3.RemoveCourse(12)==SUCCESS);
//Line Number: 258
ASSERT_TEST(DS3.WatchClass(12,0,1)==FAILURE);
//Line Number: 259
ASSERT_TEST(DS3.TimeViewed(12,0,timeviewed)==FAILURE);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
//Line Number: 260
ASSERT_TEST(DS3.AddCourse(19,11)==SUCCESS);
//Line Number: 261
ASSERT_TEST(DS3.WatchClass(19,6,2)==SUCCESS);
//Line Number: 262
ASSERT_TEST(DS3.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 263
ASSERT_TEST(DS3.WatchClass(19,4,2)==SUCCESS);
//Line Number: 264
ASSERT_TEST(DS3.TimeViewed(19,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 265
ASSERT_TEST(DS3.WatchClass(19,6,2)==SUCCESS);
//Line Number: 266
ASSERT_TEST(DS3.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 267
ASSERT_TEST(DS3.WatchClass(19,2,2)==SUCCESS);
//Line Number: 268
ASSERT_TEST(DS3.TimeViewed(19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 269
ASSERT_TEST(DS3.WatchClass(19,5,2)==SUCCESS);
//Line Number: 270
ASSERT_TEST(DS3.TimeViewed(19,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 271
ASSERT_TEST(DS3.WatchClass(19,8,2)==SUCCESS);
//Line Number: 272
ASSERT_TEST(DS3.TimeViewed(19,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 273
ASSERT_TEST(DS3.WatchClass(19,6,2)==SUCCESS);
//Line Number: 274
ASSERT_TEST(DS3.TimeViewed(19,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 275
ASSERT_TEST(DS3.WatchClass(19,2,2)==SUCCESS);
//Line Number: 276
ASSERT_TEST(DS3.TimeViewed(19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 277
ASSERT_TEST(DS3.WatchClass(19,8,2)==SUCCESS);
//Line Number: 278
ASSERT_TEST(DS3.TimeViewed(19,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 279
ASSERT_TEST(DS3.WatchClass(19,4,2)==SUCCESS);
//Line Number: 280
ASSERT_TEST(DS3.TimeViewed(19,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
//Line Number: 281
ASSERT_TEST(DS3.AddCourse(1,5)==SUCCESS);
//Line Number: 282
ASSERT_TEST(DS3.WatchClass(1,1,3)==SUCCESS);
//Line Number: 283
ASSERT_TEST(DS3.TimeViewed(1,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
//Line Number: 284
ASSERT_TEST(DS3.WatchClass(1,1,3)==SUCCESS);
//Line Number: 285
ASSERT_TEST(DS3.TimeViewed(1,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 286
ASSERT_TEST(DS3.AddCourse(14,12)==FAILURE);
//Line Number: 287
ASSERT_TEST(DS3.WatchClass(14,1,9)==SUCCESS);
//Line Number: 288
ASSERT_TEST(DS3.TimeViewed(14,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 289
ASSERT_TEST(DS3.WatchClass(14,7,9)==SUCCESS);
//Line Number: 290
ASSERT_TEST(DS3.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==45);
//Line Number: 291
ASSERT_TEST(DS3.WatchClass(14,2,9)==SUCCESS);
//Line Number: 292
ASSERT_TEST(DS3.TimeViewed(14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==45);
//Line Number: 293
ASSERT_TEST(DS3.WatchClass(14,7,9)==SUCCESS);
//Line Number: 294
ASSERT_TEST(DS3.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==54);
//Line Number: 295
ASSERT_TEST(DS3.WatchClass(14,3,9)==SUCCESS);
//Line Number: 296
ASSERT_TEST(DS3.TimeViewed(14,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==45);
//Line Number: 297
ASSERT_TEST(DS3.WatchClass(14,7,9)==SUCCESS);
//Line Number: 298
ASSERT_TEST(DS3.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==63);
//Line Number: 299
ASSERT_TEST(DS3.WatchClass(14,2,9)==SUCCESS);
//Line Number: 300
ASSERT_TEST(DS3.TimeViewed(14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==54);
//Line Number: 301
ASSERT_TEST(DS3.WatchClass(14,2,9)==SUCCESS);
//Line Number: 302
ASSERT_TEST(DS3.TimeViewed(14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==63);
//Line Number: 303
ASSERT_TEST(DS3.WatchClass(14,4,9)==SUCCESS);
//Line Number: 304
ASSERT_TEST(DS3.TimeViewed(14,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==45);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
//Line Number: 305
ASSERT_TEST(DS3.AddCourse(9,14)==FAILURE);
//Line Number: 306
ASSERT_TEST(DS3.WatchClass(9,2,14)==SUCCESS);
//Line Number: 307
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 308
ASSERT_TEST(DS3.WatchClass(9,2,14)==SUCCESS);
//Line Number: 309
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==28);
//Line Number: 310
ASSERT_TEST(DS3.WatchClass(9,2,14)==SUCCESS);
//Line Number: 311
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==42);
//Line Number: 312
ASSERT_TEST(DS3.WatchClass(9,6,14)==SUCCESS);
//Line Number: 313
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 314
ASSERT_TEST(DS3.WatchClass(9,7,14)==SUCCESS);
//Line Number: 315
ASSERT_TEST(DS3.TimeViewed(9,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 316
ASSERT_TEST(DS3.WatchClass(9,2,14)==SUCCESS);
//Line Number: 317
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==56);
//Line Number: 318
ASSERT_TEST(DS3.WatchClass(9,0,14)==SUCCESS);
//Line Number: 319
ASSERT_TEST(DS3.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 320
ASSERT_TEST(DS3.WatchClass(9,6,14)==SUCCESS);
//Line Number: 321
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==28);
//Line Number: 322
ASSERT_TEST(DS3.WatchClass(9,6,14)==SUCCESS);
//Line Number: 323
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==42);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
//Line Number: 324
ASSERT_TEST(DS3.AddCourse(20,17)==SUCCESS);
//Line Number: 325
ASSERT_TEST(DS3.WatchClass(20,2,6)==SUCCESS);
//Line Number: 326
ASSERT_TEST(DS3.TimeViewed(20,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 327
ASSERT_TEST(DS3.WatchClass(20,4,6)==SUCCESS);
//Line Number: 328
ASSERT_TEST(DS3.TimeViewed(20,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 329
ASSERT_TEST(DS3.WatchClass(20,4,6)==SUCCESS);
//Line Number: 330
ASSERT_TEST(DS3.TimeViewed(20,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 331
ASSERT_TEST(DS3.WatchClass(20,3,6)==SUCCESS);
//Line Number: 332
ASSERT_TEST(DS3.TimeViewed(20,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 333
ASSERT_TEST(DS3.WatchClass(20,3,6)==SUCCESS);
//Line Number: 334
ASSERT_TEST(DS3.TimeViewed(20,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 335
ASSERT_TEST(DS3.WatchClass(20,2,6)==SUCCESS);
//Line Number: 336
ASSERT_TEST(DS3.TimeViewed(20,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 337
ASSERT_TEST(DS3.AddCourse(7,8)==SUCCESS);
//Line Number: 338
ASSERT_TEST(DS3.WatchClass(7,0,3)==SUCCESS);
//Line Number: 339
ASSERT_TEST(DS3.TimeViewed(7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==3);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
DS3.GetMostViewedClasses(8);
DS3.GetMostViewedClasses(9);
//Line Number: 340
ASSERT_TEST(DS3.AddCourse(20,20)==FAILURE);
//Line Number: 341
ASSERT_TEST(DS3.WatchClass(20,3,16)==SUCCESS);
//Line Number: 342
ASSERT_TEST(DS3.TimeViewed(20,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==28);
//Line Number: 343
ASSERT_TEST(DS3.WatchClass(20,3,16)==SUCCESS);
//Line Number: 344
ASSERT_TEST(DS3.TimeViewed(20,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==44);
//Line Number: 345
ASSERT_TEST(DS3.WatchClass(20,0,16)==SUCCESS);
//Line Number: 346
ASSERT_TEST(DS3.TimeViewed(20,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 347
ASSERT_TEST(DS3.WatchClass(20,3,16)==SUCCESS);
//Line Number: 348
ASSERT_TEST(DS3.TimeViewed(20,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==60);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
DS3.GetMostViewedClasses(8);
DS3.GetMostViewedClasses(9);
//Line Number: 349
ASSERT_TEST(DS3.AddCourse(11,8)==SUCCESS);
//Line Number: 350
ASSERT_TEST(DS3.WatchClass(11,0,9)==SUCCESS);
//Line Number: 351
ASSERT_TEST(DS3.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 352
ASSERT_TEST(DS3.WatchClass(11,0,9)==SUCCESS);
//Line Number: 353
ASSERT_TEST(DS3.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 354
ASSERT_TEST(DS3.AddCourse(2,17)==SUCCESS);
//Line Number: 355
ASSERT_TEST(DS3.WatchClass(2,2,10)==SUCCESS);
//Line Number: 356
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 357
ASSERT_TEST(DS3.WatchClass(2,2,10)==SUCCESS);
//Line Number: 358
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 359
ASSERT_TEST(DS3.WatchClass(2,2,10)==SUCCESS);
//Line Number: 360
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==30);
//Line Number: 361
ASSERT_TEST(DS3.WatchClass(2,0,10)==SUCCESS);
//Line Number: 362
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 363
ASSERT_TEST(DS3.WatchClass(2,5,10)==SUCCESS);
//Line Number: 364
ASSERT_TEST(DS3.TimeViewed(2,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 365
ASSERT_TEST(DS3.WatchClass(2,5,10)==SUCCESS);
//Line Number: 366
ASSERT_TEST(DS3.TimeViewed(2,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 367
ASSERT_TEST(DS3.WatchClass(2,2,10)==SUCCESS);
//Line Number: 368
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 369
ASSERT_TEST(DS3.WatchClass(2,9,10)==SUCCESS);
//Line Number: 370
ASSERT_TEST(DS3.TimeViewed(2,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 371
ASSERT_TEST(DS3.WatchClass(2,0,10)==SUCCESS);
//Line Number: 372
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 373
ASSERT_TEST(DS3.WatchClass(2,2,10)==SUCCESS);
//Line Number: 374
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==50);
//Line Number: 375
ASSERT_TEST(DS3.AddCourse(11,19)==FAILURE);
//Line Number: 376
ASSERT_TEST(DS3.WatchClass(11,15,14)==INVALID_INPUT);
//Line Number: 377
ASSERT_TEST(DS3.TimeViewed(11,15,timeviewed)==INVALID_INPUT);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
DS3.GetMostViewedClasses(8);
DS3.GetMostViewedClasses(9);
DS3.GetMostViewedClasses(10);
DS3.GetMostViewedClasses(11);
//Line Number: 378
ASSERT_TEST(DS3.AddCourse(17,20)==SUCCESS);
//Line Number: 379
ASSERT_TEST(DS3.WatchClass(17,14,2)==SUCCESS);
//Line Number: 380
ASSERT_TEST(DS3.TimeViewed(17,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 381
ASSERT_TEST(DS3.WatchClass(17,4,2)==SUCCESS);
//Line Number: 382
ASSERT_TEST(DS3.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 383
ASSERT_TEST(DS3.WatchClass(17,14,2)==SUCCESS);
//Line Number: 384
ASSERT_TEST(DS3.TimeViewed(17,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 385
ASSERT_TEST(DS3.WatchClass(17,14,2)==SUCCESS);
//Line Number: 386
ASSERT_TEST(DS3.TimeViewed(17,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 387
ASSERT_TEST(DS3.WatchClass(17,3,2)==SUCCESS);
//Line Number: 388
ASSERT_TEST(DS3.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 389
ASSERT_TEST(DS3.WatchClass(17,11,2)==SUCCESS);
//Line Number: 390
ASSERT_TEST(DS3.TimeViewed(17,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 391
ASSERT_TEST(DS3.WatchClass(17,0,2)==SUCCESS);
//Line Number: 392
ASSERT_TEST(DS3.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 393
ASSERT_TEST(DS3.WatchClass(17,10,2)==SUCCESS);
//Line Number: 394
ASSERT_TEST(DS3.TimeViewed(17,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 395
ASSERT_TEST(DS3.WatchClass(17,10,2)==SUCCESS);
//Line Number: 396
ASSERT_TEST(DS3.TimeViewed(17,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 397
ASSERT_TEST(DS3.WatchClass(17,7,2)==SUCCESS);
//Line Number: 398
ASSERT_TEST(DS3.TimeViewed(17,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 399
ASSERT_TEST(DS3.WatchClass(17,14,2)==SUCCESS);
//Line Number: 400
ASSERT_TEST(DS3.TimeViewed(17,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 401
ASSERT_TEST(DS3.WatchClass(17,4,2)==SUCCESS);
//Line Number: 402
ASSERT_TEST(DS3.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 403
ASSERT_TEST(DS3.WatchClass(17,13,2)==SUCCESS);
//Line Number: 404
ASSERT_TEST(DS3.TimeViewed(17,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 405
ASSERT_TEST(DS3.WatchClass(17,10,2)==SUCCESS);
//Line Number: 406
ASSERT_TEST(DS3.TimeViewed(17,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 407
ASSERT_TEST(DS3.WatchClass(17,11,2)==SUCCESS);
//Line Number: 408
ASSERT_TEST(DS3.TimeViewed(17,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
DS3.GetMostViewedClasses(8);
DS3.GetMostViewedClasses(9);
DS3.GetMostViewedClasses(10);
DS3.GetMostViewedClasses(11);
DS3.GetMostViewedClasses(12);
//Line Number: 409
ASSERT_TEST(DS3.AddCourse(2,14)==FAILURE);
//Line Number: 410
ASSERT_TEST(DS3.WatchClass(2,3,5)==SUCCESS);
//Line Number: 411
ASSERT_TEST(DS3.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 412
ASSERT_TEST(DS3.WatchClass(2,4,5)==SUCCESS);
//Line Number: 413
ASSERT_TEST(DS3.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 414
ASSERT_TEST(DS3.WatchClass(2,10,5)==SUCCESS);
//Line Number: 415
ASSERT_TEST(DS3.TimeViewed(2,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 416
ASSERT_TEST(DS3.WatchClass(2,10,5)==SUCCESS);
//Line Number: 417
ASSERT_TEST(DS3.TimeViewed(2,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 418
ASSERT_TEST(DS3.WatchClass(2,2,5)==SUCCESS);
//Line Number: 419
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==55);
//Line Number: 420
ASSERT_TEST(DS3.WatchClass(2,8,5)==SUCCESS);
//Line Number: 421
ASSERT_TEST(DS3.TimeViewed(2,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 422
ASSERT_TEST(DS3.WatchClass(2,1,5)==SUCCESS);
//Line Number: 423
ASSERT_TEST(DS3.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 424
ASSERT_TEST(DS3.WatchClass(2,6,5)==SUCCESS);
//Line Number: 425
ASSERT_TEST(DS3.TimeViewed(2,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 426
ASSERT_TEST(DS3.WatchClass(2,0,5)==SUCCESS);
//Line Number: 427
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==25);
//Line Number: 428
ASSERT_TEST(DS3.WatchClass(2,0,5)==SUCCESS);
//Line Number: 429
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==30);
//Line Number: 430
ASSERT_TEST(DS3.WatchClass(2,1,5)==SUCCESS);
//Line Number: 431
ASSERT_TEST(DS3.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 432
ASSERT_TEST(DS3.WatchClass(2,4,5)==SUCCESS);
//Line Number: 433
ASSERT_TEST(DS3.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 434
ASSERT_TEST(DS3.AddCourse(17,19)==FAILURE);
//Line Number: 435
ASSERT_TEST(DS3.WatchClass(17,8,19)==SUCCESS);
//Line Number: 436
ASSERT_TEST(DS3.TimeViewed(17,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 437
ASSERT_TEST(DS3.WatchClass(17,3,19)==SUCCESS);
//Line Number: 438
ASSERT_TEST(DS3.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 439
ASSERT_TEST(DS3.WatchClass(17,3,19)==SUCCESS);
//Line Number: 440
ASSERT_TEST(DS3.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 441
ASSERT_TEST(DS3.WatchClass(17,3,19)==SUCCESS);
//Line Number: 442
ASSERT_TEST(DS3.TimeViewed(17,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==59);
//Line Number: 443
ASSERT_TEST(DS3.WatchClass(17,8,19)==SUCCESS);
//Line Number: 444
ASSERT_TEST(DS3.TimeViewed(17,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 445
ASSERT_TEST(DS3.WatchClass(17,0,19)==SUCCESS);
//Line Number: 446
ASSERT_TEST(DS3.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 447
ASSERT_TEST(DS3.WatchClass(17,4,19)==SUCCESS);
//Line Number: 448
ASSERT_TEST(DS3.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==23);
//Line Number: 449
ASSERT_TEST(DS3.WatchClass(17,7,19)==SUCCESS);
//Line Number: 450
ASSERT_TEST(DS3.TimeViewed(17,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 451
ASSERT_TEST(DS3.WatchClass(17,6,19)==SUCCESS);
//Line Number: 452
ASSERT_TEST(DS3.TimeViewed(17,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 453
ASSERT_TEST(DS3.WatchClass(17,8,19)==SUCCESS);
//Line Number: 454
ASSERT_TEST(DS3.TimeViewed(17,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==57);
DS3.GetMostViewedClasses(1);
DS3.GetMostViewedClasses(2);
DS3.GetMostViewedClasses(3);
DS3.GetMostViewedClasses(4);
DS3.GetMostViewedClasses(5);
DS3.GetMostViewedClasses(6);
DS3.GetMostViewedClasses(7);
DS3.GetMostViewedClasses(8);
DS3.GetMostViewedClasses(9);
DS3.GetMostViewedClasses(10);
DS3.GetMostViewedClasses(11);
DS3.GetMostViewedClasses(12);
delete timeviewed;
}
