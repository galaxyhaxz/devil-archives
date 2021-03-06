//HEADER_GOES_HERE
#ifndef __DRLG_L2_H__
#define __DRLG_L2_H__

extern int nSx1;
extern int nSx2; // weak
extern int nSy1;
extern int nSy2; // weak
extern int nRoomCnt;
extern unsigned char predungeon[40][40];
extern ROOMNODE RoomList[81];
extern HALLNODE *pHallList;

void InitDungeon();
void L2LockoutFix();
void L2DoorFix();
void LoadL2Dungeon(char *sFileName, int vx, int vy);
void LoadPreL2Dungeon(char *sFileName, int vx, int vy);
void CreateL2Dungeon(unsigned int rseed, int entry);

/* rdata */
extern int Area_Min; // weak
extern int Room_Max; // weak
extern int Room_Min; // weak
extern int Dir_Xadd[5];
extern int Dir_Yadd[5];
extern ShadowStruct SPATSL2[2];
//short word_48489A;
extern unsigned char BTYPESL2[161];
extern unsigned char BSTYPESL2[161];
extern unsigned char VARCH1[];
extern unsigned char VARCH2[];
extern unsigned char VARCH3[];
extern unsigned char VARCH4[];
extern unsigned char VARCH5[];
extern unsigned char VARCH6[];
extern unsigned char VARCH7[];
extern unsigned char VARCH8[];
extern unsigned char VARCH9[];
extern unsigned char VARCH10[];
extern unsigned char VARCH11[];
extern unsigned char VARCH12[];
extern unsigned char VARCH13[];
extern unsigned char VARCH14[];
extern unsigned char VARCH15[];
extern unsigned char VARCH16[];
extern unsigned char VARCH17[];
extern unsigned char VARCH18[];
extern unsigned char VARCH19[];
extern unsigned char VARCH20[];
extern unsigned char VARCH21[];
extern unsigned char VARCH22[];
extern unsigned char VARCH23[];
extern unsigned char VARCH24[];
extern unsigned char VARCH25[];
extern unsigned char VARCH26[];
extern unsigned char VARCH27[];
extern unsigned char VARCH28[];
extern unsigned char VARCH29[];
extern unsigned char VARCH30[];
extern unsigned char VARCH31[];
extern unsigned char VARCH32[];
extern unsigned char VARCH33[];
extern unsigned char VARCH34[];
extern unsigned char VARCH35[];
extern unsigned char VARCH36[];
extern unsigned char VARCH37[];
extern unsigned char VARCH38[];
extern unsigned char VARCH39[];
extern unsigned char VARCH40[];
extern unsigned char HARCH1[];
extern unsigned char HARCH2[];
extern unsigned char HARCH3[];
extern unsigned char HARCH4[];
extern unsigned char HARCH5[];
extern unsigned char HARCH6[];
extern unsigned char HARCH7[];
extern unsigned char HARCH8[];
extern unsigned char HARCH9[];
extern unsigned char HARCH10[];
extern unsigned char HARCH11[];
extern unsigned char HARCH12[];
extern unsigned char HARCH13[];
extern unsigned char HARCH14[];
extern unsigned char HARCH15[];
extern unsigned char HARCH16[];
extern unsigned char HARCH17[];
extern unsigned char HARCH18[];
extern unsigned char HARCH19[];
extern unsigned char HARCH20[];
extern unsigned char HARCH21[];
extern unsigned char HARCH22[];
extern unsigned char HARCH23[];
extern unsigned char HARCH24[];
extern unsigned char HARCH25[];
extern unsigned char HARCH26[];
extern unsigned char HARCH27[];
extern unsigned char HARCH28[];
extern unsigned char HARCH29[];
extern unsigned char HARCH30[];
extern unsigned char HARCH31[];
extern unsigned char HARCH32[];
extern unsigned char HARCH33[];
extern unsigned char HARCH34[];
extern unsigned char HARCH35[];
extern unsigned char HARCH36[];
extern unsigned char HARCH37[];
extern unsigned char HARCH38[];
extern unsigned char HARCH39[];
extern unsigned char HARCH40[];
extern unsigned char USTAIRS[];
extern unsigned char DSTAIRS[];
extern unsigned char WARPSTAIRS[];
extern unsigned char CRUSHCOL[];
extern unsigned char BIG1[];
extern unsigned char BIG2[];
extern unsigned char BIG3[];
extern unsigned char BIG4[];
extern unsigned char BIG5[];
extern unsigned char BIG6[];
extern unsigned char BIG7[];
extern unsigned char BIG8[];
extern unsigned char BIG9[];
extern unsigned char BIG10[];
extern unsigned char RUINS1[];
extern unsigned char RUINS2[];
extern unsigned char RUINS3[];
extern unsigned char RUINS4[];
extern unsigned char RUINS5[];
extern unsigned char RUINS6[];
extern unsigned char RUINS7[];
extern unsigned char PANCREAS1[];
extern unsigned char PANCREAS2[];
extern unsigned char CTRDOOR1[];
extern unsigned char CTRDOOR2[];
extern unsigned char CTRDOOR3[];
extern unsigned char CTRDOOR4[];
extern unsigned char CTRDOOR5[];
extern unsigned char CTRDOOR6[];
extern unsigned char CTRDOOR7[];
extern unsigned char CTRDOOR8[];
extern int Patterns[100][10];

#endif /* __DRLG_L2_H__ */
