/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation {

	/*^block*/id _discoverUserInfosCompletionBlock;
	NSArray* _emailAddresses;
	NSArray* _userRecordIDs;
	NSMutableDictionary* _emailsToUserInfos;
	NSMutableDictionary* _userRecordIDsToUserInfos;

}

@property (nonatomic,retain) NSMutableDictionary * emailsToUserInfos;                     //@synthesize emailsToUserInfos=_emailsToUserInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userRecordIDsToUserInfos;              //@synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * userRecordIDs;                                       //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (nonatomic,copy) id discoverUserInfosCompletionBlock;                           //@synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(void)setDiscoverUserInfosCompletionBlock:(id)arg1 ;
-(Class)operationInfoClass;
-(NSArray *)userRecordIDs;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(id)discoverUserInfosCompletionBlock;
-(NSMutableDictionary *)emailsToUserInfos;
-(NSMutableDictionary *)userRecordIDsToUserInfos;
-(void)setEmailsToUserInfos:(NSMutableDictionary *)arg1 ;
-(void)setUserRecordIDsToUserInfos:(NSMutableDictionary *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)init;
@end

