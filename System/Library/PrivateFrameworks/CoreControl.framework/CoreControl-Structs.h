/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreControl.framework/CoreControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _DeviceEDID {
	int HDMIAddr;
	int VendorID;
	int ProductID;
	int SerialNo;
	int Week;
	int Year;
	char MonitorName[32];
} DeviceEDID;

typedef struct _DisplayDevice {
	char VendorName[32];
	int VendorID;
	int ProductID;
	int SerialNo;
	int Week;
	int Year;
	char VendorPnPID[4];
	char Model[32];
	int Type;
	int CEC;
	int CEC_VendorID;
	char CEC_Version[8];
	char CEC_Name[32];
	int CEC_OSD;
	int CEC_AS;
	int CEC_ON;
	int CEC_SB;
	int CEC_VU;
	int CEC_VD;
	int CEC_MT;
	int IR;
	char IR_ON[32];
	char IR_SB[32];
	char IR_VU[32];
	char IR_VD[32];
	char IR_MT[32];
	char IR_PW[32];
	char IR_P1[32];
	char IR_P2[32];
	char IR_P3[32];
	char IR_P4[32];
	int IR_ON_Delay;
	int IR_SB_Delay;
	int IR_VU_Delay;
	int IR_VD_Delay;
	int IR_MT_Delay;
	int IR_PW_Delay;
	int IR_P1_Delay;
	int IR_P2_Delay;
	int IR_P3_Delay;
	int IR_P4_Delay;
	char Notes[64];
} DisplayDevice;

