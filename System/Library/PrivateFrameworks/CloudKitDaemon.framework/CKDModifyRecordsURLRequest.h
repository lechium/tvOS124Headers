/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSDictionary, NSArray, NSData, NSMutableDictionary;

@interface CKDModifyRecordsURLRequest : CKDURLRequest {

	BOOL _atomic;
	BOOL _oplock;
	BOOL _sendAllFields;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _pluginFieldsForRecordDeletesByID;
	/*^block*/id _recordPostedBlock;
	NSArray* _records;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	NSMutableDictionary* _recordIDByRequestID;
	NSMutableDictionary* _recordByRequestID;

}

@property (nonatomic,retain) NSArray * records;                                             //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL oplock;                                                   //@synthesize oplock=_oplock - In the implementation block
@property (assign,nonatomic) BOOL sendAllFields;                                            //@synthesize sendAllFields=_sendAllFields - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;                     //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordByRequestID;                       //@synthesize recordByRequestID=_recordByRequestID - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToDeleteToEtags;                       //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginFieldsForRecordDeletesByID;               //@synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,copy) id recordPostedBlock;                                            //@synthesize recordPostedBlock=_recordPostedBlock - In the implementation block
-(void)setRecords:(NSArray *)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(id)generateRequestOperations;
-(int)isolationLevel;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(BOOL)atomic;
-(void)setAtomic:(BOOL)arg1 ;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(NSArray *)recordIDsToDelete;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(NSDictionary *)pluginFieldsForRecordDeletesByID;
-(NSData *)clientChangeTokenData;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(BOOL)arg3 sendAllFields:(BOOL)arg4 clientChangeTokenData:(id)arg5 ;
-(void)setRecordPostedBlock:(id)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(void)setPluginFieldsForRecordDeletesByID:(NSDictionary *)arg1 ;
-(BOOL)sendAllFields;
-(BOOL)oplock;
-(NSMutableDictionary *)recordByRequestID;
-(id)recordPostedBlock;
-(void)setOplock:(BOOL)arg1 ;
-(void)setSendAllFields:(BOOL)arg1 ;
-(void)setRecordByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
-(NSArray *)records;
@end

