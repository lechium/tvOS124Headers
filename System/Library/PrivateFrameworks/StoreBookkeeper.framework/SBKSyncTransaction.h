/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKTransaction.h>

@protocol SBKSyncTransactionProcessing;
@class NSString, NSArray, NSURL;

@interface SBKSyncTransaction : SBKTransaction {

	NSString* _syncAnchor;
	NSString* _domain;
	NSArray* _keysToUpdate;
	NSArray* _keysToDelete;
	long long _conflictDetectionType;
	id<SBKSyncTransactionProcessing> _transactionProcessor;
	long long _type;
	NSURL* _syncRequestURL;

}

@property (readonly) long long type;                                                   //@synthesize type=_type - In the implementation block
@property (readonly) long long conflictDetectionType;                                  //@synthesize conflictDetectionType=_conflictDetectionType - In the implementation block
@property (readonly) NSURL * syncRequestURL;                                           //@synthesize syncRequestURL=_syncRequestURL - In the implementation block
@property (copy,readonly) NSString * syncAnchor;                                       //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (readonly) NSArray * keysToUpdate;                                           //@synthesize keysToUpdate=_keysToUpdate - In the implementation block
@property (readonly) NSArray * keysToDelete;                                           //@synthesize keysToDelete=_keysToDelete - In the implementation block
@property (__weak) id<SBKSyncTransactionProcessing> transactionProcessor;              //@synthesize transactionProcessor=_transactionProcessor - In the implementation block
-(NSString *)syncAnchor;
-(id)clampsKey;
-(id)newRequest;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)keysToUpdate;
-(NSArray *)keysToDelete;
-(long long)conflictDetectionType;
-(id)conflictDetectionOrdinalForKey:(id)arg1 ;
-(id)keyValuePairForUpdatedKey:(id)arg1 ;
-(NSURL *)syncRequestURL;
-(id)initWithStoreBagContext:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(long long)arg5 ;
-(void)setTransactionProcessor:(id<SBKSyncTransactionProcessing>)arg1 ;
-(id)initWithSyncRequestURL:(id)arg1 domain:(id)arg2 syncAnchor:(id)arg3 keysToUpdate:(id)arg4 keysToDelete:(id)arg5 conflictDetectionType:(long long)arg6 ;
-(id<SBKSyncTransactionProcessing>)transactionProcessor;
-(void)_validateTransactionProcessor:(id)arg1 ;
-(id)requestURL;
-(id)description;
-(long long)type;
-(id)domain;
@end

