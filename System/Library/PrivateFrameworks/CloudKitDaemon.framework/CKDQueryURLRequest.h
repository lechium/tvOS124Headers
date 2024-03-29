/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSMutableArray, CKQuery, NSData, CKRecordZoneID, NSArray, NSSet, NSString;

@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	NSMutableArray* _queryResponses;
	BOOL _shouldFetchAssetContent;
	CKQuery* _query;
	NSData* _cursor;
	unsigned long long _limit;
	CKRecordZoneID* _zoneID;
	NSArray* _requestedFields;
	NSSet* _desiredAssetKeys;
	/*^block*/id _recordsParsedBlock;
	NSData* _resultsCursor;
	NSMutableArray* _recordResponses;

}

@property (nonatomic,retain) NSMutableArray * queryResponses;               //@synthesize queryResponses=_queryResponses - In the implementation block
@property (nonatomic,retain) NSData * resultsCursor;                        //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordResponses;              //@synthesize recordResponses=_recordResponses - In the implementation block
@property (nonatomic,retain) CKQuery * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSData * cursor;                               //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                       //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSArray * requestedFields;                     //@synthesize requestedFields=_requestedFields - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                  //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                      //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,copy) id recordsParsedBlock;                           //@synthesize recordsParsedBlock=_recordsParsedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQuery:(CKQuery *)arg1 ;
-(NSArray *)requestedFields;
-(void)setRequestedFields:(NSArray *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)shouldFetchAssetContent;
-(NSData *)resultsCursor;
-(void)setResultsCursor:(NSData *)arg1 ;
-(id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5 ;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setRecordsParsedBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidComplete;
-(NSSet *)desiredAssetKeys;
-(id)recordsParsedBlock;
-(NSMutableArray *)queryResponses;
-(void)setQueryResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recordResponses;
-(void)setRecordResponses:(NSMutableArray *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(int)operationType;
-(NSData *)cursor;
-(void)setCursor:(NSData *)arg1 ;
-(CKQuery *)query;
@end

