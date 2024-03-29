/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, CKDRecordPCSData;

@interface CKDRecordAncestor : NSObject {

	CKRecordID* _recordID;
	CKRecordID* _parentID;
	CKDRecordPCSData* _pcsData;

}

@property (nonatomic,retain) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKRecordID * parentID;                   //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) CKDRecordPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
-(CKDRecordPCSData *)pcsData;
-(void)setPcsData:(CKDRecordPCSData *)arg1 ;
-(CKRecordID *)parentID;
-(void)setParentID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

