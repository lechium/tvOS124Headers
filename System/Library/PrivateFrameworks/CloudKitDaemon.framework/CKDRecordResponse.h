/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, NSString, CKRecord;

@interface CKDRecordResponse : NSObject {

	CKRecordID* _recordID;
	NSString* _etag;
	CKRecord* _record;

}

@property (nonatomic,retain) CKRecordID * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                    //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) CKRecord * record;                  //@synthesize record=_record - In the implementation block
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(CKRecord *)record;
-(id)CKPropertiesDescription;
-(void)setRecord:(CKRecord *)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)description;
@end

