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
ASSERT_TEST(DS1.RemoveCourse(-1)==INVALID_INPUT);
//Line Number: 3
ASSERT_TEST(DS1.AddCourse(14,14)==SUCCESS);
//Line Number: 4
ASSERT_TEST(DS1.AddCourse(5,5)==SUCCESS);
//Line Number: 5
ASSERT_TEST(DS1.RemoveCourse(6)==FAILURE);
//Line Number: 6
ASSERT_TEST(DS1.AddCourse(13,13)==SUCCESS);
//Line Number: 7
ASSERT_TEST(DS1.AddCourse(18,18)==SUCCESS);
//Line Number: 8
ASSERT_TEST(DS1.RemoveCourse(11)==FAILURE);
//Line Number: 9
ASSERT_TEST(DS1.RemoveCourse(7)==FAILURE);
//Line Number: 10
ASSERT_TEST(DS1.AddCourse(14,14)==FAILURE);
//Line Number: 11
ASSERT_TEST(DS1.AddCourse(2,2)==SUCCESS);
//Line Number: 12
ASSERT_TEST(DS1.RemoveCourse(5)==SUCCESS);
//Line Number: 13
ASSERT_TEST(DS1.AddCourse(8,8)==SUCCESS);
//Line Number: 14
ASSERT_TEST(DS1.RemoveCourse(-12)==INVALID_INPUT);
//Line Number: 15
ASSERT_TEST(DS1.AddCourse(14,14)==FAILURE);
//Line Number: 16
ASSERT_TEST(DS1.RemoveCourse(10)==FAILURE);
//Line Number: 17
ASSERT_TEST(DS1.RemoveCourse(8)==SUCCESS);
//Line Number: 18
ASSERT_TEST(DS1.AddCourse(5,5)==SUCCESS);
//Line Number: 19
ASSERT_TEST(DS1.RemoveCourse(5)==SUCCESS);
//Line Number: 20
ASSERT_TEST(DS1.AddCourse(2,2)==FAILURE);
//Line Number: 21
ASSERT_TEST(DS1.AddCourse(13,13)==FAILURE);
//Line Number: 22
ASSERT_TEST(DS1.AddCourse(20,20)==SUCCESS);
//Line Number: 23
ASSERT_TEST(DS1.RemoveCourse(6)==FAILURE);
//Line Number: 24
ASSERT_TEST(DS1.AddCourse(12,12)==SUCCESS);
//Line Number: 25
ASSERT_TEST(DS1.AddCourse(3,3)==SUCCESS);
//Line Number: 26
ASSERT_TEST(DS1.RemoveCourse(-23)==INVALID_INPUT);
//Line Number: 27
ASSERT_TEST(DS1.AddCourse(3,3)==FAILURE);
//Line Number: 28
ASSERT_TEST(DS1.AddCourse(11,11)==SUCCESS);
//Line Number: 29
ASSERT_TEST(DS1.AddCourse(12,12)==FAILURE);
//Line Number: 30
ASSERT_TEST(DS1.RemoveCourse(16)==FAILURE);
//Line Number: 31
ASSERT_TEST(DS1.RemoveCourse(2)==SUCCESS);
//Line Number: 32
ASSERT_TEST(DS1.AddCourse(19,19)==SUCCESS);
//Line Number: 33
ASSERT_TEST(DS1.AddCourse(3,3)==FAILURE);
//Line Number: 34
ASSERT_TEST(DS1.AddCourse(1,1)==SUCCESS);
//Line Number: 35
ASSERT_TEST(DS1.AddCourse(16,16)==SUCCESS);
//Line Number: 36
ASSERT_TEST(DS1.AddCourse(20,20)==FAILURE);
//Line Number: 37
ASSERT_TEST(DS1.RemoveCourse(7)==FAILURE);
//Line Number: 38
ASSERT_TEST(DS1.AddCourse(-34,-34)==INVALID_INPUT);
//Line Number: 39
ASSERT_TEST(DS1.AddCourse(2,2)==SUCCESS);
//Line Number: 40
ASSERT_TEST(DS1.AddCourse(8,8)==SUCCESS);
//Line Number: 41
ASSERT_TEST(DS1.AddCourse(1,1)==FAILURE);
//Line Number: 42
ASSERT_TEST(DS1.AddCourse(11,11)==FAILURE);
//Line Number: 43
ASSERT_TEST(DS1.AddCourse(6,6)==SUCCESS);
//Line Number: 44
ASSERT_TEST(DS1.RemoveCourse(4)==FAILURE);
//Line Number: 45
ASSERT_TEST(DS1.AddCourse(15,15)==SUCCESS);
//Line Number: 46
ASSERT_TEST(DS1.AddCourse(14,14)==FAILURE);
//Line Number: 47
ASSERT_TEST(DS1.RemoveCourse(9)==SUCCESS);
//Line Number: 48
ASSERT_TEST(DS1.RemoveCourse(8)==SUCCESS);
//Line Number: 49
ASSERT_TEST(DS1.AddCourse(18,18)==FAILURE);
//Line Number: 50
ASSERT_TEST(DS1.RemoveCourse(-45)==INVALID_INPUT);
//Line Number: 51
ASSERT_TEST(DS1.RemoveCourse(2)==SUCCESS);
//Line Number: 52
ASSERT_TEST(DS1.AddCourse(5,5)==SUCCESS);
//Line Number: 53
ASSERT_TEST(DS1.AddCourse(3,3)==FAILURE);
//Line Number: 54
ASSERT_TEST(DS1.AddCourse(4,4)==SUCCESS);
//Line Number: 55
ASSERT_TEST(DS1.AddCourse(14,14)==FAILURE);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF ADD REMOVE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//Line Number: 56
CoursesManager DS2;
//Line Number: 57
ASSERT_TEST(DS2.RemoveCourse(14)==FAILURE);
//Line Number: 58
ASSERT_TEST(DS2.WatchClass(14,9,3)==FAILURE);
//Line Number: 59
ASSERT_TEST(DS2.TimeViewed(14,9,timeviewed)==FAILURE);
//Line Number: 60
ASSERT_TEST(DS2.AddCourse(6,10)==SUCCESS);
//Line Number: 61
ASSERT_TEST(DS2.WatchClass(6,7,8)==SUCCESS);
//Line Number: 62
ASSERT_TEST(DS2.TimeViewed(6,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 63
ASSERT_TEST(DS2.WatchClass(6,5,8)==SUCCESS);
//Line Number: 64
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 65
ASSERT_TEST(DS2.WatchClass(6,3,8)==SUCCESS);
//Line Number: 66
ASSERT_TEST(DS2.TimeViewed(6,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 67
ASSERT_TEST(DS2.WatchClass(6,6,8)==SUCCESS);
//Line Number: 68
ASSERT_TEST(DS2.TimeViewed(6,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 69
ASSERT_TEST(DS2.WatchClass(6,1,8)==SUCCESS);
//Line Number: 70
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 71
ASSERT_TEST(DS2.WatchClass(6,2,8)==SUCCESS);
//Line Number: 72
ASSERT_TEST(DS2.TimeViewed(6,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 73
ASSERT_TEST(DS2.WatchClass(6,5,8)==SUCCESS);
//Line Number: 74
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 75
ASSERT_TEST(DS2.WatchClass(6,7,8)==SUCCESS);
//Line Number: 76
ASSERT_TEST(DS2.TimeViewed(6,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 77
ASSERT_TEST(DS2.AddCourse(16,14)==SUCCESS);
//Line Number: 78
ASSERT_TEST(DS2.WatchClass(16,7,4)==SUCCESS);
//Line Number: 79
ASSERT_TEST(DS2.TimeViewed(16,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 80
ASSERT_TEST(DS2.WatchClass(16,4,4)==SUCCESS);
//Line Number: 81
ASSERT_TEST(DS2.TimeViewed(16,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 82
ASSERT_TEST(DS2.WatchClass(16,5,4)==SUCCESS);
//Line Number: 83
ASSERT_TEST(DS2.TimeViewed(16,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 84
ASSERT_TEST(DS2.WatchClass(16,9,4)==SUCCESS);
//Line Number: 85
ASSERT_TEST(DS2.TimeViewed(16,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 86
ASSERT_TEST(DS2.WatchClass(16,3,4)==SUCCESS);
//Line Number: 87
ASSERT_TEST(DS2.TimeViewed(16,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 88
ASSERT_TEST(DS2.WatchClass(16,8,4)==SUCCESS);
//Line Number: 89
ASSERT_TEST(DS2.TimeViewed(16,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 90
ASSERT_TEST(DS2.WatchClass(16,3,4)==SUCCESS);
//Line Number: 91
ASSERT_TEST(DS2.TimeViewed(16,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 92
ASSERT_TEST(DS2.WatchClass(16,6,4)==SUCCESS);
//Line Number: 93
ASSERT_TEST(DS2.TimeViewed(16,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 94
ASSERT_TEST(DS2.WatchClass(16,2,4)==SUCCESS);
//Line Number: 95
ASSERT_TEST(DS2.TimeViewed(16,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 96
ASSERT_TEST(DS2.WatchClass(16,5,4)==SUCCESS);
//Line Number: 97
ASSERT_TEST(DS2.TimeViewed(16,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 98
ASSERT_TEST(DS2.AddCourse(9,15)==SUCCESS);
//Line Number: 99
ASSERT_TEST(DS2.WatchClass(9,2,12)==SUCCESS);
//Line Number: 100
ASSERT_TEST(DS2.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 101
ASSERT_TEST(DS2.WatchClass(9,0,12)==SUCCESS);
//Line Number: 102
ASSERT_TEST(DS2.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 103
ASSERT_TEST(DS2.WatchClass(9,2,12)==SUCCESS);
//Line Number: 104
ASSERT_TEST(DS2.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 105
ASSERT_TEST(DS2.WatchClass(9,1,12)==SUCCESS);
//Line Number: 106
ASSERT_TEST(DS2.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 107
ASSERT_TEST(DS2.AddCourse(5,6)==SUCCESS);
//Line Number: 108
ASSERT_TEST(DS2.WatchClass(5,4,15)==SUCCESS);
//Line Number: 109
ASSERT_TEST(DS2.TimeViewed(5,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 110
ASSERT_TEST(DS2.WatchClass(5,1,15)==SUCCESS);
//Line Number: 111
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 112
ASSERT_TEST(DS2.WatchClass(5,1,15)==SUCCESS);
//Line Number: 113
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==30);
//Line Number: 114
ASSERT_TEST(DS2.WatchClass(5,4,15)==SUCCESS);
//Line Number: 115
ASSERT_TEST(DS2.TimeViewed(5,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==30);
//Line Number: 116
ASSERT_TEST(DS2.WatchClass(5,3,15)==SUCCESS);
//Line Number: 117
ASSERT_TEST(DS2.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 118
ASSERT_TEST(DS2.RemoveCourse(6)==SUCCESS);
//Line Number: 119
ASSERT_TEST(DS2.WatchClass(6,0,7)==FAILURE);
//Line Number: 120
ASSERT_TEST(DS2.TimeViewed(6,0,timeviewed)==FAILURE);
//Line Number: 121
ASSERT_TEST(DS2.AddCourse(7,16)==SUCCESS);
//Line Number: 122
ASSERT_TEST(DS2.WatchClass(7,7,16)==SUCCESS);
//Line Number: 123
ASSERT_TEST(DS2.TimeViewed(7,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 124
ASSERT_TEST(DS2.WatchClass(7,1,16)==SUCCESS);
//Line Number: 125
ASSERT_TEST(DS2.TimeViewed(7,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 126
ASSERT_TEST(DS2.WatchClass(7,7,16)==SUCCESS);
//Line Number: 127
ASSERT_TEST(DS2.TimeViewed(7,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 128
ASSERT_TEST(DS2.WatchClass(7,8,16)==SUCCESS);
//Line Number: 129
ASSERT_TEST(DS2.TimeViewed(7,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 130
ASSERT_TEST(DS2.WatchClass(7,6,16)==SUCCESS);
//Line Number: 131
ASSERT_TEST(DS2.TimeViewed(7,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 132
ASSERT_TEST(DS2.WatchClass(7,6,16)==SUCCESS);
//Line Number: 133
ASSERT_TEST(DS2.TimeViewed(7,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 134
ASSERT_TEST(DS2.WatchClass(7,3,16)==SUCCESS);
//Line Number: 135
ASSERT_TEST(DS2.TimeViewed(7,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 136
ASSERT_TEST(DS2.WatchClass(7,3,16)==SUCCESS);
//Line Number: 137
ASSERT_TEST(DS2.TimeViewed(7,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 138
ASSERT_TEST(DS2.WatchClass(7,6,16)==SUCCESS);
//Line Number: 139
ASSERT_TEST(DS2.TimeViewed(7,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==48);
//Line Number: 140
ASSERT_TEST(DS2.AddCourse(14,16)==SUCCESS);
//Line Number: 141
ASSERT_TEST(DS2.WatchClass(14,1,2)==SUCCESS);
//Line Number: 142
ASSERT_TEST(DS2.TimeViewed(14,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 143
ASSERT_TEST(DS2.WatchClass(14,0,2)==SUCCESS);
//Line Number: 144
ASSERT_TEST(DS2.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 145
ASSERT_TEST(DS2.WatchClass(14,0,2)==SUCCESS);
//Line Number: 146
ASSERT_TEST(DS2.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 147
ASSERT_TEST(DS2.AddCourse(8,9)==SUCCESS);
//Line Number: 148
ASSERT_TEST(DS2.WatchClass(8,4,4)==SUCCESS);
//Line Number: 149
ASSERT_TEST(DS2.TimeViewed(8,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 150
ASSERT_TEST(DS2.WatchClass(8,3,4)==SUCCESS);
//Line Number: 151
ASSERT_TEST(DS2.TimeViewed(8,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 152
ASSERT_TEST(DS2.WatchClass(8,5,4)==SUCCESS);
//Line Number: 153
ASSERT_TEST(DS2.TimeViewed(8,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 154
ASSERT_TEST(DS2.WatchClass(8,6,4)==SUCCESS);
//Line Number: 155
ASSERT_TEST(DS2.TimeViewed(8,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 156
ASSERT_TEST(DS2.WatchClass(8,2,4)==SUCCESS);
//Line Number: 157
ASSERT_TEST(DS2.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 158
ASSERT_TEST(DS2.WatchClass(8,4,4)==SUCCESS);
//Line Number: 159
ASSERT_TEST(DS2.TimeViewed(8,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 160
ASSERT_TEST(DS2.WatchClass(8,0,4)==SUCCESS);
//Line Number: 161
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 162
ASSERT_TEST(DS2.WatchClass(8,2,4)==SUCCESS);
//Line Number: 163
ASSERT_TEST(DS2.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 164
ASSERT_TEST(DS2.AddCourse(11,2)==SUCCESS);
//Line Number: 165
ASSERT_TEST(DS2.WatchClass(11,0,11)==SUCCESS);
//Line Number: 166
ASSERT_TEST(DS2.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//Line Number: 167
ASSERT_TEST(DS2.RemoveCourse(17)==FAILURE);
//Line Number: 168
ASSERT_TEST(DS2.WatchClass(17,1,14)==FAILURE);
//Line Number: 169
ASSERT_TEST(DS2.TimeViewed(17,1,timeviewed)==FAILURE);
//Line Number: 170
ASSERT_TEST(DS2.AddCourse(5,6)==FAILURE);
//Line Number: 171
ASSERT_TEST(DS2.WatchClass(5,4,4)==SUCCESS);
//Line Number: 172
ASSERT_TEST(DS2.TimeViewed(5,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 173
ASSERT_TEST(DS2.WatchClass(5,3,4)==SUCCESS);
//Line Number: 174
ASSERT_TEST(DS2.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 175
ASSERT_TEST(DS2.WatchClass(5,1,4)==SUCCESS);
//Line Number: 176
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 177
ASSERT_TEST(DS2.WatchClass(5,2,4)==SUCCESS);
//Line Number: 178
ASSERT_TEST(DS2.TimeViewed(5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 179
ASSERT_TEST(DS2.WatchClass(5,2,4)==SUCCESS);
//Line Number: 180
ASSERT_TEST(DS2.TimeViewed(5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 181
ASSERT_TEST(DS2.RemoveCourse(16)==SUCCESS);
//Line Number: 182
ASSERT_TEST(DS2.WatchClass(16,8,4)==FAILURE);
//Line Number: 183
ASSERT_TEST(DS2.TimeViewed(16,8,timeviewed)==FAILURE);
//Line Number: 184
ASSERT_TEST(DS2.RemoveCourse(15)==FAILURE);
//Line Number: 185
ASSERT_TEST(DS2.WatchClass(15,3,2)==FAILURE);
//Line Number: 186
ASSERT_TEST(DS2.TimeViewed(15,3,timeviewed)==FAILURE);
//Line Number: 187
ASSERT_TEST(DS2.AddCourse(14,16)==FAILURE);
//Line Number: 188
ASSERT_TEST(DS2.WatchClass(14,7,17)==SUCCESS);
//Line Number: 189
ASSERT_TEST(DS2.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 190
ASSERT_TEST(DS2.WatchClass(14,7,17)==SUCCESS);
//Line Number: 191
ASSERT_TEST(DS2.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 192
ASSERT_TEST(DS2.WatchClass(14,1,17)==SUCCESS);
//Line Number: 193
ASSERT_TEST(DS2.TimeViewed(14,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 194
ASSERT_TEST(DS2.WatchClass(14,7,17)==SUCCESS);
//Line Number: 195
ASSERT_TEST(DS2.TimeViewed(14,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==51);
//Line Number: 196
ASSERT_TEST(DS2.WatchClass(14,3,17)==SUCCESS);
//Line Number: 197
ASSERT_TEST(DS2.TimeViewed(14,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 198
ASSERT_TEST(DS2.WatchClass(14,3,17)==SUCCESS);
//Line Number: 199
ASSERT_TEST(DS2.TimeViewed(14,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 200
ASSERT_TEST(DS2.WatchClass(14,3,17)==SUCCESS);
//Line Number: 201
ASSERT_TEST(DS2.TimeViewed(14,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==51);
//Line Number: 202
ASSERT_TEST(DS2.WatchClass(14,4,17)==SUCCESS);
//Line Number: 203
ASSERT_TEST(DS2.TimeViewed(14,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 204
ASSERT_TEST(DS2.AddCourse(11,11)==FAILURE);
//Line Number: 205
ASSERT_TEST(DS2.AddCourse(18,20)==SUCCESS);
//Line Number: 206
ASSERT_TEST(DS2.RemoveCourse(18)==SUCCESS);
//Line Number: 207
ASSERT_TEST(DS2.WatchClass(18,0,6)==FAILURE);
//Line Number: 208
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==FAILURE);
//Line Number: 209
ASSERT_TEST(DS2.AddCourse(14,1)==FAILURE);
//Line Number: 210
ASSERT_TEST(DS2.AddCourse(1,15)==SUCCESS);
//Line Number: 211
ASSERT_TEST(DS2.WatchClass(1,0,19)==SUCCESS);
//Line Number: 212
ASSERT_TEST(DS2.TimeViewed(1,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 213
ASSERT_TEST(DS2.RemoveCourse(5)==SUCCESS);
//Line Number: 214
ASSERT_TEST(DS2.WatchClass(5,1,10)==FAILURE);
//Line Number: 215
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==FAILURE);
//Line Number: 216
ASSERT_TEST(DS2.AddCourse(8,15)==FAILURE);
//Line Number: 217
ASSERT_TEST(DS2.WatchClass(8,0,17)==SUCCESS);
//Line Number: 218
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 219
ASSERT_TEST(DS2.AddCourse(9,15)==FAILURE);
//Line Number: 220
ASSERT_TEST(DS2.WatchClass(9,1,14)==SUCCESS);
//Line Number: 221
ASSERT_TEST(DS2.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 222
ASSERT_TEST(DS2.WatchClass(9,2,14)==SUCCESS);
//Line Number: 223
ASSERT_TEST(DS2.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 224
ASSERT_TEST(DS2.WatchClass(9,1,14)==SUCCESS);
//Line Number: 225
ASSERT_TEST(DS2.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 226
ASSERT_TEST(DS2.WatchClass(9,2,14)==SUCCESS);
//Line Number: 227
ASSERT_TEST(DS2.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==52);
//Line Number: 228
ASSERT_TEST(DS2.AddCourse(4,19)==SUCCESS);
//Line Number: 229
ASSERT_TEST(DS2.WatchClass(4,2,19)==SUCCESS);
//Line Number: 230
ASSERT_TEST(DS2.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 231
ASSERT_TEST(DS2.WatchClass(4,8,19)==SUCCESS);
//Line Number: 232
ASSERT_TEST(DS2.TimeViewed(4,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 233
ASSERT_TEST(DS2.WatchClass(4,6,19)==SUCCESS);
//Line Number: 234
ASSERT_TEST(DS2.TimeViewed(4,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 235
ASSERT_TEST(DS2.WatchClass(4,9,19)==SUCCESS);
//Line Number: 236
ASSERT_TEST(DS2.TimeViewed(4,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 237
ASSERT_TEST(DS2.WatchClass(4,2,19)==SUCCESS);
//Line Number: 238
ASSERT_TEST(DS2.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 239
ASSERT_TEST(DS2.WatchClass(4,9,19)==SUCCESS);
//Line Number: 240
ASSERT_TEST(DS2.TimeViewed(4,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 241
ASSERT_TEST(DS2.WatchClass(4,8,19)==SUCCESS);
//Line Number: 242
ASSERT_TEST(DS2.TimeViewed(4,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 243
ASSERT_TEST(DS2.WatchClass(4,13,19)==SUCCESS);
//Line Number: 244
ASSERT_TEST(DS2.TimeViewed(4,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 245
ASSERT_TEST(DS2.WatchClass(4,10,19)==SUCCESS);
//Line Number: 246
ASSERT_TEST(DS2.TimeViewed(4,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 247
ASSERT_TEST(DS2.WatchClass(4,5,19)==SUCCESS);
//Line Number: 248
ASSERT_TEST(DS2.TimeViewed(4,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 249
ASSERT_TEST(DS2.WatchClass(4,13,19)==SUCCESS);
//Line Number: 250
ASSERT_TEST(DS2.TimeViewed(4,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 251
ASSERT_TEST(DS2.WatchClass(4,11,19)==SUCCESS);
//Line Number: 252
ASSERT_TEST(DS2.TimeViewed(4,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 253
ASSERT_TEST(DS2.WatchClass(4,14,19)==SUCCESS);
//Line Number: 254
ASSERT_TEST(DS2.TimeViewed(4,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 255
ASSERT_TEST(DS2.WatchClass(4,1,19)==SUCCESS);
//Line Number: 256
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 257
ASSERT_TEST(DS2.WatchClass(4,12,19)==SUCCESS);
//Line Number: 258
ASSERT_TEST(DS2.TimeViewed(4,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 259
ASSERT_TEST(DS2.AddCourse(16,2)==SUCCESS);
//Line Number: 260
ASSERT_TEST(DS2.AddCourse(4,19)==FAILURE);
//Line Number: 261
ASSERT_TEST(DS2.WatchClass(4,9,1)==SUCCESS);
//Line Number: 262
ASSERT_TEST(DS2.TimeViewed(4,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==39);
//Line Number: 263
ASSERT_TEST(DS2.WatchClass(4,4,1)==SUCCESS);
//Line Number: 264
ASSERT_TEST(DS2.TimeViewed(4,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 265
ASSERT_TEST(DS2.WatchClass(4,5,1)==SUCCESS);
//Line Number: 266
ASSERT_TEST(DS2.TimeViewed(4,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 267
ASSERT_TEST(DS2.WatchClass(4,1,1)==SUCCESS);
//Line Number: 268
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 269
ASSERT_TEST(DS2.WatchClass(4,10,1)==SUCCESS);
//Line Number: 270
ASSERT_TEST(DS2.TimeViewed(4,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 271
ASSERT_TEST(DS2.WatchClass(4,3,1)==SUCCESS);
//Line Number: 272
ASSERT_TEST(DS2.TimeViewed(4,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 273
ASSERT_TEST(DS2.WatchClass(4,7,1)==SUCCESS);
//Line Number: 274
ASSERT_TEST(DS2.TimeViewed(4,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 275
ASSERT_TEST(DS2.WatchClass(4,1,1)==SUCCESS);
//Line Number: 276
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 277
ASSERT_TEST(DS2.WatchClass(4,10,1)==SUCCESS);
//Line Number: 278
ASSERT_TEST(DS2.TimeViewed(4,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 279
ASSERT_TEST(DS2.WatchClass(4,7,1)==SUCCESS);
//Line Number: 280
ASSERT_TEST(DS2.TimeViewed(4,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 281
ASSERT_TEST(DS2.WatchClass(4,6,1)==SUCCESS);
//Line Number: 282
ASSERT_TEST(DS2.TimeViewed(4,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 283
ASSERT_TEST(DS2.WatchClass(4,2,1)==SUCCESS);
//Line Number: 284
ASSERT_TEST(DS2.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==39);
//Line Number: 285
ASSERT_TEST(DS2.AddCourse(3,5)==SUCCESS);
//Line Number: 286
ASSERT_TEST(DS2.WatchClass(3,2,1)==SUCCESS);
//Line Number: 287
ASSERT_TEST(DS2.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 288
ASSERT_TEST(DS2.WatchClass(3,1,1)==SUCCESS);
//Line Number: 289
ASSERT_TEST(DS2.TimeViewed(3,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 290
ASSERT_TEST(DS2.WatchClass(3,0,1)==SUCCESS);
//Line Number: 291
ASSERT_TEST(DS2.TimeViewed(3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 292
ASSERT_TEST(DS2.RemoveCourse(5)==FAILURE);
//Line Number: 293
ASSERT_TEST(DS2.WatchClass(5,0,14)==FAILURE);
//Line Number: 294
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==FAILURE);
//Line Number: 295
ASSERT_TEST(DS2.AddCourse(6,13)==SUCCESS);
//Line Number: 296
ASSERT_TEST(DS2.WatchClass(6,4,7)==SUCCESS);
//Line Number: 297
ASSERT_TEST(DS2.TimeViewed(6,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 298
ASSERT_TEST(DS2.WatchClass(6,11,7)==SUCCESS);
//Line Number: 299
ASSERT_TEST(DS2.TimeViewed(6,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 300
ASSERT_TEST(DS2.WatchClass(6,7,7)==SUCCESS);
//Line Number: 301
ASSERT_TEST(DS2.TimeViewed(6,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 302
ASSERT_TEST(DS2.WatchClass(6,10,7)==SUCCESS);
//Line Number: 303
ASSERT_TEST(DS2.TimeViewed(6,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 304
ASSERT_TEST(DS2.WatchClass(6,4,7)==SUCCESS);
//Line Number: 305
ASSERT_TEST(DS2.TimeViewed(6,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 306
ASSERT_TEST(DS2.WatchClass(6,9,7)==SUCCESS);
//Line Number: 307
ASSERT_TEST(DS2.TimeViewed(6,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 308
ASSERT_TEST(DS2.WatchClass(6,5,7)==SUCCESS);
//Line Number: 309
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 310
ASSERT_TEST(DS2.WatchClass(6,11,7)==SUCCESS);
//Line Number: 311
ASSERT_TEST(DS2.TimeViewed(6,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 312
ASSERT_TEST(DS2.WatchClass(6,2,7)==SUCCESS);
//Line Number: 313
ASSERT_TEST(DS2.TimeViewed(6,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 314
ASSERT_TEST(DS2.WatchClass(6,7,7)==SUCCESS);
//Line Number: 315
ASSERT_TEST(DS2.TimeViewed(6,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 316
ASSERT_TEST(DS2.WatchClass(6,10,7)==SUCCESS);
//Line Number: 317
ASSERT_TEST(DS2.TimeViewed(6,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 318
ASSERT_TEST(DS2.WatchClass(6,1,7)==SUCCESS);
//Line Number: 319
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 320
ASSERT_TEST(DS2.AddCourse(6,11)==FAILURE);
//Line Number: 321
ASSERT_TEST(DS2.WatchClass(6,6,2)==SUCCESS);
//Line Number: 322
ASSERT_TEST(DS2.TimeViewed(6,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 323
ASSERT_TEST(DS2.WatchClass(6,0,2)==SUCCESS);
//Line Number: 324
ASSERT_TEST(DS2.TimeViewed(6,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 325
ASSERT_TEST(DS2.WatchClass(6,1,2)==SUCCESS);
//Line Number: 326
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 327
ASSERT_TEST(DS2.WatchClass(6,5,2)==SUCCESS);
//Line Number: 328
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 329
ASSERT_TEST(DS2.WatchClass(6,5,2)==SUCCESS);
//Line Number: 330
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//Line Number: 331
ASSERT_TEST(DS2.WatchClass(6,6,2)==SUCCESS);
//Line Number: 332
ASSERT_TEST(DS2.TimeViewed(6,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 333
ASSERT_TEST(DS2.WatchClass(6,2,2)==SUCCESS);
//Line Number: 334
ASSERT_TEST(DS2.TimeViewed(6,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 335
ASSERT_TEST(DS2.AddCourse(8,20)==FAILURE);
//Line Number: 336
ASSERT_TEST(DS2.WatchClass(8,1,1)==SUCCESS);
//Line Number: 337
ASSERT_TEST(DS2.TimeViewed(8,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 338
ASSERT_TEST(DS2.WatchClass(8,2,1)==SUCCESS);
//Line Number: 339
ASSERT_TEST(DS2.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 340
ASSERT_TEST(DS2.WatchClass(8,0,1)==SUCCESS);
//Line Number: 341
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==22);
//Line Number: 342
ASSERT_TEST(DS2.WatchClass(8,0,1)==SUCCESS);
//Line Number: 343
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==23);
//Line Number: 344
ASSERT_TEST(DS2.RemoveCourse(17)==FAILURE);
//Line Number: 345
ASSERT_TEST(DS2.WatchClass(17,1,14)==FAILURE);
//Line Number: 346
ASSERT_TEST(DS2.TimeViewed(17,1,timeviewed)==FAILURE);
//Line Number: 347
ASSERT_TEST(DS2.AddCourse(16,6)==FAILURE);
//Line Number: 348
ASSERT_TEST(DS2.WatchClass(16,1,12)==SUCCESS);
//Line Number: 349
ASSERT_TEST(DS2.TimeViewed(16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 350
ASSERT_TEST(DS2.WatchClass(16,1,12)==SUCCESS);
//Line Number: 351
ASSERT_TEST(DS2.TimeViewed(16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 352
ASSERT_TEST(DS2.AddCourse(17,14)==SUCCESS);
//Line Number: 353
ASSERT_TEST(DS2.WatchClass(17,4,4)==SUCCESS);
//Line Number: 354
ASSERT_TEST(DS2.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 355
ASSERT_TEST(DS2.WatchClass(17,5,4)==SUCCESS);
//Line Number: 356
ASSERT_TEST(DS2.TimeViewed(17,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 357
ASSERT_TEST(DS2.WatchClass(17,0,4)==SUCCESS);
//Line Number: 358
ASSERT_TEST(DS2.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 359
ASSERT_TEST(DS2.WatchClass(17,4,4)==SUCCESS);
//Line Number: 360
ASSERT_TEST(DS2.TimeViewed(17,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 361
ASSERT_TEST(DS2.WatchClass(17,0,4)==SUCCESS);
//Line Number: 362
ASSERT_TEST(DS2.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 363
ASSERT_TEST(DS2.WatchClass(17,0,4)==SUCCESS);
//Line Number: 364
ASSERT_TEST(DS2.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 365
ASSERT_TEST(DS2.AddCourse(5,19)==SUCCESS);
//Line Number: 366
ASSERT_TEST(DS2.WatchClass(5,6,20)==SUCCESS);
//Line Number: 367
ASSERT_TEST(DS2.TimeViewed(5,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 368
ASSERT_TEST(DS2.WatchClass(5,0,20)==SUCCESS);
//Line Number: 369
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 370
ASSERT_TEST(DS2.WatchClass(5,1,20)==SUCCESS);
//Line Number: 371
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 372
ASSERT_TEST(DS2.WatchClass(5,0,20)==SUCCESS);
//Line Number: 373
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 374
ASSERT_TEST(DS2.WatchClass(5,2,20)==SUCCESS);
//Line Number: 375
ASSERT_TEST(DS2.TimeViewed(5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 376
ASSERT_TEST(DS2.WatchClass(5,7,20)==SUCCESS);
//Line Number: 377
ASSERT_TEST(DS2.TimeViewed(5,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 378
ASSERT_TEST(DS2.WatchClass(5,0,20)==SUCCESS);
//Line Number: 379
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==60);
//Line Number: 380
ASSERT_TEST(DS2.WatchClass(5,8,20)==SUCCESS);
//Line Number: 381
ASSERT_TEST(DS2.TimeViewed(5,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 382
ASSERT_TEST(DS2.WatchClass(5,0,20)==SUCCESS);
//Line Number: 383
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==80);
//Line Number: 384
ASSERT_TEST(DS2.WatchClass(5,7,20)==SUCCESS);
//Line Number: 385
ASSERT_TEST(DS2.TimeViewed(5,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 386
ASSERT_TEST(DS2.AddCourse(14,12)==FAILURE);
//Line Number: 387
ASSERT_TEST(DS2.WatchClass(14,1,7)==SUCCESS);
//Line Number: 388
ASSERT_TEST(DS2.TimeViewed(14,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 389
ASSERT_TEST(DS2.WatchClass(14,0,7)==SUCCESS);
//Line Number: 390
ASSERT_TEST(DS2.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//Line Number: 391
ASSERT_TEST(DS2.AddCourse(9,19)==FAILURE);
//Line Number: 392
ASSERT_TEST(DS2.WatchClass(9,18,16)==INVALID_INPUT);
//Line Number: 393
ASSERT_TEST(DS2.TimeViewed(9,18,timeviewed)==INVALID_INPUT);
//Line Number: 394
ASSERT_TEST(DS2.AddCourse(15,5)==SUCCESS);
//Line Number: 395
ASSERT_TEST(DS2.AddCourse(20,17)==SUCCESS);
//Line Number: 396
ASSERT_TEST(DS2.AddCourse(15,3)==FAILURE);
//Line Number: 397
ASSERT_TEST(DS2.WatchClass(15,1,12)==SUCCESS);
//Line Number: 398
ASSERT_TEST(DS2.TimeViewed(15,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 399
ASSERT_TEST(DS2.WatchClass(15,0,12)==SUCCESS);
//Line Number: 400
ASSERT_TEST(DS2.TimeViewed(15,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 401
ASSERT_TEST(DS2.AddCourse(3,5)==FAILURE);
//Line Number: 402
ASSERT_TEST(DS2.AddCourse(8,1)==FAILURE);
//Line Number: 403
ASSERT_TEST(DS2.RemoveCourse(12)==FAILURE);
//Line Number: 404
ASSERT_TEST(DS2.WatchClass(12,3,18)==FAILURE);
//Line Number: 405
ASSERT_TEST(DS2.TimeViewed(12,3,timeviewed)==FAILURE);
//Line Number: 406
ASSERT_TEST(DS2.AddCourse(18,15)==SUCCESS);
//Line Number: 407
ASSERT_TEST(DS2.WatchClass(18,2,8)==SUCCESS);
//Line Number: 408
ASSERT_TEST(DS2.TimeViewed(18,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 409
ASSERT_TEST(DS2.WatchClass(18,0,8)==SUCCESS);
//Line Number: 410
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 411
ASSERT_TEST(DS2.WatchClass(18,0,8)==SUCCESS);
//Line Number: 412
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 413
ASSERT_TEST(DS2.AddCourse(12,17)==SUCCESS);
//Line Number: 414
ASSERT_TEST(DS2.WatchClass(12,5,8)==SUCCESS);
//Line Number: 415
ASSERT_TEST(DS2.TimeViewed(12,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 416
ASSERT_TEST(DS2.WatchClass(12,9,8)==SUCCESS);
//Line Number: 417
ASSERT_TEST(DS2.TimeViewed(12,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 418
ASSERT_TEST(DS2.WatchClass(12,10,8)==SUCCESS);
//Line Number: 419
ASSERT_TEST(DS2.TimeViewed(12,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 420
ASSERT_TEST(DS2.WatchClass(12,12,8)==SUCCESS);
//Line Number: 421
ASSERT_TEST(DS2.TimeViewed(12,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 422
ASSERT_TEST(DS2.WatchClass(12,11,8)==SUCCESS);
//Line Number: 423
ASSERT_TEST(DS2.TimeViewed(12,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 424
ASSERT_TEST(DS2.WatchClass(12,11,8)==SUCCESS);
//Line Number: 425
ASSERT_TEST(DS2.TimeViewed(12,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 426
ASSERT_TEST(DS2.WatchClass(12,2,8)==SUCCESS);
//Line Number: 427
ASSERT_TEST(DS2.TimeViewed(12,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 428
ASSERT_TEST(DS2.WatchClass(12,0,8)==SUCCESS);
//Line Number: 429
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 430
ASSERT_TEST(DS2.WatchClass(12,5,8)==SUCCESS);
//Line Number: 431
ASSERT_TEST(DS2.TimeViewed(12,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 432
ASSERT_TEST(DS2.WatchClass(12,10,8)==SUCCESS);
//Line Number: 433
ASSERT_TEST(DS2.TimeViewed(12,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 434
ASSERT_TEST(DS2.WatchClass(12,2,8)==SUCCESS);
//Line Number: 435
ASSERT_TEST(DS2.TimeViewed(12,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 436
ASSERT_TEST(DS2.WatchClass(12,1,8)==SUCCESS);
//Line Number: 437
ASSERT_TEST(DS2.TimeViewed(12,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 438
ASSERT_TEST(DS2.WatchClass(12,10,8)==SUCCESS);
//Line Number: 439
ASSERT_TEST(DS2.TimeViewed(12,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 440
ASSERT_TEST(DS2.AddCourse(9,12)==FAILURE);
//Line Number: 441
ASSERT_TEST(DS2.RemoveCourse(14)==SUCCESS);
//Line Number: 442
ASSERT_TEST(DS2.WatchClass(14,0,8)==FAILURE);
//Line Number: 443
ASSERT_TEST(DS2.TimeViewed(14,0,timeviewed)==FAILURE);
//Line Number: 444
ASSERT_TEST(DS2.AddCourse(9,8)==FAILURE);
//Line Number: 445
ASSERT_TEST(DS2.WatchClass(9,0,19)==SUCCESS);
//Line Number: 446
ASSERT_TEST(DS2.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==31);
//Line Number: 447
ASSERT_TEST(DS2.WatchClass(9,3,19)==SUCCESS);
//Line Number: 448
ASSERT_TEST(DS2.TimeViewed(9,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 449
ASSERT_TEST(DS2.WatchClass(9,2,19)==SUCCESS);
//Line Number: 450
ASSERT_TEST(DS2.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==71);
//Line Number: 451
ASSERT_TEST(DS2.WatchClass(9,0,19)==SUCCESS);
//Line Number: 452
ASSERT_TEST(DS2.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==50);
//Line Number: 453
ASSERT_TEST(DS2.RemoveCourse(17)==SUCCESS);
//Line Number: 454
ASSERT_TEST(DS2.WatchClass(17,6,15)==FAILURE);
//Line Number: 455
ASSERT_TEST(DS2.TimeViewed(17,6,timeviewed)==FAILURE);
//Line Number: 456
ASSERT_TEST(DS2.AddCourse(2,8)==SUCCESS);
//Line Number: 457
ASSERT_TEST(DS2.TimeViewed(1,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 458
ASSERT_TEST(DS2.TimeViewed(1,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 459
ASSERT_TEST(DS2.TimeViewed(1,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 460
ASSERT_TEST(DS2.TimeViewed(1,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 461
ASSERT_TEST(DS2.TimeViewed(1,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 462
ASSERT_TEST(DS2.TimeViewed(1,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 463
ASSERT_TEST(DS2.TimeViewed(1,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 464
ASSERT_TEST(DS2.TimeViewed(1,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 465
ASSERT_TEST(DS2.TimeViewed(1,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 466
ASSERT_TEST(DS2.TimeViewed(1,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 467
ASSERT_TEST(DS2.TimeViewed(1,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 468
ASSERT_TEST(DS2.TimeViewed(1,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 469
ASSERT_TEST(DS2.TimeViewed(1,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 470
ASSERT_TEST(DS2.TimeViewed(1,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 471
ASSERT_TEST(DS2.TimeViewed(1,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 472
ASSERT_TEST(DS2.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 473
ASSERT_TEST(DS2.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 474
ASSERT_TEST(DS2.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 475
ASSERT_TEST(DS2.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 476
ASSERT_TEST(DS2.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 477
ASSERT_TEST(DS2.TimeViewed(2,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 478
ASSERT_TEST(DS2.TimeViewed(2,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 479
ASSERT_TEST(DS2.TimeViewed(2,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 480
ASSERT_TEST(DS2.TimeViewed(3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 481
ASSERT_TEST(DS2.TimeViewed(3,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 482
ASSERT_TEST(DS2.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 483
ASSERT_TEST(DS2.TimeViewed(3,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 484
ASSERT_TEST(DS2.TimeViewed(3,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 485
ASSERT_TEST(DS2.TimeViewed(4,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 486
ASSERT_TEST(DS2.TimeViewed(4,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 487
ASSERT_TEST(DS2.TimeViewed(4,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==39);
//Line Number: 488
ASSERT_TEST(DS2.TimeViewed(4,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 489
ASSERT_TEST(DS2.TimeViewed(4,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 490
ASSERT_TEST(DS2.TimeViewed(4,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 491
ASSERT_TEST(DS2.TimeViewed(4,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 492
ASSERT_TEST(DS2.TimeViewed(4,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 493
ASSERT_TEST(DS2.TimeViewed(4,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 494
ASSERT_TEST(DS2.TimeViewed(4,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==39);
//Line Number: 495
ASSERT_TEST(DS2.TimeViewed(4,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 496
ASSERT_TEST(DS2.TimeViewed(4,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 497
ASSERT_TEST(DS2.TimeViewed(4,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 498
ASSERT_TEST(DS2.TimeViewed(4,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 499
ASSERT_TEST(DS2.TimeViewed(4,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 500
ASSERT_TEST(DS2.TimeViewed(4,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 501
ASSERT_TEST(DS2.TimeViewed(4,16,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 502
ASSERT_TEST(DS2.TimeViewed(4,17,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 503
ASSERT_TEST(DS2.TimeViewed(4,18,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 504
ASSERT_TEST(DS2.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==80);
//Line Number: 505
ASSERT_TEST(DS2.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 506
ASSERT_TEST(DS2.TimeViewed(5,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 507
ASSERT_TEST(DS2.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 508
ASSERT_TEST(DS2.TimeViewed(5,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 509
ASSERT_TEST(DS2.TimeViewed(5,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 510
ASSERT_TEST(DS2.TimeViewed(5,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 511
ASSERT_TEST(DS2.TimeViewed(5,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 512
ASSERT_TEST(DS2.TimeViewed(5,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 513
ASSERT_TEST(DS2.TimeViewed(5,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 514
ASSERT_TEST(DS2.TimeViewed(5,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 515
ASSERT_TEST(DS2.TimeViewed(5,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 516
ASSERT_TEST(DS2.TimeViewed(5,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 517
ASSERT_TEST(DS2.TimeViewed(5,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 518
ASSERT_TEST(DS2.TimeViewed(5,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 519
ASSERT_TEST(DS2.TimeViewed(5,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 520
ASSERT_TEST(DS2.TimeViewed(5,16,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 521
ASSERT_TEST(DS2.TimeViewed(5,17,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 522
ASSERT_TEST(DS2.TimeViewed(5,18,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 523
ASSERT_TEST(DS2.TimeViewed(6,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 524
ASSERT_TEST(DS2.TimeViewed(6,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 525
ASSERT_TEST(DS2.TimeViewed(6,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 526
ASSERT_TEST(DS2.TimeViewed(6,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 527
ASSERT_TEST(DS2.TimeViewed(6,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 528
ASSERT_TEST(DS2.TimeViewed(6,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//Line Number: 529
ASSERT_TEST(DS2.TimeViewed(6,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 530
ASSERT_TEST(DS2.TimeViewed(6,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 531
ASSERT_TEST(DS2.TimeViewed(6,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 532
ASSERT_TEST(DS2.TimeViewed(6,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 533
ASSERT_TEST(DS2.TimeViewed(6,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 534
ASSERT_TEST(DS2.TimeViewed(6,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 535
ASSERT_TEST(DS2.TimeViewed(6,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 536
ASSERT_TEST(DS2.TimeViewed(7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 537
ASSERT_TEST(DS2.TimeViewed(7,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 538
ASSERT_TEST(DS2.TimeViewed(7,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 539
ASSERT_TEST(DS2.TimeViewed(7,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 540
ASSERT_TEST(DS2.TimeViewed(7,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 541
ASSERT_TEST(DS2.TimeViewed(7,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 542
ASSERT_TEST(DS2.TimeViewed(7,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==48);
//Line Number: 543
ASSERT_TEST(DS2.TimeViewed(7,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 544
ASSERT_TEST(DS2.TimeViewed(7,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 545
ASSERT_TEST(DS2.TimeViewed(7,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 546
ASSERT_TEST(DS2.TimeViewed(7,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 547
ASSERT_TEST(DS2.TimeViewed(7,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 548
ASSERT_TEST(DS2.TimeViewed(7,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 549
ASSERT_TEST(DS2.TimeViewed(7,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 550
ASSERT_TEST(DS2.TimeViewed(7,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 551
ASSERT_TEST(DS2.TimeViewed(7,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 552
ASSERT_TEST(DS2.TimeViewed(8,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==23);
//Line Number: 553
ASSERT_TEST(DS2.TimeViewed(8,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==1);
//Line Number: 554
ASSERT_TEST(DS2.TimeViewed(8,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 555
ASSERT_TEST(DS2.TimeViewed(8,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 556
ASSERT_TEST(DS2.TimeViewed(8,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 557
ASSERT_TEST(DS2.TimeViewed(8,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 558
ASSERT_TEST(DS2.TimeViewed(8,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 559
ASSERT_TEST(DS2.TimeViewed(8,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 560
ASSERT_TEST(DS2.TimeViewed(8,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 561
ASSERT_TEST(DS2.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==50);
//Line Number: 562
ASSERT_TEST(DS2.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 563
ASSERT_TEST(DS2.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==71);
//Line Number: 564
ASSERT_TEST(DS2.TimeViewed(9,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 565
ASSERT_TEST(DS2.TimeViewed(9,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 566
ASSERT_TEST(DS2.TimeViewed(9,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 567
ASSERT_TEST(DS2.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 568
ASSERT_TEST(DS2.TimeViewed(9,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 569
ASSERT_TEST(DS2.TimeViewed(9,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 570
ASSERT_TEST(DS2.TimeViewed(9,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 571
ASSERT_TEST(DS2.TimeViewed(9,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 572
ASSERT_TEST(DS2.TimeViewed(9,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 573
ASSERT_TEST(DS2.TimeViewed(9,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 574
ASSERT_TEST(DS2.TimeViewed(9,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 575
ASSERT_TEST(DS2.TimeViewed(9,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 576
ASSERT_TEST(DS2.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//Line Number: 577
ASSERT_TEST(DS2.TimeViewed(11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 578
ASSERT_TEST(DS2.TimeViewed(12,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 579
ASSERT_TEST(DS2.TimeViewed(12,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 580
ASSERT_TEST(DS2.TimeViewed(12,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 581
ASSERT_TEST(DS2.TimeViewed(12,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 582
ASSERT_TEST(DS2.TimeViewed(12,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 583
ASSERT_TEST(DS2.TimeViewed(12,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 584
ASSERT_TEST(DS2.TimeViewed(12,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 585
ASSERT_TEST(DS2.TimeViewed(12,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 586
ASSERT_TEST(DS2.TimeViewed(12,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 587
ASSERT_TEST(DS2.TimeViewed(12,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 588
ASSERT_TEST(DS2.TimeViewed(12,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 589
ASSERT_TEST(DS2.TimeViewed(12,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 590
ASSERT_TEST(DS2.TimeViewed(12,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 591
ASSERT_TEST(DS2.TimeViewed(12,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 592
ASSERT_TEST(DS2.TimeViewed(12,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 593
ASSERT_TEST(DS2.TimeViewed(12,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 594
ASSERT_TEST(DS2.TimeViewed(12,16,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 595
ASSERT_TEST(DS2.TimeViewed(15,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 596
ASSERT_TEST(DS2.TimeViewed(15,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 597
ASSERT_TEST(DS2.TimeViewed(15,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 598
ASSERT_TEST(DS2.TimeViewed(15,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 599
ASSERT_TEST(DS2.TimeViewed(15,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 600
ASSERT_TEST(DS2.TimeViewed(16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 601
ASSERT_TEST(DS2.TimeViewed(16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 602
ASSERT_TEST(DS2.TimeViewed(18,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 603
ASSERT_TEST(DS2.TimeViewed(18,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 604
ASSERT_TEST(DS2.TimeViewed(18,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 605
ASSERT_TEST(DS2.TimeViewed(18,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 606
ASSERT_TEST(DS2.TimeViewed(18,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 607
ASSERT_TEST(DS2.TimeViewed(18,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 608
ASSERT_TEST(DS2.TimeViewed(18,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 609
ASSERT_TEST(DS2.TimeViewed(18,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 610
ASSERT_TEST(DS2.TimeViewed(18,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 611
ASSERT_TEST(DS2.TimeViewed(18,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 612
ASSERT_TEST(DS2.TimeViewed(18,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 613
ASSERT_TEST(DS2.TimeViewed(18,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 614
ASSERT_TEST(DS2.TimeViewed(18,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 615
ASSERT_TEST(DS2.TimeViewed(18,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 616
ASSERT_TEST(DS2.TimeViewed(18,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 617
ASSERT_TEST(DS2.TimeViewed(20,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 618
ASSERT_TEST(DS2.TimeViewed(20,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 619
ASSERT_TEST(DS2.TimeViewed(20,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 620
ASSERT_TEST(DS2.TimeViewed(20,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 621
ASSERT_TEST(DS2.TimeViewed(20,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 622
ASSERT_TEST(DS2.TimeViewed(20,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 623
ASSERT_TEST(DS2.TimeViewed(20,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 624
ASSERT_TEST(DS2.TimeViewed(20,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 625
ASSERT_TEST(DS2.TimeViewed(20,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 626
ASSERT_TEST(DS2.TimeViewed(20,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 627
ASSERT_TEST(DS2.TimeViewed(20,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 628
ASSERT_TEST(DS2.TimeViewed(20,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 629
ASSERT_TEST(DS2.TimeViewed(20,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 630
ASSERT_TEST(DS2.TimeViewed(20,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 631
ASSERT_TEST(DS2.TimeViewed(20,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 632
ASSERT_TEST(DS2.TimeViewed(20,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
//Line Number: 633
ASSERT_TEST(DS2.TimeViewed(20,16,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==0);
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@END OF WATCH TIME @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
//Line Number: 634
CoursesManager DS3;
//Line Number: 635
ASSERT_TEST(DS3.AddCourse(11,18)==SUCCESS);
//Line Number: 636
ASSERT_TEST(DS3.WatchClass(11,7,14)==SUCCESS);
//Line Number: 637
ASSERT_TEST(DS3.TimeViewed(11,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 638
ASSERT_TEST(DS3.WatchClass(11,9,14)==SUCCESS);
//Line Number: 639
ASSERT_TEST(DS3.TimeViewed(11,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 640
ASSERT_TEST(DS3.WatchClass(11,6,14)==SUCCESS);
//Line Number: 641
ASSERT_TEST(DS3.TimeViewed(11,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 642
ASSERT_TEST(DS3.WatchClass(11,8,14)==SUCCESS);
//Line Number: 643
ASSERT_TEST(DS3.TimeViewed(11,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 644
ASSERT_TEST(DS3.WatchClass(11,10,14)==SUCCESS);
//Line Number: 645
ASSERT_TEST(DS3.TimeViewed(11,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 646
ASSERT_TEST(DS3.WatchClass(11,0,14)==SUCCESS);
//Line Number: 647
ASSERT_TEST(DS3.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 648
ASSERT_TEST(DS3.WatchClass(11,0,14)==SUCCESS);
//Line Number: 649
ASSERT_TEST(DS3.TimeViewed(11,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==28);
//Line Number: 650
ASSERT_TEST(DS3.WatchClass(11,5,14)==SUCCESS);
//Line Number: 651
ASSERT_TEST(DS3.TimeViewed(11,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 652
ASSERT_TEST(DS3.WatchClass(11,1,14)==SUCCESS);
//Line Number: 653
ASSERT_TEST(DS3.TimeViewed(11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 654
ASSERT_TEST(DS3.WatchClass(11,8,14)==SUCCESS);
//Line Number: 655
ASSERT_TEST(DS3.TimeViewed(11,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==28);
//Line Number: 656
ASSERT_TEST(DS3.WatchClass(11,2,14)==SUCCESS);
//Line Number: 657
ASSERT_TEST(DS3.TimeViewed(11,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
classes=new int[0];
courses=new int[0];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 658
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 659
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 660
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 661
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 662
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 663
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 664
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 665
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 666
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 667
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 668
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 669
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 670
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 671
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 672
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 673
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 674
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 675
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 676
ASSERT_TEST(DS3.AddCourse(9,17)==SUCCESS);
//Line Number: 677
ASSERT_TEST(DS3.WatchClass(9,2,17)==SUCCESS);
//Line Number: 678
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 679
ASSERT_TEST(DS3.WatchClass(9,2,17)==SUCCESS);
//Line Number: 680
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 681
ASSERT_TEST(DS3.WatchClass(9,1,17)==SUCCESS);
//Line Number: 682
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 683
ASSERT_TEST(DS3.AddCourse(15,18)==SUCCESS);
classes=new int[2];
courses=new int[2];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 684
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 685
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 686
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 687
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 688
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 689
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 690
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 691
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 692
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 693
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 694
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 695
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 696
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 697
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 698
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 699
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 700
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 701
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 702
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 703
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 704
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 705
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 706
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 707
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 708
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 709
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 710
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 711
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 712
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 713
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 714
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 715
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 716
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 717
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 718
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 719
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 720
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 721
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 722
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 723
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 724
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 725
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 726
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 727
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 728
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 729
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 730
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 731
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 732
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 733
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 734
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 735
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 736
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 737
ASSERT_TEST(DS3.AddCourse(9,16)==FAILURE);
//Line Number: 738
ASSERT_TEST(DS3.WatchClass(9,10,4)==SUCCESS);
//Line Number: 739
ASSERT_TEST(DS3.TimeViewed(9,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 740
ASSERT_TEST(DS3.WatchClass(9,6,4)==SUCCESS);
//Line Number: 741
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 742
ASSERT_TEST(DS3.WatchClass(9,3,4)==SUCCESS);
//Line Number: 743
ASSERT_TEST(DS3.TimeViewed(9,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 744
ASSERT_TEST(DS3.WatchClass(9,10,4)==SUCCESS);
//Line Number: 745
ASSERT_TEST(DS3.TimeViewed(9,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 746
ASSERT_TEST(DS3.WatchClass(9,10,4)==SUCCESS);
//Line Number: 747
ASSERT_TEST(DS3.TimeViewed(9,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 748
ASSERT_TEST(DS3.WatchClass(9,2,4)==SUCCESS);
//Line Number: 749
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 750
ASSERT_TEST(DS3.WatchClass(9,8,4)==SUCCESS);
//Line Number: 751
ASSERT_TEST(DS3.TimeViewed(9,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 752
ASSERT_TEST(DS3.WatchClass(9,10,4)==SUCCESS);
//Line Number: 753
ASSERT_TEST(DS3.TimeViewed(9,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 754
ASSERT_TEST(DS3.WatchClass(9,5,4)==SUCCESS);
//Line Number: 755
ASSERT_TEST(DS3.TimeViewed(9,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==4);
//Line Number: 756
ASSERT_TEST(DS3.WatchClass(9,1,4)==SUCCESS);
//Line Number: 757
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 758
ASSERT_TEST(DS3.WatchClass(9,5,4)==SUCCESS);
//Line Number: 759
ASSERT_TEST(DS3.TimeViewed(9,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
classes=new int[3];
courses=new int[3];
//Line Number: 760
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==FAILURE);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 761
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 762
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 763
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 764
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 765
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 766
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 767
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 768
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 769
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 770
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 771
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 772
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 773
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 774
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 775
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 776
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 777
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 778
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 779
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 780
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 781
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 782
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 783
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 784
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 785
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 786
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 787
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 788
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 789
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 790
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 791
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 792
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 793
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 794
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 795
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 796
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 797
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 798
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 799
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 800
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 801
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 802
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 803
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 804
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 805
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 806
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 807
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 808
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 809
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 810
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 811
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 812
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 813
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 814
ASSERT_TEST(DS3.AddCourse(11,19)==FAILURE);
//Line Number: 815
ASSERT_TEST(DS3.WatchClass(11,15,5)==SUCCESS);
//Line Number: 816
ASSERT_TEST(DS3.TimeViewed(11,15,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 817
ASSERT_TEST(DS3.WatchClass(11,8,5)==SUCCESS);
//Line Number: 818
ASSERT_TEST(DS3.TimeViewed(11,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==33);
//Line Number: 819
ASSERT_TEST(DS3.WatchClass(11,2,5)==SUCCESS);
//Line Number: 820
ASSERT_TEST(DS3.TimeViewed(11,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 821
ASSERT_TEST(DS3.WatchClass(11,13,5)==SUCCESS);
//Line Number: 822
ASSERT_TEST(DS3.TimeViewed(11,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 823
ASSERT_TEST(DS3.WatchClass(11,3,5)==SUCCESS);
//Line Number: 824
ASSERT_TEST(DS3.TimeViewed(11,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 825
ASSERT_TEST(DS3.WatchClass(11,8,5)==SUCCESS);
//Line Number: 826
ASSERT_TEST(DS3.TimeViewed(11,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 827
ASSERT_TEST(DS3.WatchClass(11,17,5)==SUCCESS);
//Line Number: 828
ASSERT_TEST(DS3.TimeViewed(11,17,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 829
ASSERT_TEST(DS3.WatchClass(11,8,5)==SUCCESS);
//Line Number: 830
ASSERT_TEST(DS3.TimeViewed(11,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==43);
//Line Number: 831
ASSERT_TEST(DS3.WatchClass(11,1,5)==SUCCESS);
//Line Number: 832
ASSERT_TEST(DS3.TimeViewed(11,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 833
ASSERT_TEST(DS3.WatchClass(11,7,5)==SUCCESS);
//Line Number: 834
ASSERT_TEST(DS3.TimeViewed(11,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 835
ASSERT_TEST(DS3.WatchClass(11,11,5)==SUCCESS);
//Line Number: 836
ASSERT_TEST(DS3.TimeViewed(11,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 837
ASSERT_TEST(DS3.WatchClass(11,14,5)==SUCCESS);
//Line Number: 838
ASSERT_TEST(DS3.TimeViewed(11,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
//Line Number: 839
ASSERT_TEST(DS3.WatchClass(11,9,5)==SUCCESS);
//Line Number: 840
ASSERT_TEST(DS3.TimeViewed(11,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 841
ASSERT_TEST(DS3.WatchClass(11,17,5)==SUCCESS);
//Line Number: 842
ASSERT_TEST(DS3.TimeViewed(11,17,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 843
ASSERT_TEST(DS3.WatchClass(11,3,5)==SUCCESS);
//Line Number: 844
ASSERT_TEST(DS3.TimeViewed(11,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 845
ASSERT_TEST(DS3.WatchClass(11,9,5)==SUCCESS);
//Line Number: 846
ASSERT_TEST(DS3.TimeViewed(11,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 847
ASSERT_TEST(DS3.WatchClass(11,17,5)==SUCCESS);
//Line Number: 848
ASSERT_TEST(DS3.TimeViewed(11,17,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 849
ASSERT_TEST(DS3.WatchClass(11,12,5)==SUCCESS);
//Line Number: 850
ASSERT_TEST(DS3.TimeViewed(11,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==5);
classes=new int[4];
courses=new int[4];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 851
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 852
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 853
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 854
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 855
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 856
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 857
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 858
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 859
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 860
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 861
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 862
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 863
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 864
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 865
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 866
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 867
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 868
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 869
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 870
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 871
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 872
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 873
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 874
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 875
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 876
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 877
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 878
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 879
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 880
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 881
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 882
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 883
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 884
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 885
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 886
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 887
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 888
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 889
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 890
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 891
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 892
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 893
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 894
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 895
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 896
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 897
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 898
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 899
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 900
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 901
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 902
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 903
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 904
ASSERT_TEST(DS3.AddCourse(12,1)==SUCCESS);
//Line Number: 905
ASSERT_TEST(DS3.AddCourse(15,9)==FAILURE);
//Line Number: 906
ASSERT_TEST(DS3.WatchClass(15,6,13)==SUCCESS);
//Line Number: 907
ASSERT_TEST(DS3.TimeViewed(15,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 908
ASSERT_TEST(DS3.WatchClass(15,6,13)==SUCCESS);
//Line Number: 909
ASSERT_TEST(DS3.TimeViewed(15,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 910
ASSERT_TEST(DS3.WatchClass(15,7,13)==SUCCESS);
//Line Number: 911
ASSERT_TEST(DS3.TimeViewed(15,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 912
ASSERT_TEST(DS3.WatchClass(15,7,13)==SUCCESS);
//Line Number: 913
ASSERT_TEST(DS3.TimeViewed(15,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 914
ASSERT_TEST(DS3.WatchClass(15,2,13)==SUCCESS);
//Line Number: 915
ASSERT_TEST(DS3.TimeViewed(15,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 916
ASSERT_TEST(DS3.WatchClass(15,6,13)==SUCCESS);
//Line Number: 917
ASSERT_TEST(DS3.TimeViewed(15,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==39);
//Line Number: 918
ASSERT_TEST(DS3.WatchClass(15,0,13)==SUCCESS);
//Line Number: 919
ASSERT_TEST(DS3.TimeViewed(15,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 920
ASSERT_TEST(DS3.WatchClass(15,0,13)==SUCCESS);
//Line Number: 921
ASSERT_TEST(DS3.TimeViewed(15,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
classes=new int[6];
courses=new int[6];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 922
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 923
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 924
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 925
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 926
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 927
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 928
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 929
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 930
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 931
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 932
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 933
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 934
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 935
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 936
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 937
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 938
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 939
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 940
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 941
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 942
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 943
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 944
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 945
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 946
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 947
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 948
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 949
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 950
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 951
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 952
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 953
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 954
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 955
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 956
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 957
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 958
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 959
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 960
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 961
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 962
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 963
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 964
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 965
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 966
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 967
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 968
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 969
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 970
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 971
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 972
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 973
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 974
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 975
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 976
ASSERT_TEST(DS3.AddCourse(20,4)==SUCCESS);
//Line Number: 977
ASSERT_TEST(DS3.WatchClass(20,0,19)==SUCCESS);
//Line Number: 978
ASSERT_TEST(DS3.TimeViewed(20,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==19);
//Line Number: 979
ASSERT_TEST(DS3.WatchClass(20,0,19)==SUCCESS);
//Line Number: 980
ASSERT_TEST(DS3.TimeViewed(20,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==38);
//Line Number: 981
ASSERT_TEST(DS3.RemoveCourse(8)==FAILURE);
//Line Number: 982
ASSERT_TEST(DS3.WatchClass(8,9,2)==FAILURE);
//Line Number: 983
ASSERT_TEST(DS3.TimeViewed(8,9,timeviewed)==FAILURE);
//Line Number: 984
ASSERT_TEST(DS3.AddCourse(13,12)==SUCCESS);
//Line Number: 985
ASSERT_TEST(DS3.WatchClass(13,9,13)==SUCCESS);
//Line Number: 986
ASSERT_TEST(DS3.TimeViewed(13,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 987
ASSERT_TEST(DS3.WatchClass(13,1,13)==SUCCESS);
//Line Number: 988
ASSERT_TEST(DS3.TimeViewed(13,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 989
ASSERT_TEST(DS3.WatchClass(13,2,13)==SUCCESS);
//Line Number: 990
ASSERT_TEST(DS3.TimeViewed(13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 991
ASSERT_TEST(DS3.WatchClass(13,5,13)==SUCCESS);
//Line Number: 992
ASSERT_TEST(DS3.TimeViewed(13,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 993
ASSERT_TEST(DS3.WatchClass(13,3,13)==SUCCESS);
//Line Number: 994
ASSERT_TEST(DS3.TimeViewed(13,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 995
ASSERT_TEST(DS3.WatchClass(13,9,13)==SUCCESS);
//Line Number: 996
ASSERT_TEST(DS3.TimeViewed(13,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 997
ASSERT_TEST(DS3.WatchClass(13,1,13)==SUCCESS);
//Line Number: 998
ASSERT_TEST(DS3.TimeViewed(13,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 999
ASSERT_TEST(DS3.WatchClass(13,7,13)==SUCCESS);
//Line Number: 1000
ASSERT_TEST(DS3.TimeViewed(13,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1001
ASSERT_TEST(DS3.WatchClass(13,0,13)==SUCCESS);
//Line Number: 1002
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1003
ASSERT_TEST(DS3.WatchClass(13,4,13)==SUCCESS);
//Line Number: 1004
ASSERT_TEST(DS3.TimeViewed(13,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1005
ASSERT_TEST(DS3.AddCourse(2,15)==SUCCESS);
//Line Number: 1006
ASSERT_TEST(DS3.WatchClass(2,0,15)==SUCCESS);
//Line Number: 1007
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1008
ASSERT_TEST(DS3.WatchClass(2,4,15)==SUCCESS);
//Line Number: 1009
ASSERT_TEST(DS3.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1010
ASSERT_TEST(DS3.WatchClass(2,2,15)==SUCCESS);
//Line Number: 1011
ASSERT_TEST(DS3.TimeViewed(2,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1012
ASSERT_TEST(DS3.WatchClass(2,7,15)==SUCCESS);
//Line Number: 1013
ASSERT_TEST(DS3.TimeViewed(2,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1014
ASSERT_TEST(DS3.WatchClass(2,3,15)==SUCCESS);
//Line Number: 1015
ASSERT_TEST(DS3.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1016
ASSERT_TEST(DS3.WatchClass(2,1,15)==SUCCESS);
//Line Number: 1017
ASSERT_TEST(DS3.TimeViewed(2,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1018
ASSERT_TEST(DS3.WatchClass(2,3,15)==SUCCESS);
//Line Number: 1019
ASSERT_TEST(DS3.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==30);
//Line Number: 1020
ASSERT_TEST(DS3.WatchClass(2,8,15)==SUCCESS);
//Line Number: 1021
ASSERT_TEST(DS3.TimeViewed(2,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1022
ASSERT_TEST(DS3.WatchClass(2,5,15)==SUCCESS);
//Line Number: 1023
ASSERT_TEST(DS3.TimeViewed(2,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 1024
ASSERT_TEST(DS3.AddCourse(5,10)==SUCCESS);
//Line Number: 1025
ASSERT_TEST(DS3.WatchClass(5,5,7)==SUCCESS);
//Line Number: 1026
ASSERT_TEST(DS3.TimeViewed(5,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 1027
ASSERT_TEST(DS3.WatchClass(5,1,7)==SUCCESS);
//Line Number: 1028
ASSERT_TEST(DS3.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 1029
ASSERT_TEST(DS3.WatchClass(5,3,7)==SUCCESS);
//Line Number: 1030
ASSERT_TEST(DS3.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 1031
ASSERT_TEST(DS3.WatchClass(5,0,7)==SUCCESS);
//Line Number: 1032
ASSERT_TEST(DS3.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 1033
ASSERT_TEST(DS3.WatchClass(5,1,7)==SUCCESS);
//Line Number: 1034
ASSERT_TEST(DS3.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 1035
ASSERT_TEST(DS3.WatchClass(5,8,7)==SUCCESS);
//Line Number: 1036
ASSERT_TEST(DS3.TimeViewed(5,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 1037
ASSERT_TEST(DS3.WatchClass(5,0,7)==SUCCESS);
//Line Number: 1038
ASSERT_TEST(DS3.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==14);
//Line Number: 1039
ASSERT_TEST(DS3.WatchClass(5,0,7)==SUCCESS);
//Line Number: 1040
ASSERT_TEST(DS3.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==21);
//Line Number: 1041
ASSERT_TEST(DS3.WatchClass(5,0,7)==SUCCESS);
//Line Number: 1042
ASSERT_TEST(DS3.TimeViewed(5,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==28);
//Line Number: 1043
ASSERT_TEST(DS3.AddCourse(3,18)==SUCCESS);
//Line Number: 1044
ASSERT_TEST(DS3.WatchClass(3,2,13)==SUCCESS);
//Line Number: 1045
ASSERT_TEST(DS3.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1046
ASSERT_TEST(DS3.WatchClass(3,5,13)==SUCCESS);
//Line Number: 1047
ASSERT_TEST(DS3.TimeViewed(3,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1048
ASSERT_TEST(DS3.WatchClass(3,5,13)==SUCCESS);
//Line Number: 1049
ASSERT_TEST(DS3.TimeViewed(3,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 1050
ASSERT_TEST(DS3.WatchClass(3,0,13)==SUCCESS);
//Line Number: 1051
ASSERT_TEST(DS3.TimeViewed(3,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1052
ASSERT_TEST(DS3.WatchClass(3,2,13)==SUCCESS);
//Line Number: 1053
ASSERT_TEST(DS3.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 1054
ASSERT_TEST(DS3.WatchClass(3,9,13)==SUCCESS);
//Line Number: 1055
ASSERT_TEST(DS3.TimeViewed(3,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1056
ASSERT_TEST(DS3.WatchClass(3,2,13)==SUCCESS);
//Line Number: 1057
ASSERT_TEST(DS3.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==39);
//Line Number: 1058
ASSERT_TEST(DS3.WatchClass(3,10,13)==SUCCESS);
//Line Number: 1059
ASSERT_TEST(DS3.TimeViewed(3,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1060
ASSERT_TEST(DS3.WatchClass(3,8,13)==SUCCESS);
//Line Number: 1061
ASSERT_TEST(DS3.TimeViewed(3,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1062
ASSERT_TEST(DS3.WatchClass(3,4,13)==SUCCESS);
//Line Number: 1063
ASSERT_TEST(DS3.TimeViewed(3,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1064
ASSERT_TEST(DS3.WatchClass(3,6,13)==SUCCESS);
//Line Number: 1065
ASSERT_TEST(DS3.TimeViewed(3,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1066
ASSERT_TEST(DS3.WatchClass(3,10,13)==SUCCESS);
//Line Number: 1067
ASSERT_TEST(DS3.TimeViewed(3,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 1068
ASSERT_TEST(DS3.WatchClass(3,14,13)==SUCCESS);
//Line Number: 1069
ASSERT_TEST(DS3.TimeViewed(3,14,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1070
ASSERT_TEST(DS3.WatchClass(3,2,13)==SUCCESS);
//Line Number: 1071
ASSERT_TEST(DS3.TimeViewed(3,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==52);
//Line Number: 1072
ASSERT_TEST(DS3.WatchClass(3,1,13)==SUCCESS);
//Line Number: 1073
ASSERT_TEST(DS3.TimeViewed(3,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1074
ASSERT_TEST(DS3.WatchClass(3,9,13)==SUCCESS);
//Line Number: 1075
ASSERT_TEST(DS3.TimeViewed(3,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==26);
//Line Number: 1076
ASSERT_TEST(DS3.RemoveCourse(16)==FAILURE);
//Line Number: 1077
ASSERT_TEST(DS3.WatchClass(16,2,12)==FAILURE);
//Line Number: 1078
ASSERT_TEST(DS3.TimeViewed(16,2,timeviewed)==FAILURE);
classes=new int[13];
courses=new int[13];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1079
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1080
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1081
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1082
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1083
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1084
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1085
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1086
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1087
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1088
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1089
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1090
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1091
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1092
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1093
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1094
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1095
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1096
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1097
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1098
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1099
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1100
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1101
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1102
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1103
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1104
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1105
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1106
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1107
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1108
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1109
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1110
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1111
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1112
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1113
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1114
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1115
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1116
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1117
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1118
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1119
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1120
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1121
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1122
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1123
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1124
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1125
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1126
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1127
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1128
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1129
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1130
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1131
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1132
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1133
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1134
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1135
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1136
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1137
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1138
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1139
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1140
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1141
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1142
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1143
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1144
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1145
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1146
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1147
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1148
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1149
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1150
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1151
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1152
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1153
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1154
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1155
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1156
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1157
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1158
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1159
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1160
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1161
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1162
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1163
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1164
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1165
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1166
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1167
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1168
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1169
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1170
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1171
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1172
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1173
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1174
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1175
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1176
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1177
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1178
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1179
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1180
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1181
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1182
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1183
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1184
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1185
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1186
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1187
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1188
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1189
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 1190
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 1191
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 1192
ASSERT_TEST(DS3.AddCourse(19,9)==SUCCESS);
//Line Number: 1193
ASSERT_TEST(DS3.WatchClass(19,0,8)==SUCCESS);
//Line Number: 1194
ASSERT_TEST(DS3.TimeViewed(19,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 1195
ASSERT_TEST(DS3.RemoveCourse(8)==FAILURE);
//Line Number: 1196
ASSERT_TEST(DS3.WatchClass(8,9,9)==FAILURE);
//Line Number: 1197
ASSERT_TEST(DS3.TimeViewed(8,9,timeviewed)==FAILURE);
//Line Number: 1198
ASSERT_TEST(DS3.AddCourse(9,14)==FAILURE);
//Line Number: 1199
ASSERT_TEST(DS3.WatchClass(9,2,4)==SUCCESS);
//Line Number: 1200
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==42);
//Line Number: 1201
ASSERT_TEST(DS3.WatchClass(9,1,4)==SUCCESS);
//Line Number: 1202
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==25);
//Line Number: 1203
ASSERT_TEST(DS3.WatchClass(9,2,4)==SUCCESS);
//Line Number: 1204
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==46);
//Line Number: 1205
ASSERT_TEST(DS3.RemoveCourse(20)==SUCCESS);
//Line Number: 1206
ASSERT_TEST(DS3.WatchClass(20,2,16)==FAILURE);
//Line Number: 1207
ASSERT_TEST(DS3.TimeViewed(20,2,timeviewed)==FAILURE);
classes=new int[17];
courses=new int[17];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1208
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1209
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1210
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1211
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1212
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1213
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1214
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1215
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1216
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1217
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1218
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1219
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1220
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1221
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1222
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1223
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1224
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1225
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1226
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1227
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1228
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1229
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1230
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1231
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1232
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1233
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1234
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1235
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1236
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1237
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1238
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1239
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1240
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1241
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1242
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1243
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1244
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1245
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1246
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1247
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1248
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1249
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1250
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1251
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1252
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1253
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1254
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1255
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1256
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1257
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1258
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1259
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1260
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1261
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1262
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1263
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1264
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1265
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1266
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1267
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1268
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1269
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1270
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1271
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1272
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1273
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1274
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1275
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1276
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1277
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1278
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1279
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1280
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1281
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1282
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1283
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1284
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1285
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1286
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1287
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1288
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1289
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1290
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1291
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1292
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1293
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1294
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1295
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1296
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1297
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1298
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1299
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1300
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1301
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1302
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1303
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1304
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1305
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1306
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1307
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1308
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1309
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1310
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1311
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1312
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1313
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1314
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1315
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1316
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1317
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1318
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 1319
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 1320
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 1321
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 1322
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 1323
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 1324
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 1325
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 1326
ASSERT_TEST(DS3.RemoveCourse(8)==FAILURE);
//Line Number: 1327
ASSERT_TEST(DS3.WatchClass(8,5,19)==FAILURE);
//Line Number: 1328
ASSERT_TEST(DS3.TimeViewed(8,5,timeviewed)==FAILURE);
classes=new int[18];
courses=new int[18];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1329
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1330
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1331
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1332
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1333
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1334
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1335
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1336
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1337
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1338
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1339
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1340
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1341
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1342
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1343
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1344
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1345
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1346
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1347
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1348
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1349
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1350
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1351
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1352
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1353
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1354
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1355
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1356
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1357
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1358
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1359
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1360
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1361
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1362
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1363
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1364
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1365
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1366
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1367
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1368
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1369
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1370
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1371
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1372
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1373
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1374
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1375
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1376
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1377
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1378
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1379
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1380
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1381
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1382
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1383
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1384
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1385
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1386
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1387
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1388
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1389
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1390
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1391
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1392
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1393
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1394
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1395
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1396
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1397
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1398
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1399
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1400
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1401
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1402
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1403
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1404
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1405
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1406
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1407
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1408
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1409
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1410
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1411
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1412
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1413
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1414
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1415
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1416
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1417
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1418
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1419
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1420
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1421
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1422
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1423
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1424
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1425
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1426
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1427
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1428
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1429
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1430
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1431
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1432
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1433
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1434
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1435
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1436
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1437
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1438
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1439
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 1440
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 1441
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 1442
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 1443
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 1444
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 1445
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 1446
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 1447
ASSERT_TEST(DS3.AddCourse(2,10)==FAILURE);
//Line Number: 1448
ASSERT_TEST(DS3.WatchClass(2,3,19)==SUCCESS);
//Line Number: 1449
ASSERT_TEST(DS3.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==49);
//Line Number: 1450
ASSERT_TEST(DS3.WatchClass(2,0,19)==SUCCESS);
//Line Number: 1451
ASSERT_TEST(DS3.TimeViewed(2,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 1452
ASSERT_TEST(DS3.WatchClass(2,4,19)==SUCCESS);
//Line Number: 1453
ASSERT_TEST(DS3.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 1454
ASSERT_TEST(DS3.WatchClass(2,4,19)==SUCCESS);
//Line Number: 1455
ASSERT_TEST(DS3.TimeViewed(2,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==53);
//Line Number: 1456
ASSERT_TEST(DS3.WatchClass(2,5,19)==SUCCESS);
//Line Number: 1457
ASSERT_TEST(DS3.TimeViewed(2,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 1458
ASSERT_TEST(DS3.WatchClass(2,3,19)==SUCCESS);
//Line Number: 1459
ASSERT_TEST(DS3.TimeViewed(2,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==68);
//Line Number: 1460
ASSERT_TEST(DS3.RemoveCourse(14)==FAILURE);
//Line Number: 1461
ASSERT_TEST(DS3.WatchClass(14,1,3)==FAILURE);
//Line Number: 1462
ASSERT_TEST(DS3.TimeViewed(14,1,timeviewed)==FAILURE);
//Line Number: 1463
ASSERT_TEST(DS3.AddCourse(9,12)==FAILURE);
//Line Number: 1464
ASSERT_TEST(DS3.WatchClass(9,2,8)==SUCCESS);
//Line Number: 1465
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==54);
//Line Number: 1466
ASSERT_TEST(DS3.WatchClass(9,0,8)==SUCCESS);
//Line Number: 1467
ASSERT_TEST(DS3.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 1468
ASSERT_TEST(DS3.WatchClass(9,1,8)==SUCCESS);
//Line Number: 1469
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==33);
//Line Number: 1470
ASSERT_TEST(DS3.WatchClass(9,5,8)==SUCCESS);
//Line Number: 1471
ASSERT_TEST(DS3.TimeViewed(9,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 1472
ASSERT_TEST(DS3.WatchClass(9,2,8)==SUCCESS);
//Line Number: 1473
ASSERT_TEST(DS3.TimeViewed(9,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==62);
//Line Number: 1474
ASSERT_TEST(DS3.WatchClass(9,0,8)==SUCCESS);
//Line Number: 1475
ASSERT_TEST(DS3.TimeViewed(9,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 1476
ASSERT_TEST(DS3.AddCourse(4,1)==SUCCESS);
classes=new int[22];
courses=new int[22];
//Line Number: 1477
ASSERT_TEST(DS3.GetMostViewedClasses(-1,courses,classes)==INVALID_INPUT);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1478
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1479
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1480
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1481
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1482
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1483
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1484
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1485
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1486
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1487
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1488
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1489
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1490
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1491
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1492
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1493
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1494
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1495
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1496
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1497
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1498
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1499
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1500
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1501
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1502
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1503
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1504
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1505
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1506
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1507
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1508
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1509
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1510
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1511
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1512
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1513
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1514
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1515
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1516
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1517
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1518
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1519
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1520
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1521
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1522
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1523
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1524
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1525
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1526
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1527
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1528
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1529
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1530
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1531
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1532
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1533
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1534
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1535
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1536
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1537
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1538
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1539
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1540
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1541
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1542
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1543
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1544
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1545
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1546
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1547
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1548
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1549
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1550
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1551
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1552
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1553
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1554
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1555
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1556
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1557
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1558
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1559
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1560
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1561
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1562
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1563
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1564
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1565
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1566
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1567
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1568
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1569
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1570
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1571
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1572
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1573
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1574
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1575
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1576
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1577
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1578
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1579
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1580
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1581
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1582
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1583
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1584
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1585
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1586
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1587
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1588
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 1589
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 1590
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 1591
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 1592
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 1593
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 1594
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 1595
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 1596
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 1597
ASSERT_TEST(DS3.AddCourse(2,7)==FAILURE);
classes=new int[23];
courses=new int[23];
//Line Number: 1598
ASSERT_TEST(DS3.GetMostViewedClasses(0,courses,classes)==INVALID_INPUT);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1599
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1600
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1601
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1602
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1603
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1604
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1605
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1606
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1607
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1608
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1609
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1610
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1611
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1612
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1613
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1614
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1615
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1616
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1617
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1618
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1619
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1620
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1621
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1622
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1623
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1624
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1625
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1626
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1627
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1628
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1629
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1630
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1631
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1632
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1633
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1634
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1635
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1636
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1637
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1638
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1639
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1640
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1641
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1642
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1643
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1644
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1645
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1646
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1647
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1648
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1649
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1650
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1651
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1652
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1653
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1654
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1655
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1656
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1657
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1658
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1659
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1660
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1661
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1662
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1663
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1664
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1665
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1666
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1667
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1668
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1669
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1670
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1671
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1672
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1673
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1674
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1675
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1676
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1677
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1678
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1679
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1680
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1681
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1682
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1683
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1684
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1685
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1686
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1687
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1688
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1689
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1690
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1691
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1692
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1693
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1694
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1695
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1696
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1697
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1698
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1699
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1700
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1701
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1702
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1703
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1704
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1705
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1706
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1707
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1708
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1709
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 1710
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 1711
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 1712
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 1713
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 1714
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 1715
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 1716
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 1717
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 1718
ASSERT_TEST(DS3.AddCourse(17,13)==SUCCESS);
//Line Number: 1719
ASSERT_TEST(DS3.AddCourse(14,7)==SUCCESS);
//Line Number: 1720
ASSERT_TEST(DS3.WatchClass(14,2,13)==SUCCESS);
//Line Number: 1721
ASSERT_TEST(DS3.TimeViewed(14,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1722
ASSERT_TEST(DS3.WatchClass(14,0,13)==SUCCESS);
//Line Number: 1723
ASSERT_TEST(DS3.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1724
ASSERT_TEST(DS3.WatchClass(14,1,13)==SUCCESS);
//Line Number: 1725
ASSERT_TEST(DS3.TimeViewed(14,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
classes=new int[25];
courses=new int[25];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1726
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1727
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1728
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1729
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1730
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1731
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1732
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1733
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1734
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1735
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1736
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1737
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1738
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1739
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1740
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1741
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1742
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1743
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1744
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1745
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1746
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1747
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1748
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1749
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1750
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1751
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1752
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1753
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1754
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1755
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1756
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1757
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1758
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1759
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1760
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1761
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1762
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1763
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1764
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1765
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1766
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1767
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1768
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1769
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1770
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1771
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1772
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1773
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1774
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1775
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1776
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1777
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1778
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1779
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1780
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1781
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1782
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1783
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1784
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1785
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1786
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1787
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1788
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1789
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1790
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1791
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1792
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1793
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1794
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1795
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1796
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1797
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1798
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1799
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1800
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1801
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1802
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1803
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1804
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1805
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1806
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1807
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1808
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1809
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1810
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1811
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1812
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1813
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1814
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1815
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1816
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1817
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1818
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1819
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1820
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1821
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1822
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1823
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1824
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1825
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1826
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1827
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1828
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1829
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1830
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1831
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1832
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1833
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1834
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1835
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1836
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 1837
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 1838
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 1839
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 1840
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 1841
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 1842
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 1843
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 1844
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 1845
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 1846
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 1847
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 1848
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 1849
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 1850
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 1851
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 1852
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 1853
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 1854
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 1855
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 1856
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 1857
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 1858
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 1859
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 1860
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 1861
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 1862
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 1863
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 1864
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 1865
ASSERT_TEST(DS3.AddCourse(14,12)==FAILURE);
//Line Number: 1866
ASSERT_TEST(DS3.WatchClass(14,1,19)==SUCCESS);
//Line Number: 1867
ASSERT_TEST(DS3.TimeViewed(14,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 1868
ASSERT_TEST(DS3.WatchClass(14,0,19)==SUCCESS);
//Line Number: 1869
ASSERT_TEST(DS3.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==32);
//Line Number: 1870
ASSERT_TEST(DS3.AddCourse(13,3)==FAILURE);
//Line Number: 1871
ASSERT_TEST(DS3.WatchClass(13,1,11)==SUCCESS);
//Line Number: 1872
ASSERT_TEST(DS3.TimeViewed(13,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==37);
//Line Number: 1873
ASSERT_TEST(DS3.WatchClass(13,0,11)==SUCCESS);
//Line Number: 1874
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 1875
ASSERT_TEST(DS3.AddCourse(5,17)==FAILURE);
//Line Number: 1876
ASSERT_TEST(DS3.WatchClass(5,5,2)==SUCCESS);
//Line Number: 1877
ASSERT_TEST(DS3.TimeViewed(5,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 1878
ASSERT_TEST(DS3.WatchClass(5,5,2)==SUCCESS);
//Line Number: 1879
ASSERT_TEST(DS3.TimeViewed(5,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
//Line Number: 1880
ASSERT_TEST(DS3.WatchClass(5,5,2)==SUCCESS);
//Line Number: 1881
ASSERT_TEST(DS3.TimeViewed(5,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==13);
//Line Number: 1882
ASSERT_TEST(DS3.WatchClass(5,3,2)==SUCCESS);
//Line Number: 1883
ASSERT_TEST(DS3.TimeViewed(5,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==9);
//Line Number: 1884
ASSERT_TEST(DS3.WatchClass(5,1,2)==SUCCESS);
//Line Number: 1885
ASSERT_TEST(DS3.TimeViewed(5,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 1886
ASSERT_TEST(DS3.WatchClass(5,4,2)==SUCCESS);
//Line Number: 1887
ASSERT_TEST(DS3.TimeViewed(5,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
classes=new int[28];
courses=new int[28];
//Line Number: 1888
ASSERT_TEST(DS3.GetMostViewedClasses(-4,courses,classes)==INVALID_INPUT);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 1889
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 1890
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 1891
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 1892
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 1893
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 1894
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 1895
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 1896
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 1897
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 1898
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 1899
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 1900
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 1901
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 1902
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 1903
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 1904
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 1905
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 1906
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 1907
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 1908
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 1909
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 1910
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 1911
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 1912
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 1913
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 1914
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 1915
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 1916
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 1917
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 1918
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 1919
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 1920
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 1921
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 1922
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 1923
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 1924
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 1925
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 1926
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 1927
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 1928
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 1929
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 1930
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 1931
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 1932
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 1933
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 1934
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 1935
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 1936
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 1937
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 1938
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 1939
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 1940
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 1941
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 1942
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 1943
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 1944
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 1945
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 1946
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 1947
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 1948
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 1949
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 1950
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 1951
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 1952
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 1953
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 1954
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 1955
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 1956
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 1957
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 1958
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 1959
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 1960
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 1961
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 1962
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 1963
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 1964
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 1965
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 1966
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 1967
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 1968
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 1969
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 1970
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 1971
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 1972
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 1973
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 1974
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 1975
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 1976
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 1977
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 1978
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 1979
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 1980
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 1981
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 1982
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 1983
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 1984
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 1985
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 1986
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 1987
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 1988
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 1989
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 1990
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 1991
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 1992
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 1993
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 1994
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 1995
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 1996
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 1997
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 1998
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 1999
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 2000
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 2001
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 2002
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 2003
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 2004
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 2005
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 2006
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 2007
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 2008
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 2009
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 2010
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 2011
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 2012
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 2013
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 2014
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 2015
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 2016
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 2017
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 2018
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 2019
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 2020
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 2021
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 2022
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 2023
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 2024
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 2025
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 2026
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 2027
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 2028
ASSERT_TEST(DS3.AddCourse(16,18)==SUCCESS);
//Line Number: 2029
ASSERT_TEST(DS3.WatchClass(16,1,6)==SUCCESS);
//Line Number: 2030
ASSERT_TEST(DS3.TimeViewed(16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2031
ASSERT_TEST(DS3.WatchClass(16,7,6)==SUCCESS);
//Line Number: 2032
ASSERT_TEST(DS3.TimeViewed(16,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2033
ASSERT_TEST(DS3.WatchClass(16,1,6)==SUCCESS);
//Line Number: 2034
ASSERT_TEST(DS3.TimeViewed(16,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 2035
ASSERT_TEST(DS3.WatchClass(16,2,6)==SUCCESS);
//Line Number: 2036
ASSERT_TEST(DS3.TimeViewed(16,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2037
ASSERT_TEST(DS3.WatchClass(16,10,6)==SUCCESS);
//Line Number: 2038
ASSERT_TEST(DS3.TimeViewed(16,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2039
ASSERT_TEST(DS3.WatchClass(16,10,6)==SUCCESS);
//Line Number: 2040
ASSERT_TEST(DS3.TimeViewed(16,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 2041
ASSERT_TEST(DS3.WatchClass(16,0,6)==SUCCESS);
//Line Number: 2042
ASSERT_TEST(DS3.TimeViewed(16,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2043
ASSERT_TEST(DS3.WatchClass(16,3,6)==SUCCESS);
//Line Number: 2044
ASSERT_TEST(DS3.TimeViewed(16,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2045
ASSERT_TEST(DS3.WatchClass(16,11,6)==SUCCESS);
//Line Number: 2046
ASSERT_TEST(DS3.TimeViewed(16,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2047
ASSERT_TEST(DS3.WatchClass(16,2,6)==SUCCESS);
//Line Number: 2048
ASSERT_TEST(DS3.TimeViewed(16,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 2049
ASSERT_TEST(DS3.WatchClass(16,9,6)==SUCCESS);
//Line Number: 2050
ASSERT_TEST(DS3.TimeViewed(16,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2051
ASSERT_TEST(DS3.WatchClass(16,11,6)==SUCCESS);
//Line Number: 2052
ASSERT_TEST(DS3.TimeViewed(16,11,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==12);
//Line Number: 2053
ASSERT_TEST(DS3.WatchClass(16,10,6)==SUCCESS);
//Line Number: 2054
ASSERT_TEST(DS3.TimeViewed(16,10,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
classes=new int[29];
courses=new int[29];
//Line Number: 2055
ASSERT_TEST(DS3.GetMostViewedClasses(-3,courses,classes)==INVALID_INPUT);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 2056
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 2057
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 2058
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 2059
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 2060
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 2061
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 2062
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 2063
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 2064
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 2065
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 2066
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 2067
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 2068
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 2069
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 2070
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 2071
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 2072
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 2073
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 2074
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 2075
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 2076
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 2077
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 2078
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 2079
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 2080
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 2081
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 2082
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 2083
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 2084
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 2085
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 2086
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 2087
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 2088
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 2089
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 2090
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 2091
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 2092
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 2093
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 2094
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 2095
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 2096
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 2097
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 2098
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 2099
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 2100
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 2101
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 2102
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 2103
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 2104
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 2105
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 2106
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 2107
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 2108
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 2109
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 2110
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 2111
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 2112
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 2113
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 2114
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 2115
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 2116
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 2117
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 2118
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 2119
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 2120
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 2121
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 2122
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 2123
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 2124
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 2125
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 2126
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 2127
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 2128
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 2129
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 2130
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 2131
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 2132
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 2133
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 2134
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 2135
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 2136
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 2137
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 2138
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 2139
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 2140
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 2141
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 2142
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 2143
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 2144
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 2145
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 2146
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 2147
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 2148
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 2149
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 2150
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 2151
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 2152
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 2153
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 2154
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 2155
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 2156
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 2157
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 2158
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 2159
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 2160
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 2161
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 2162
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 2163
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 2164
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 2165
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 2166
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 2167
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 2168
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 2169
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 2170
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 2171
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 2172
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 2173
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 2174
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 2175
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 2176
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 2177
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 2178
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 2179
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 2180
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 2181
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 2182
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 2183
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 2184
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 2185
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 2186
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 2187
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 2188
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 2189
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 2190
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 2191
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 2192
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 2193
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 2194
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 2195
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 2196
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 2197
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 2198
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 2199
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 2200
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 2201
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 2202
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 2203
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 2204
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 2205
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 2206
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 2207
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 2208
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 2209
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 2210
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 2211
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 2212
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 2213
ASSERT_TEST(DS3.AddCourse(12,18)==FAILURE);
//Line Number: 2214
ASSERT_TEST(DS3.WatchClass(12,16,19)==INVALID_INPUT);
//Line Number: 2215
ASSERT_TEST(DS3.TimeViewed(12,16,timeviewed)==INVALID_INPUT);
//Line Number: 2216
ASSERT_TEST(DS3.AddCourse(13,15)==FAILURE);
//Line Number: 2217
ASSERT_TEST(DS3.WatchClass(13,0,11)==SUCCESS);
//Line Number: 2218
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==35);
//Line Number: 2219
ASSERT_TEST(DS3.AddCourse(14,4)==FAILURE);
//Line Number: 2220
ASSERT_TEST(DS3.WatchClass(14,0,8)==SUCCESS);
//Line Number: 2221
ASSERT_TEST(DS3.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==40);
//Line Number: 2222
ASSERT_TEST(DS3.WatchClass(14,0,8)==SUCCESS);
//Line Number: 2223
ASSERT_TEST(DS3.TimeViewed(14,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==48);
classes=new int[32];
courses=new int[32];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 2224
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 2225
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 2226
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 2227
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 2228
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 2229
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 2230
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 2231
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 2232
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 2233
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 2234
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 2235
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 2236
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 2237
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 2238
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 2239
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 2240
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 2241
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 2242
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 2243
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 2244
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 2245
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 2246
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 2247
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 2248
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 2249
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 2250
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 2251
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 2252
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 2253
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 2254
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 2255
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 2256
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 2257
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 2258
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 2259
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 2260
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 2261
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 2262
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 2263
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 2264
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 2265
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 2266
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 2267
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 2268
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 2269
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 2270
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 2271
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 2272
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 2273
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 2274
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 2275
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 2276
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 2277
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 2278
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 2279
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 2280
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 2281
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 2282
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 2283
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 2284
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 2285
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 2286
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 2287
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 2288
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 2289
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 2290
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 2291
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 2292
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 2293
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 2294
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 2295
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 2296
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 2297
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 2298
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 2299
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 2300
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 2301
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 2302
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 2303
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 2304
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 2305
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 2306
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 2307
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 2308
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 2309
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 2310
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 2311
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 2312
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 2313
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 2314
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 2315
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 2316
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 2317
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 2318
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 2319
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 2320
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 2321
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 2322
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 2323
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 2324
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 2325
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 2326
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 2327
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 2328
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 2329
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 2330
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 2331
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 2332
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 2333
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 2334
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 2335
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 2336
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 2337
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 2338
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 2339
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 2340
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 2341
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 2342
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 2343
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 2344
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 2345
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 2346
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 2347
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 2348
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 2349
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 2350
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 2351
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 2352
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 2353
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 2354
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 2355
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 2356
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 2357
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 2358
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 2359
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 2360
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 2361
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 2362
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 2363
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 2364
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 2365
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 2366
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 2367
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 2368
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 2369
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 2370
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 2371
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 2372
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 2373
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 2374
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 2375
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 2376
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 2377
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 2378
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 2379
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 2380
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 2381
ASSERT_TEST(DS3.AddCourse(6,1)==SUCCESS);
//Line Number: 2382
ASSERT_TEST(DS3.AddCourse(17,2)==FAILURE);
//Line Number: 2383
ASSERT_TEST(DS3.WatchClass(17,0,11)==SUCCESS);
//Line Number: 2384
ASSERT_TEST(DS3.TimeViewed(17,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==11);
classes=new int[34];
courses=new int[34];
//Line Number: 2385
ASSERT_TEST(DS3.GetMostViewedClasses(161,courses,classes)==FAILURE);
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 2386
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 2387
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 2388
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 2389
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 2390
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 2391
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 2392
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 2393
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 2394
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 2395
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 2396
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 2397
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 2398
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 2399
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 2400
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 2401
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 2402
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 2403
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 2404
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 2405
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 2406
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 2407
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 2408
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 2409
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 2410
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 2411
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 2412
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 2413
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 2414
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 2415
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 2416
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 2417
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 2418
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 2419
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 2420
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 2421
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 2422
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 2423
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 2424
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 2425
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 2426
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 2427
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 2428
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 2429
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 2430
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 2431
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 2432
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 2433
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 2434
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 2435
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 2436
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 2437
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 2438
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 2439
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 2440
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 2441
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 2442
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 2443
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 2444
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 2445
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 2446
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 2447
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 2448
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 2449
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 2450
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 2451
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 2452
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 2453
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 2454
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 2455
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 2456
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 2457
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 2458
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 2459
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 2460
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 2461
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 2462
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 2463
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 2464
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 2465
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 2466
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 2467
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 2468
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 2469
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 2470
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 2471
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 2472
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 2473
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 2474
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 2475
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 2476
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 2477
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 2478
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 2479
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 2480
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 2481
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 2482
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 2483
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 2484
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 2485
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 2486
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 2487
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 2488
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 2489
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 2490
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 2491
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 2492
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 2493
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 2494
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 2495
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 2496
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 2497
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 2498
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 2499
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 2500
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 2501
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 2502
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 2503
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 2504
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 2505
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 2506
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 2507
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 2508
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 2509
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 2510
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 2511
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 2512
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 2513
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 2514
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 2515
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 2516
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 2517
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 2518
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 2519
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 2520
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 2521
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 2522
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 2523
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 2524
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 2525
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 2526
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 2527
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 2528
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 2529
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 2530
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 2531
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 2532
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 2533
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 2534
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 2535
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 2536
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 2537
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 2538
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 2539
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 2540
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 2541
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 2542
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[158];
courses=new int[158];
//Line Number: 2543
ASSERT_TEST(DS3.GetMostViewedClasses(158,courses,classes)==SUCCESS);
printFunc(158,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 2544
ASSERT_TEST(DS3.AddCourse(11,2)==FAILURE);
//Line Number: 2545
ASSERT_TEST(DS3.AddCourse(13,13)==FAILURE);
//Line Number: 2546
ASSERT_TEST(DS3.WatchClass(13,2,12)==SUCCESS);
//Line Number: 2547
ASSERT_TEST(DS3.TimeViewed(13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==25);
//Line Number: 2548
ASSERT_TEST(DS3.WatchClass(13,0,12)==SUCCESS);
//Line Number: 2549
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==47);
//Line Number: 2550
ASSERT_TEST(DS3.WatchClass(13,1,12)==SUCCESS);
//Line Number: 2551
ASSERT_TEST(DS3.TimeViewed(13,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==49);
//Line Number: 2552
ASSERT_TEST(DS3.WatchClass(13,5,12)==SUCCESS);
//Line Number: 2553
ASSERT_TEST(DS3.TimeViewed(13,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==25);
//Line Number: 2554
ASSERT_TEST(DS3.WatchClass(13,0,12)==SUCCESS);
//Line Number: 2555
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==59);
//Line Number: 2556
ASSERT_TEST(DS3.WatchClass(13,3,12)==SUCCESS);
//Line Number: 2557
ASSERT_TEST(DS3.TimeViewed(13,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==25);
//Line Number: 2558
ASSERT_TEST(DS3.RemoveCourse(17)==SUCCESS);
//Line Number: 2559
ASSERT_TEST(DS3.WatchClass(17,4,10)==FAILURE);
//Line Number: 2560
ASSERT_TEST(DS3.TimeViewed(17,4,timeviewed)==FAILURE);
//Line Number: 2561
ASSERT_TEST(DS3.AddCourse(4,16)==FAILURE);
//Line Number: 2562
ASSERT_TEST(DS3.WatchClass(4,10,1)==INVALID_INPUT);
//Line Number: 2563
ASSERT_TEST(DS3.TimeViewed(4,10,timeviewed)==INVALID_INPUT);
//Line Number: 2564
ASSERT_TEST(DS3.AddCourse(15,8)==FAILURE);
//Line Number: 2565
ASSERT_TEST(DS3.WatchClass(15,2,7)==SUCCESS);
//Line Number: 2566
ASSERT_TEST(DS3.TimeViewed(15,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 2567
ASSERT_TEST(DS3.WatchClass(15,2,7)==SUCCESS);
//Line Number: 2568
ASSERT_TEST(DS3.TimeViewed(15,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==27);
//Line Number: 2569
ASSERT_TEST(DS3.WatchClass(15,3,7)==SUCCESS);
//Line Number: 2570
ASSERT_TEST(DS3.TimeViewed(15,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==7);
//Line Number: 2571
ASSERT_TEST(DS3.WatchClass(15,2,7)==SUCCESS);
//Line Number: 2572
ASSERT_TEST(DS3.TimeViewed(15,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==34);
//Line Number: 2573
ASSERT_TEST(DS3.RemoveCourse(20)==FAILURE);
//Line Number: 2574
ASSERT_TEST(DS3.WatchClass(20,0,14)==FAILURE);
//Line Number: 2575
ASSERT_TEST(DS3.TimeViewed(20,0,timeviewed)==FAILURE);
//Line Number: 2576
ASSERT_TEST(DS3.AddCourse(19,1)==FAILURE);
//Line Number: 2577
ASSERT_TEST(DS3.AddCourse(19,8)==FAILURE);
//Line Number: 2578
ASSERT_TEST(DS3.WatchClass(19,0,16)==SUCCESS);
//Line Number: 2579
ASSERT_TEST(DS3.TimeViewed(19,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==24);
//Line Number: 2580
ASSERT_TEST(DS3.WatchClass(19,1,16)==SUCCESS);
//Line Number: 2581
ASSERT_TEST(DS3.TimeViewed(19,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
//Line Number: 2582
ASSERT_TEST(DS3.WatchClass(19,2,16)==SUCCESS);
//Line Number: 2583
ASSERT_TEST(DS3.TimeViewed(19,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==16);
classes=new int[42];
courses=new int[42];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 2584
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 2585
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 2586
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 2587
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 2588
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 2589
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 2590
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 2591
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 2592
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 2593
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 2594
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 2595
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 2596
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 2597
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 2598
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 2599
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 2600
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 2601
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 2602
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 2603
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 2604
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 2605
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 2606
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 2607
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 2608
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 2609
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 2610
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 2611
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 2612
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 2613
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 2614
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 2615
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 2616
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 2617
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 2618
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 2619
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 2620
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 2621
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 2622
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 2623
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 2624
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 2625
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 2626
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 2627
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 2628
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 2629
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 2630
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 2631
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 2632
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 2633
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 2634
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 2635
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 2636
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 2637
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 2638
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 2639
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 2640
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 2641
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 2642
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 2643
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 2644
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 2645
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 2646
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 2647
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 2648
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 2649
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 2650
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 2651
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 2652
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 2653
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 2654
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 2655
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 2656
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 2657
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 2658
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 2659
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 2660
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 2661
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 2662
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 2663
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 2664
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 2665
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 2666
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 2667
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 2668
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 2669
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 2670
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 2671
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 2672
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 2673
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 2674
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 2675
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 2676
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 2677
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 2678
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 2679
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 2680
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 2681
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 2682
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 2683
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 2684
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 2685
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 2686
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 2687
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 2688
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 2689
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 2690
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 2691
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 2692
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 2693
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 2694
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 2695
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 2696
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 2697
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 2698
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 2699
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 2700
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 2701
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 2702
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 2703
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 2704
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 2705
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 2706
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 2707
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 2708
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 2709
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 2710
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 2711
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 2712
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 2713
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 2714
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 2715
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 2716
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 2717
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 2718
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 2719
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 2720
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 2721
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 2722
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 2723
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 2724
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 2725
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 2726
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 2727
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 2728
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 2729
ASSERT_TEST(DS3.AddCourse(7,20)==SUCCESS);
//Line Number: 2730
ASSERT_TEST(DS3.WatchClass(7,6,18)==SUCCESS);
//Line Number: 2731
ASSERT_TEST(DS3.TimeViewed(7,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2732
ASSERT_TEST(DS3.WatchClass(7,2,18)==SUCCESS);
//Line Number: 2733
ASSERT_TEST(DS3.TimeViewed(7,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2734
ASSERT_TEST(DS3.WatchClass(7,8,18)==SUCCESS);
//Line Number: 2735
ASSERT_TEST(DS3.TimeViewed(7,8,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2736
ASSERT_TEST(DS3.WatchClass(7,13,18)==SUCCESS);
//Line Number: 2737
ASSERT_TEST(DS3.TimeViewed(7,13,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2738
ASSERT_TEST(DS3.WatchClass(7,0,18)==SUCCESS);
//Line Number: 2739
ASSERT_TEST(DS3.TimeViewed(7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2740
ASSERT_TEST(DS3.WatchClass(7,3,18)==SUCCESS);
//Line Number: 2741
ASSERT_TEST(DS3.TimeViewed(7,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2742
ASSERT_TEST(DS3.WatchClass(7,4,18)==SUCCESS);
//Line Number: 2743
ASSERT_TEST(DS3.TimeViewed(7,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2744
ASSERT_TEST(DS3.WatchClass(7,0,18)==SUCCESS);
//Line Number: 2745
ASSERT_TEST(DS3.TimeViewed(7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 2746
ASSERT_TEST(DS3.WatchClass(7,4,18)==SUCCESS);
//Line Number: 2747
ASSERT_TEST(DS3.TimeViewed(7,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 2748
ASSERT_TEST(DS3.WatchClass(7,2,18)==SUCCESS);
//Line Number: 2749
ASSERT_TEST(DS3.TimeViewed(7,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==36);
//Line Number: 2750
ASSERT_TEST(DS3.WatchClass(7,12,18)==SUCCESS);
//Line Number: 2751
ASSERT_TEST(DS3.TimeViewed(7,12,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2752
ASSERT_TEST(DS3.WatchClass(7,0,18)==SUCCESS);
//Line Number: 2753
ASSERT_TEST(DS3.TimeViewed(7,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==54);
//Line Number: 2754
ASSERT_TEST(DS3.WatchClass(7,4,18)==SUCCESS);
//Line Number: 2755
ASSERT_TEST(DS3.TimeViewed(7,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==54);
//Line Number: 2756
ASSERT_TEST(DS3.WatchClass(7,9,18)==SUCCESS);
//Line Number: 2757
ASSERT_TEST(DS3.TimeViewed(7,9,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
classes=new int[43];
courses=new int[43];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 2758
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 2759
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 2760
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 2761
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 2762
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 2763
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 2764
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 2765
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 2766
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 2767
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 2768
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 2769
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 2770
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 2771
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 2772
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 2773
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 2774
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 2775
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 2776
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 2777
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 2778
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 2779
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 2780
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 2781
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 2782
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 2783
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 2784
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 2785
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 2786
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 2787
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 2788
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 2789
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 2790
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 2791
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 2792
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 2793
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 2794
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 2795
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 2796
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 2797
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 2798
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 2799
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 2800
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 2801
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 2802
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 2803
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 2804
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 2805
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 2806
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 2807
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 2808
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 2809
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 2810
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 2811
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 2812
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 2813
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 2814
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 2815
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 2816
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 2817
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 2818
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 2819
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 2820
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 2821
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 2822
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 2823
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 2824
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 2825
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 2826
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 2827
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 2828
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 2829
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 2830
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 2831
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 2832
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 2833
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 2834
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 2835
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 2836
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 2837
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 2838
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 2839
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 2840
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 2841
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 2842
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 2843
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 2844
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 2845
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 2846
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 2847
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 2848
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 2849
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 2850
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 2851
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 2852
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 2853
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 2854
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 2855
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 2856
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 2857
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 2858
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 2859
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 2860
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 2861
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 2862
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 2863
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 2864
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 2865
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 2866
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 2867
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 2868
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 2869
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 2870
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 2871
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 2872
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 2873
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 2874
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 2875
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 2876
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 2877
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 2878
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 2879
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 2880
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 2881
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 2882
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 2883
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 2884
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 2885
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 2886
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 2887
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 2888
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 2889
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 2890
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 2891
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 2892
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 2893
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 2894
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 2895
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 2896
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 2897
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 2898
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 2899
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 2900
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 2901
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 2902
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 2903
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 2904
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 2905
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 2906
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 2907
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 2908
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 2909
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 2910
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 2911
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 2912
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 2913
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 2914
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[158];
courses=new int[158];
//Line Number: 2915
ASSERT_TEST(DS3.GetMostViewedClasses(158,courses,classes)==SUCCESS);
printFunc(158,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[159];
courses=new int[159];
//Line Number: 2916
ASSERT_TEST(DS3.GetMostViewedClasses(159,courses,classes)==SUCCESS);
printFunc(159,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[160];
courses=new int[160];
//Line Number: 2917
ASSERT_TEST(DS3.GetMostViewedClasses(160,courses,classes)==SUCCESS);
printFunc(160,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[161];
courses=new int[161];
//Line Number: 2918
ASSERT_TEST(DS3.GetMostViewedClasses(161,courses,classes)==SUCCESS);
printFunc(161,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[162];
courses=new int[162];
//Line Number: 2919
ASSERT_TEST(DS3.GetMostViewedClasses(162,courses,classes)==SUCCESS);
printFunc(162,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[163];
courses=new int[163];
//Line Number: 2920
ASSERT_TEST(DS3.GetMostViewedClasses(163,courses,classes)==SUCCESS);
printFunc(163,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[164];
courses=new int[164];
//Line Number: 2921
ASSERT_TEST(DS3.GetMostViewedClasses(164,courses,classes)==SUCCESS);
printFunc(164,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[165];
courses=new int[165];
//Line Number: 2922
ASSERT_TEST(DS3.GetMostViewedClasses(165,courses,classes)==SUCCESS);
printFunc(165,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 2923
ASSERT_TEST(DS3.AddCourse(9,9)==FAILURE);
//Line Number: 2924
ASSERT_TEST(DS3.WatchClass(9,5,2)==SUCCESS);
//Line Number: 2925
ASSERT_TEST(DS3.TimeViewed(9,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==18);
//Line Number: 2926
ASSERT_TEST(DS3.WatchClass(9,1,2)==SUCCESS);
//Line Number: 2927
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==35);
//Line Number: 2928
ASSERT_TEST(DS3.WatchClass(9,5,2)==SUCCESS);
//Line Number: 2929
ASSERT_TEST(DS3.TimeViewed(9,5,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==20);
//Line Number: 2930
ASSERT_TEST(DS3.WatchClass(9,6,2)==SUCCESS);
//Line Number: 2931
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==6);
//Line Number: 2932
ASSERT_TEST(DS3.WatchClass(9,7,2)==SUCCESS);
//Line Number: 2933
ASSERT_TEST(DS3.TimeViewed(9,7,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==2);
//Line Number: 2934
ASSERT_TEST(DS3.WatchClass(9,6,2)==SUCCESS);
//Line Number: 2935
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==8);
//Line Number: 2936
ASSERT_TEST(DS3.WatchClass(9,6,2)==SUCCESS);
//Line Number: 2937
ASSERT_TEST(DS3.TimeViewed(9,6,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==10);
//Line Number: 2938
ASSERT_TEST(DS3.WatchClass(9,1,2)==SUCCESS);
//Line Number: 2939
ASSERT_TEST(DS3.TimeViewed(9,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==37);
classes=new int[44];
courses=new int[44];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 2940
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 2941
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 2942
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 2943
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 2944
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 2945
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 2946
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 2947
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 2948
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 2949
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 2950
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 2951
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 2952
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 2953
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 2954
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 2955
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 2956
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 2957
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 2958
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 2959
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 2960
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 2961
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 2962
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 2963
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 2964
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 2965
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 2966
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 2967
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 2968
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 2969
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 2970
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 2971
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 2972
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 2973
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 2974
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 2975
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 2976
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 2977
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 2978
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 2979
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 2980
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 2981
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 2982
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 2983
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 2984
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 2985
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 2986
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 2987
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 2988
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 2989
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 2990
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 2991
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 2992
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 2993
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 2994
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 2995
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 2996
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 2997
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 2998
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 2999
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 3000
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 3001
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 3002
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 3003
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 3004
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 3005
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 3006
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 3007
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 3008
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 3009
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 3010
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 3011
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 3012
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 3013
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 3014
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 3015
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 3016
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 3017
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 3018
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 3019
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 3020
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 3021
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 3022
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 3023
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 3024
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 3025
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 3026
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 3027
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 3028
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 3029
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 3030
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 3031
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 3032
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 3033
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 3034
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 3035
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 3036
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 3037
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 3038
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 3039
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 3040
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 3041
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 3042
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 3043
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 3044
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 3045
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 3046
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 3047
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 3048
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 3049
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 3050
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 3051
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 3052
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 3053
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 3054
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 3055
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 3056
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 3057
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 3058
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 3059
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 3060
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 3061
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 3062
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 3063
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 3064
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 3065
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 3066
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 3067
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 3068
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 3069
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 3070
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 3071
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 3072
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 3073
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 3074
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 3075
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 3076
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 3077
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 3078
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 3079
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 3080
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 3081
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 3082
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 3083
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 3084
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 3085
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 3086
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 3087
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 3088
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 3089
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 3090
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 3091
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 3092
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 3093
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 3094
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 3095
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 3096
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[158];
courses=new int[158];
//Line Number: 3097
ASSERT_TEST(DS3.GetMostViewedClasses(158,courses,classes)==SUCCESS);
printFunc(158,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[159];
courses=new int[159];
//Line Number: 3098
ASSERT_TEST(DS3.GetMostViewedClasses(159,courses,classes)==SUCCESS);
printFunc(159,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[160];
courses=new int[160];
//Line Number: 3099
ASSERT_TEST(DS3.GetMostViewedClasses(160,courses,classes)==SUCCESS);
printFunc(160,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[161];
courses=new int[161];
//Line Number: 3100
ASSERT_TEST(DS3.GetMostViewedClasses(161,courses,classes)==SUCCESS);
printFunc(161,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[162];
courses=new int[162];
//Line Number: 3101
ASSERT_TEST(DS3.GetMostViewedClasses(162,courses,classes)==SUCCESS);
printFunc(162,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[163];
courses=new int[163];
//Line Number: 3102
ASSERT_TEST(DS3.GetMostViewedClasses(163,courses,classes)==SUCCESS);
printFunc(163,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[164];
courses=new int[164];
//Line Number: 3103
ASSERT_TEST(DS3.GetMostViewedClasses(164,courses,classes)==SUCCESS);
printFunc(164,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[165];
courses=new int[165];
//Line Number: 3104
ASSERT_TEST(DS3.GetMostViewedClasses(165,courses,classes)==SUCCESS);
printFunc(165,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 3105
ASSERT_TEST(DS3.AddCourse(13,8)==FAILURE);
//Line Number: 3106
ASSERT_TEST(DS3.WatchClass(13,3,2)==SUCCESS);
//Line Number: 3107
ASSERT_TEST(DS3.TimeViewed(13,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==27);
//Line Number: 3108
ASSERT_TEST(DS3.WatchClass(13,0,2)==SUCCESS);
//Line Number: 3109
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==61);
//Line Number: 3110
ASSERT_TEST(DS3.WatchClass(13,4,2)==SUCCESS);
//Line Number: 3111
ASSERT_TEST(DS3.TimeViewed(13,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==15);
//Line Number: 3112
ASSERT_TEST(DS3.WatchClass(13,4,2)==SUCCESS);
//Line Number: 3113
ASSERT_TEST(DS3.TimeViewed(13,4,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==17);
//Line Number: 3114
ASSERT_TEST(DS3.WatchClass(13,1,2)==SUCCESS);
//Line Number: 3115
ASSERT_TEST(DS3.TimeViewed(13,1,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==51);
classes=new int[45];
courses=new int[45];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 3116
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 3117
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 3118
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 3119
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 3120
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 3121
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 3122
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 3123
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 3124
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 3125
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 3126
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 3127
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 3128
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 3129
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 3130
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 3131
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 3132
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 3133
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 3134
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 3135
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 3136
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 3137
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 3138
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 3139
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 3140
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 3141
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 3142
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 3143
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 3144
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 3145
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 3146
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 3147
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 3148
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 3149
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 3150
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 3151
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 3152
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 3153
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 3154
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 3155
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 3156
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 3157
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 3158
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 3159
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 3160
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 3161
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 3162
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 3163
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 3164
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 3165
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 3166
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 3167
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 3168
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 3169
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 3170
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 3171
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 3172
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 3173
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 3174
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 3175
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 3176
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 3177
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 3178
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 3179
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 3180
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 3181
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 3182
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 3183
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 3184
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 3185
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 3186
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 3187
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 3188
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 3189
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 3190
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 3191
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 3192
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 3193
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 3194
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 3195
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 3196
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 3197
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 3198
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 3199
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 3200
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 3201
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 3202
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 3203
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 3204
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 3205
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 3206
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 3207
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 3208
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 3209
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 3210
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 3211
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 3212
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 3213
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 3214
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 3215
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 3216
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 3217
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 3218
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 3219
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 3220
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 3221
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 3222
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 3223
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 3224
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 3225
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 3226
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 3227
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 3228
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 3229
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 3230
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 3231
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 3232
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 3233
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 3234
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 3235
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 3236
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 3237
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 3238
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 3239
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 3240
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 3241
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 3242
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 3243
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 3244
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 3245
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 3246
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 3247
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 3248
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 3249
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 3250
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 3251
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 3252
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 3253
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 3254
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 3255
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 3256
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 3257
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 3258
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 3259
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 3260
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 3261
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 3262
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 3263
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 3264
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 3265
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 3266
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 3267
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 3268
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 3269
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 3270
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 3271
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 3272
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[158];
courses=new int[158];
//Line Number: 3273
ASSERT_TEST(DS3.GetMostViewedClasses(158,courses,classes)==SUCCESS);
printFunc(158,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[159];
courses=new int[159];
//Line Number: 3274
ASSERT_TEST(DS3.GetMostViewedClasses(159,courses,classes)==SUCCESS);
printFunc(159,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[160];
courses=new int[160];
//Line Number: 3275
ASSERT_TEST(DS3.GetMostViewedClasses(160,courses,classes)==SUCCESS);
printFunc(160,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[161];
courses=new int[161];
//Line Number: 3276
ASSERT_TEST(DS3.GetMostViewedClasses(161,courses,classes)==SUCCESS);
printFunc(161,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[162];
courses=new int[162];
//Line Number: 3277
ASSERT_TEST(DS3.GetMostViewedClasses(162,courses,classes)==SUCCESS);
printFunc(162,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[163];
courses=new int[163];
//Line Number: 3278
ASSERT_TEST(DS3.GetMostViewedClasses(163,courses,classes)==SUCCESS);
printFunc(163,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[164];
courses=new int[164];
//Line Number: 3279
ASSERT_TEST(DS3.GetMostViewedClasses(164,courses,classes)==SUCCESS);
printFunc(164,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[165];
courses=new int[165];
//Line Number: 3280
ASSERT_TEST(DS3.GetMostViewedClasses(165,courses,classes)==SUCCESS);
printFunc(165,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 3281
ASSERT_TEST(DS3.AddCourse(4,10)==FAILURE);
classes=new int[46];
courses=new int[46];
delete[] classes;
delete[] courses;
classes=new int[1];
courses=new int[1];
//Line Number: 3282
ASSERT_TEST(DS3.GetMostViewedClasses(1,courses,classes)==SUCCESS);
printFunc(1,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[2];
courses=new int[2];
//Line Number: 3283
ASSERT_TEST(DS3.GetMostViewedClasses(2,courses,classes)==SUCCESS);
printFunc(2,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[3];
courses=new int[3];
//Line Number: 3284
ASSERT_TEST(DS3.GetMostViewedClasses(3,courses,classes)==SUCCESS);
printFunc(3,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[4];
courses=new int[4];
//Line Number: 3285
ASSERT_TEST(DS3.GetMostViewedClasses(4,courses,classes)==SUCCESS);
printFunc(4,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[5];
courses=new int[5];
//Line Number: 3286
ASSERT_TEST(DS3.GetMostViewedClasses(5,courses,classes)==SUCCESS);
printFunc(5,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[6];
courses=new int[6];
//Line Number: 3287
ASSERT_TEST(DS3.GetMostViewedClasses(6,courses,classes)==SUCCESS);
printFunc(6,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[7];
courses=new int[7];
//Line Number: 3288
ASSERT_TEST(DS3.GetMostViewedClasses(7,courses,classes)==SUCCESS);
printFunc(7,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[8];
courses=new int[8];
//Line Number: 3289
ASSERT_TEST(DS3.GetMostViewedClasses(8,courses,classes)==SUCCESS);
printFunc(8,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[9];
courses=new int[9];
//Line Number: 3290
ASSERT_TEST(DS3.GetMostViewedClasses(9,courses,classes)==SUCCESS);
printFunc(9,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[10];
courses=new int[10];
//Line Number: 3291
ASSERT_TEST(DS3.GetMostViewedClasses(10,courses,classes)==SUCCESS);
printFunc(10,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[11];
courses=new int[11];
//Line Number: 3292
ASSERT_TEST(DS3.GetMostViewedClasses(11,courses,classes)==SUCCESS);
printFunc(11,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[12];
courses=new int[12];
//Line Number: 3293
ASSERT_TEST(DS3.GetMostViewedClasses(12,courses,classes)==SUCCESS);
printFunc(12,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[13];
courses=new int[13];
//Line Number: 3294
ASSERT_TEST(DS3.GetMostViewedClasses(13,courses,classes)==SUCCESS);
printFunc(13,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[14];
courses=new int[14];
//Line Number: 3295
ASSERT_TEST(DS3.GetMostViewedClasses(14,courses,classes)==SUCCESS);
printFunc(14,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[15];
courses=new int[15];
//Line Number: 3296
ASSERT_TEST(DS3.GetMostViewedClasses(15,courses,classes)==SUCCESS);
printFunc(15,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[16];
courses=new int[16];
//Line Number: 3297
ASSERT_TEST(DS3.GetMostViewedClasses(16,courses,classes)==SUCCESS);
printFunc(16,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[17];
courses=new int[17];
//Line Number: 3298
ASSERT_TEST(DS3.GetMostViewedClasses(17,courses,classes)==SUCCESS);
printFunc(17,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[18];
courses=new int[18];
//Line Number: 3299
ASSERT_TEST(DS3.GetMostViewedClasses(18,courses,classes)==SUCCESS);
printFunc(18,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[19];
courses=new int[19];
//Line Number: 3300
ASSERT_TEST(DS3.GetMostViewedClasses(19,courses,classes)==SUCCESS);
printFunc(19,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[20];
courses=new int[20];
//Line Number: 3301
ASSERT_TEST(DS3.GetMostViewedClasses(20,courses,classes)==SUCCESS);
printFunc(20,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[21];
courses=new int[21];
//Line Number: 3302
ASSERT_TEST(DS3.GetMostViewedClasses(21,courses,classes)==SUCCESS);
printFunc(21,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[22];
courses=new int[22];
//Line Number: 3303
ASSERT_TEST(DS3.GetMostViewedClasses(22,courses,classes)==SUCCESS);
printFunc(22,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[23];
courses=new int[23];
//Line Number: 3304
ASSERT_TEST(DS3.GetMostViewedClasses(23,courses,classes)==SUCCESS);
printFunc(23,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[24];
courses=new int[24];
//Line Number: 3305
ASSERT_TEST(DS3.GetMostViewedClasses(24,courses,classes)==SUCCESS);
printFunc(24,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[25];
courses=new int[25];
//Line Number: 3306
ASSERT_TEST(DS3.GetMostViewedClasses(25,courses,classes)==SUCCESS);
printFunc(25,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[26];
courses=new int[26];
//Line Number: 3307
ASSERT_TEST(DS3.GetMostViewedClasses(26,courses,classes)==SUCCESS);
printFunc(26,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[27];
courses=new int[27];
//Line Number: 3308
ASSERT_TEST(DS3.GetMostViewedClasses(27,courses,classes)==SUCCESS);
printFunc(27,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[28];
courses=new int[28];
//Line Number: 3309
ASSERT_TEST(DS3.GetMostViewedClasses(28,courses,classes)==SUCCESS);
printFunc(28,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[29];
courses=new int[29];
//Line Number: 3310
ASSERT_TEST(DS3.GetMostViewedClasses(29,courses,classes)==SUCCESS);
printFunc(29,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[30];
courses=new int[30];
//Line Number: 3311
ASSERT_TEST(DS3.GetMostViewedClasses(30,courses,classes)==SUCCESS);
printFunc(30,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[31];
courses=new int[31];
//Line Number: 3312
ASSERT_TEST(DS3.GetMostViewedClasses(31,courses,classes)==SUCCESS);
printFunc(31,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[32];
courses=new int[32];
//Line Number: 3313
ASSERT_TEST(DS3.GetMostViewedClasses(32,courses,classes)==SUCCESS);
printFunc(32,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[33];
courses=new int[33];
//Line Number: 3314
ASSERT_TEST(DS3.GetMostViewedClasses(33,courses,classes)==SUCCESS);
printFunc(33,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[34];
courses=new int[34];
//Line Number: 3315
ASSERT_TEST(DS3.GetMostViewedClasses(34,courses,classes)==SUCCESS);
printFunc(34,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[35];
courses=new int[35];
//Line Number: 3316
ASSERT_TEST(DS3.GetMostViewedClasses(35,courses,classes)==SUCCESS);
printFunc(35,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[36];
courses=new int[36];
//Line Number: 3317
ASSERT_TEST(DS3.GetMostViewedClasses(36,courses,classes)==SUCCESS);
printFunc(36,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[37];
courses=new int[37];
//Line Number: 3318
ASSERT_TEST(DS3.GetMostViewedClasses(37,courses,classes)==SUCCESS);
printFunc(37,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[38];
courses=new int[38];
//Line Number: 3319
ASSERT_TEST(DS3.GetMostViewedClasses(38,courses,classes)==SUCCESS);
printFunc(38,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[39];
courses=new int[39];
//Line Number: 3320
ASSERT_TEST(DS3.GetMostViewedClasses(39,courses,classes)==SUCCESS);
printFunc(39,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[40];
courses=new int[40];
//Line Number: 3321
ASSERT_TEST(DS3.GetMostViewedClasses(40,courses,classes)==SUCCESS);
printFunc(40,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[41];
courses=new int[41];
//Line Number: 3322
ASSERT_TEST(DS3.GetMostViewedClasses(41,courses,classes)==SUCCESS);
printFunc(41,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[42];
courses=new int[42];
//Line Number: 3323
ASSERT_TEST(DS3.GetMostViewedClasses(42,courses,classes)==SUCCESS);
printFunc(42,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[43];
courses=new int[43];
//Line Number: 3324
ASSERT_TEST(DS3.GetMostViewedClasses(43,courses,classes)==SUCCESS);
printFunc(43,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[44];
courses=new int[44];
//Line Number: 3325
ASSERT_TEST(DS3.GetMostViewedClasses(44,courses,classes)==SUCCESS);
printFunc(44,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[45];
courses=new int[45];
//Line Number: 3326
ASSERT_TEST(DS3.GetMostViewedClasses(45,courses,classes)==SUCCESS);
printFunc(45,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[46];
courses=new int[46];
//Line Number: 3327
ASSERT_TEST(DS3.GetMostViewedClasses(46,courses,classes)==SUCCESS);
printFunc(46,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[47];
courses=new int[47];
//Line Number: 3328
ASSERT_TEST(DS3.GetMostViewedClasses(47,courses,classes)==SUCCESS);
printFunc(47,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[48];
courses=new int[48];
//Line Number: 3329
ASSERT_TEST(DS3.GetMostViewedClasses(48,courses,classes)==SUCCESS);
printFunc(48,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[49];
courses=new int[49];
//Line Number: 3330
ASSERT_TEST(DS3.GetMostViewedClasses(49,courses,classes)==SUCCESS);
printFunc(49,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[50];
courses=new int[50];
//Line Number: 3331
ASSERT_TEST(DS3.GetMostViewedClasses(50,courses,classes)==SUCCESS);
printFunc(50,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[51];
courses=new int[51];
//Line Number: 3332
ASSERT_TEST(DS3.GetMostViewedClasses(51,courses,classes)==SUCCESS);
printFunc(51,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[52];
courses=new int[52];
//Line Number: 3333
ASSERT_TEST(DS3.GetMostViewedClasses(52,courses,classes)==SUCCESS);
printFunc(52,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[53];
courses=new int[53];
//Line Number: 3334
ASSERT_TEST(DS3.GetMostViewedClasses(53,courses,classes)==SUCCESS);
printFunc(53,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[54];
courses=new int[54];
//Line Number: 3335
ASSERT_TEST(DS3.GetMostViewedClasses(54,courses,classes)==SUCCESS);
printFunc(54,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[55];
courses=new int[55];
//Line Number: 3336
ASSERT_TEST(DS3.GetMostViewedClasses(55,courses,classes)==SUCCESS);
printFunc(55,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[56];
courses=new int[56];
//Line Number: 3337
ASSERT_TEST(DS3.GetMostViewedClasses(56,courses,classes)==SUCCESS);
printFunc(56,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[57];
courses=new int[57];
//Line Number: 3338
ASSERT_TEST(DS3.GetMostViewedClasses(57,courses,classes)==SUCCESS);
printFunc(57,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[58];
courses=new int[58];
//Line Number: 3339
ASSERT_TEST(DS3.GetMostViewedClasses(58,courses,classes)==SUCCESS);
printFunc(58,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[59];
courses=new int[59];
//Line Number: 3340
ASSERT_TEST(DS3.GetMostViewedClasses(59,courses,classes)==SUCCESS);
printFunc(59,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[60];
courses=new int[60];
//Line Number: 3341
ASSERT_TEST(DS3.GetMostViewedClasses(60,courses,classes)==SUCCESS);
printFunc(60,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[61];
courses=new int[61];
//Line Number: 3342
ASSERT_TEST(DS3.GetMostViewedClasses(61,courses,classes)==SUCCESS);
printFunc(61,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[62];
courses=new int[62];
//Line Number: 3343
ASSERT_TEST(DS3.GetMostViewedClasses(62,courses,classes)==SUCCESS);
printFunc(62,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[63];
courses=new int[63];
//Line Number: 3344
ASSERT_TEST(DS3.GetMostViewedClasses(63,courses,classes)==SUCCESS);
printFunc(63,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[64];
courses=new int[64];
//Line Number: 3345
ASSERT_TEST(DS3.GetMostViewedClasses(64,courses,classes)==SUCCESS);
printFunc(64,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[65];
courses=new int[65];
//Line Number: 3346
ASSERT_TEST(DS3.GetMostViewedClasses(65,courses,classes)==SUCCESS);
printFunc(65,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[66];
courses=new int[66];
//Line Number: 3347
ASSERT_TEST(DS3.GetMostViewedClasses(66,courses,classes)==SUCCESS);
printFunc(66,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[67];
courses=new int[67];
//Line Number: 3348
ASSERT_TEST(DS3.GetMostViewedClasses(67,courses,classes)==SUCCESS);
printFunc(67,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[68];
courses=new int[68];
//Line Number: 3349
ASSERT_TEST(DS3.GetMostViewedClasses(68,courses,classes)==SUCCESS);
printFunc(68,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[69];
courses=new int[69];
//Line Number: 3350
ASSERT_TEST(DS3.GetMostViewedClasses(69,courses,classes)==SUCCESS);
printFunc(69,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[70];
courses=new int[70];
//Line Number: 3351
ASSERT_TEST(DS3.GetMostViewedClasses(70,courses,classes)==SUCCESS);
printFunc(70,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[71];
courses=new int[71];
//Line Number: 3352
ASSERT_TEST(DS3.GetMostViewedClasses(71,courses,classes)==SUCCESS);
printFunc(71,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[72];
courses=new int[72];
//Line Number: 3353
ASSERT_TEST(DS3.GetMostViewedClasses(72,courses,classes)==SUCCESS);
printFunc(72,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[73];
courses=new int[73];
//Line Number: 3354
ASSERT_TEST(DS3.GetMostViewedClasses(73,courses,classes)==SUCCESS);
printFunc(73,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[74];
courses=new int[74];
//Line Number: 3355
ASSERT_TEST(DS3.GetMostViewedClasses(74,courses,classes)==SUCCESS);
printFunc(74,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[75];
courses=new int[75];
//Line Number: 3356
ASSERT_TEST(DS3.GetMostViewedClasses(75,courses,classes)==SUCCESS);
printFunc(75,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[76];
courses=new int[76];
//Line Number: 3357
ASSERT_TEST(DS3.GetMostViewedClasses(76,courses,classes)==SUCCESS);
printFunc(76,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[77];
courses=new int[77];
//Line Number: 3358
ASSERT_TEST(DS3.GetMostViewedClasses(77,courses,classes)==SUCCESS);
printFunc(77,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[78];
courses=new int[78];
//Line Number: 3359
ASSERT_TEST(DS3.GetMostViewedClasses(78,courses,classes)==SUCCESS);
printFunc(78,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[79];
courses=new int[79];
//Line Number: 3360
ASSERT_TEST(DS3.GetMostViewedClasses(79,courses,classes)==SUCCESS);
printFunc(79,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[80];
courses=new int[80];
//Line Number: 3361
ASSERT_TEST(DS3.GetMostViewedClasses(80,courses,classes)==SUCCESS);
printFunc(80,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[81];
courses=new int[81];
//Line Number: 3362
ASSERT_TEST(DS3.GetMostViewedClasses(81,courses,classes)==SUCCESS);
printFunc(81,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[82];
courses=new int[82];
//Line Number: 3363
ASSERT_TEST(DS3.GetMostViewedClasses(82,courses,classes)==SUCCESS);
printFunc(82,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[83];
courses=new int[83];
//Line Number: 3364
ASSERT_TEST(DS3.GetMostViewedClasses(83,courses,classes)==SUCCESS);
printFunc(83,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[84];
courses=new int[84];
//Line Number: 3365
ASSERT_TEST(DS3.GetMostViewedClasses(84,courses,classes)==SUCCESS);
printFunc(84,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[85];
courses=new int[85];
//Line Number: 3366
ASSERT_TEST(DS3.GetMostViewedClasses(85,courses,classes)==SUCCESS);
printFunc(85,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[86];
courses=new int[86];
//Line Number: 3367
ASSERT_TEST(DS3.GetMostViewedClasses(86,courses,classes)==SUCCESS);
printFunc(86,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[87];
courses=new int[87];
//Line Number: 3368
ASSERT_TEST(DS3.GetMostViewedClasses(87,courses,classes)==SUCCESS);
printFunc(87,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[88];
courses=new int[88];
//Line Number: 3369
ASSERT_TEST(DS3.GetMostViewedClasses(88,courses,classes)==SUCCESS);
printFunc(88,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[89];
courses=new int[89];
//Line Number: 3370
ASSERT_TEST(DS3.GetMostViewedClasses(89,courses,classes)==SUCCESS);
printFunc(89,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[90];
courses=new int[90];
//Line Number: 3371
ASSERT_TEST(DS3.GetMostViewedClasses(90,courses,classes)==SUCCESS);
printFunc(90,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[91];
courses=new int[91];
//Line Number: 3372
ASSERT_TEST(DS3.GetMostViewedClasses(91,courses,classes)==SUCCESS);
printFunc(91,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[92];
courses=new int[92];
//Line Number: 3373
ASSERT_TEST(DS3.GetMostViewedClasses(92,courses,classes)==SUCCESS);
printFunc(92,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[93];
courses=new int[93];
//Line Number: 3374
ASSERT_TEST(DS3.GetMostViewedClasses(93,courses,classes)==SUCCESS);
printFunc(93,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[94];
courses=new int[94];
//Line Number: 3375
ASSERT_TEST(DS3.GetMostViewedClasses(94,courses,classes)==SUCCESS);
printFunc(94,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[95];
courses=new int[95];
//Line Number: 3376
ASSERT_TEST(DS3.GetMostViewedClasses(95,courses,classes)==SUCCESS);
printFunc(95,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[96];
courses=new int[96];
//Line Number: 3377
ASSERT_TEST(DS3.GetMostViewedClasses(96,courses,classes)==SUCCESS);
printFunc(96,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[97];
courses=new int[97];
//Line Number: 3378
ASSERT_TEST(DS3.GetMostViewedClasses(97,courses,classes)==SUCCESS);
printFunc(97,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[98];
courses=new int[98];
//Line Number: 3379
ASSERT_TEST(DS3.GetMostViewedClasses(98,courses,classes)==SUCCESS);
printFunc(98,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[99];
courses=new int[99];
//Line Number: 3380
ASSERT_TEST(DS3.GetMostViewedClasses(99,courses,classes)==SUCCESS);
printFunc(99,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[100];
courses=new int[100];
//Line Number: 3381
ASSERT_TEST(DS3.GetMostViewedClasses(100,courses,classes)==SUCCESS);
printFunc(100,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[101];
courses=new int[101];
//Line Number: 3382
ASSERT_TEST(DS3.GetMostViewedClasses(101,courses,classes)==SUCCESS);
printFunc(101,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[102];
courses=new int[102];
//Line Number: 3383
ASSERT_TEST(DS3.GetMostViewedClasses(102,courses,classes)==SUCCESS);
printFunc(102,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[103];
courses=new int[103];
//Line Number: 3384
ASSERT_TEST(DS3.GetMostViewedClasses(103,courses,classes)==SUCCESS);
printFunc(103,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[104];
courses=new int[104];
//Line Number: 3385
ASSERT_TEST(DS3.GetMostViewedClasses(104,courses,classes)==SUCCESS);
printFunc(104,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[105];
courses=new int[105];
//Line Number: 3386
ASSERT_TEST(DS3.GetMostViewedClasses(105,courses,classes)==SUCCESS);
printFunc(105,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[106];
courses=new int[106];
//Line Number: 3387
ASSERT_TEST(DS3.GetMostViewedClasses(106,courses,classes)==SUCCESS);
printFunc(106,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[107];
courses=new int[107];
//Line Number: 3388
ASSERT_TEST(DS3.GetMostViewedClasses(107,courses,classes)==SUCCESS);
printFunc(107,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[108];
courses=new int[108];
//Line Number: 3389
ASSERT_TEST(DS3.GetMostViewedClasses(108,courses,classes)==SUCCESS);
printFunc(108,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[109];
courses=new int[109];
//Line Number: 3390
ASSERT_TEST(DS3.GetMostViewedClasses(109,courses,classes)==SUCCESS);
printFunc(109,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[110];
courses=new int[110];
//Line Number: 3391
ASSERT_TEST(DS3.GetMostViewedClasses(110,courses,classes)==SUCCESS);
printFunc(110,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[111];
courses=new int[111];
//Line Number: 3392
ASSERT_TEST(DS3.GetMostViewedClasses(111,courses,classes)==SUCCESS);
printFunc(111,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[112];
courses=new int[112];
//Line Number: 3393
ASSERT_TEST(DS3.GetMostViewedClasses(112,courses,classes)==SUCCESS);
printFunc(112,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[113];
courses=new int[113];
//Line Number: 3394
ASSERT_TEST(DS3.GetMostViewedClasses(113,courses,classes)==SUCCESS);
printFunc(113,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[114];
courses=new int[114];
//Line Number: 3395
ASSERT_TEST(DS3.GetMostViewedClasses(114,courses,classes)==SUCCESS);
printFunc(114,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[115];
courses=new int[115];
//Line Number: 3396
ASSERT_TEST(DS3.GetMostViewedClasses(115,courses,classes)==SUCCESS);
printFunc(115,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[116];
courses=new int[116];
//Line Number: 3397
ASSERT_TEST(DS3.GetMostViewedClasses(116,courses,classes)==SUCCESS);
printFunc(116,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[117];
courses=new int[117];
//Line Number: 3398
ASSERT_TEST(DS3.GetMostViewedClasses(117,courses,classes)==SUCCESS);
printFunc(117,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[118];
courses=new int[118];
//Line Number: 3399
ASSERT_TEST(DS3.GetMostViewedClasses(118,courses,classes)==SUCCESS);
printFunc(118,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[119];
courses=new int[119];
//Line Number: 3400
ASSERT_TEST(DS3.GetMostViewedClasses(119,courses,classes)==SUCCESS);
printFunc(119,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[120];
courses=new int[120];
//Line Number: 3401
ASSERT_TEST(DS3.GetMostViewedClasses(120,courses,classes)==SUCCESS);
printFunc(120,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[121];
courses=new int[121];
//Line Number: 3402
ASSERT_TEST(DS3.GetMostViewedClasses(121,courses,classes)==SUCCESS);
printFunc(121,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[122];
courses=new int[122];
//Line Number: 3403
ASSERT_TEST(DS3.GetMostViewedClasses(122,courses,classes)==SUCCESS);
printFunc(122,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[123];
courses=new int[123];
//Line Number: 3404
ASSERT_TEST(DS3.GetMostViewedClasses(123,courses,classes)==SUCCESS);
printFunc(123,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[124];
courses=new int[124];
//Line Number: 3405
ASSERT_TEST(DS3.GetMostViewedClasses(124,courses,classes)==SUCCESS);
printFunc(124,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[125];
courses=new int[125];
//Line Number: 3406
ASSERT_TEST(DS3.GetMostViewedClasses(125,courses,classes)==SUCCESS);
printFunc(125,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[126];
courses=new int[126];
//Line Number: 3407
ASSERT_TEST(DS3.GetMostViewedClasses(126,courses,classes)==SUCCESS);
printFunc(126,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[127];
courses=new int[127];
//Line Number: 3408
ASSERT_TEST(DS3.GetMostViewedClasses(127,courses,classes)==SUCCESS);
printFunc(127,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[128];
courses=new int[128];
//Line Number: 3409
ASSERT_TEST(DS3.GetMostViewedClasses(128,courses,classes)==SUCCESS);
printFunc(128,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[129];
courses=new int[129];
//Line Number: 3410
ASSERT_TEST(DS3.GetMostViewedClasses(129,courses,classes)==SUCCESS);
printFunc(129,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[130];
courses=new int[130];
//Line Number: 3411
ASSERT_TEST(DS3.GetMostViewedClasses(130,courses,classes)==SUCCESS);
printFunc(130,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[131];
courses=new int[131];
//Line Number: 3412
ASSERT_TEST(DS3.GetMostViewedClasses(131,courses,classes)==SUCCESS);
printFunc(131,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[132];
courses=new int[132];
//Line Number: 3413
ASSERT_TEST(DS3.GetMostViewedClasses(132,courses,classes)==SUCCESS);
printFunc(132,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[133];
courses=new int[133];
//Line Number: 3414
ASSERT_TEST(DS3.GetMostViewedClasses(133,courses,classes)==SUCCESS);
printFunc(133,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[134];
courses=new int[134];
//Line Number: 3415
ASSERT_TEST(DS3.GetMostViewedClasses(134,courses,classes)==SUCCESS);
printFunc(134,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[135];
courses=new int[135];
//Line Number: 3416
ASSERT_TEST(DS3.GetMostViewedClasses(135,courses,classes)==SUCCESS);
printFunc(135,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[136];
courses=new int[136];
//Line Number: 3417
ASSERT_TEST(DS3.GetMostViewedClasses(136,courses,classes)==SUCCESS);
printFunc(136,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[137];
courses=new int[137];
//Line Number: 3418
ASSERT_TEST(DS3.GetMostViewedClasses(137,courses,classes)==SUCCESS);
printFunc(137,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[138];
courses=new int[138];
//Line Number: 3419
ASSERT_TEST(DS3.GetMostViewedClasses(138,courses,classes)==SUCCESS);
printFunc(138,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[139];
courses=new int[139];
//Line Number: 3420
ASSERT_TEST(DS3.GetMostViewedClasses(139,courses,classes)==SUCCESS);
printFunc(139,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[140];
courses=new int[140];
//Line Number: 3421
ASSERT_TEST(DS3.GetMostViewedClasses(140,courses,classes)==SUCCESS);
printFunc(140,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[141];
courses=new int[141];
//Line Number: 3422
ASSERT_TEST(DS3.GetMostViewedClasses(141,courses,classes)==SUCCESS);
printFunc(141,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[142];
courses=new int[142];
//Line Number: 3423
ASSERT_TEST(DS3.GetMostViewedClasses(142,courses,classes)==SUCCESS);
printFunc(142,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[143];
courses=new int[143];
//Line Number: 3424
ASSERT_TEST(DS3.GetMostViewedClasses(143,courses,classes)==SUCCESS);
printFunc(143,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[144];
courses=new int[144];
//Line Number: 3425
ASSERT_TEST(DS3.GetMostViewedClasses(144,courses,classes)==SUCCESS);
printFunc(144,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[145];
courses=new int[145];
//Line Number: 3426
ASSERT_TEST(DS3.GetMostViewedClasses(145,courses,classes)==SUCCESS);
printFunc(145,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[146];
courses=new int[146];
//Line Number: 3427
ASSERT_TEST(DS3.GetMostViewedClasses(146,courses,classes)==SUCCESS);
printFunc(146,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[147];
courses=new int[147];
//Line Number: 3428
ASSERT_TEST(DS3.GetMostViewedClasses(147,courses,classes)==SUCCESS);
printFunc(147,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[148];
courses=new int[148];
//Line Number: 3429
ASSERT_TEST(DS3.GetMostViewedClasses(148,courses,classes)==SUCCESS);
printFunc(148,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[149];
courses=new int[149];
//Line Number: 3430
ASSERT_TEST(DS3.GetMostViewedClasses(149,courses,classes)==SUCCESS);
printFunc(149,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[150];
courses=new int[150];
//Line Number: 3431
ASSERT_TEST(DS3.GetMostViewedClasses(150,courses,classes)==SUCCESS);
printFunc(150,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[151];
courses=new int[151];
//Line Number: 3432
ASSERT_TEST(DS3.GetMostViewedClasses(151,courses,classes)==SUCCESS);
printFunc(151,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[152];
courses=new int[152];
//Line Number: 3433
ASSERT_TEST(DS3.GetMostViewedClasses(152,courses,classes)==SUCCESS);
printFunc(152,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[153];
courses=new int[153];
//Line Number: 3434
ASSERT_TEST(DS3.GetMostViewedClasses(153,courses,classes)==SUCCESS);
printFunc(153,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[154];
courses=new int[154];
//Line Number: 3435
ASSERT_TEST(DS3.GetMostViewedClasses(154,courses,classes)==SUCCESS);
printFunc(154,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[155];
courses=new int[155];
//Line Number: 3436
ASSERT_TEST(DS3.GetMostViewedClasses(155,courses,classes)==SUCCESS);
printFunc(155,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[156];
courses=new int[156];
//Line Number: 3437
ASSERT_TEST(DS3.GetMostViewedClasses(156,courses,classes)==SUCCESS);
printFunc(156,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[157];
courses=new int[157];
//Line Number: 3438
ASSERT_TEST(DS3.GetMostViewedClasses(157,courses,classes)==SUCCESS);
printFunc(157,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[158];
courses=new int[158];
//Line Number: 3439
ASSERT_TEST(DS3.GetMostViewedClasses(158,courses,classes)==SUCCESS);
printFunc(158,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[159];
courses=new int[159];
//Line Number: 3440
ASSERT_TEST(DS3.GetMostViewedClasses(159,courses,classes)==SUCCESS);
printFunc(159,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[160];
courses=new int[160];
//Line Number: 3441
ASSERT_TEST(DS3.GetMostViewedClasses(160,courses,classes)==SUCCESS);
printFunc(160,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[161];
courses=new int[161];
//Line Number: 3442
ASSERT_TEST(DS3.GetMostViewedClasses(161,courses,classes)==SUCCESS);
printFunc(161,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[162];
courses=new int[162];
//Line Number: 3443
ASSERT_TEST(DS3.GetMostViewedClasses(162,courses,classes)==SUCCESS);
printFunc(162,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[163];
courses=new int[163];
//Line Number: 3444
ASSERT_TEST(DS3.GetMostViewedClasses(163,courses,classes)==SUCCESS);
printFunc(163,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[164];
courses=new int[164];
//Line Number: 3445
ASSERT_TEST(DS3.GetMostViewedClasses(164,courses,classes)==SUCCESS);
printFunc(164,courses,classes,myfile);
delete[] classes;
delete[] courses;
classes=new int[165];
courses=new int[165];
//Line Number: 3446
ASSERT_TEST(DS3.GetMostViewedClasses(165,courses,classes)==SUCCESS);
printFunc(165,courses,classes,myfile);
delete[] classes;
delete[] courses;
//Line Number: 3447
ASSERT_TEST(DS3.AddCourse(12,20)==FAILURE);
//Line Number: 3448
ASSERT_TEST(DS3.WatchClass(12,16,20)==INVALID_INPUT);
//Line Number: 3449
ASSERT_TEST(DS3.TimeViewed(12,16,timeviewed)==INVALID_INPUT);
//Line Number: 3450
ASSERT_TEST(DS3.AddCourse(13,11)==FAILURE);
//Line Number: 3451
ASSERT_TEST(DS3.WatchClass(13,2,20)==SUCCESS);
//Line Number: 3452
ASSERT_TEST(DS3.TimeViewed(13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==45);
//Line Number: 3453
ASSERT_TEST(DS3.WatchClass(13,3,20)==SUCCESS);
//Line Number: 3454
ASSERT_TEST(DS3.TimeViewed(13,3,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==47);
//Line Number: 3455
ASSERT_TEST(DS3.WatchClass(13,2,20)==SUCCESS);
//Line Number: 3456
ASSERT_TEST(DS3.TimeViewed(13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==65);
//Line Number: 3457
ASSERT_TEST(DS3.WatchClass(13,2,20)==SUCCESS);
//Line Number: 3458
ASSERT_TEST(DS3.TimeViewed(13,2,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==85);
//Line Number: 3459
ASSERT_TEST(DS3.WatchClass(13,0,20)==SUCCESS);
//Line Number: 3460
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==81);
//Line Number: 3461
ASSERT_TEST(DS3.WatchClass(13,0,20)==SUCCESS);
//Line Number: 3462
ASSERT_TEST(DS3.TimeViewed(13,0,timeviewed)==SUCCESS);
ASSERT_TEST(*timeviewed==101);
//Line Number: 3463
ASSERT_TEST(DS3.AddCourse(19,20)==FAILURE);
//Line Number: 3464
ASSERT_TEST(DS3.WatchClass(19,11,9)==INVALID_INPUT);
//Line Number: 3465
ASSERT_TEST(DS3.TimeViewed(19,11,timeviewed)==INVALID_INPUT);
delete timeviewed;
myfile.flush();
myfile.close();
}
