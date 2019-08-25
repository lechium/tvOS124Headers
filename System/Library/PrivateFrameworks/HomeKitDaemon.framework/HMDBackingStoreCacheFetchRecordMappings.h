/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	/*^block*/id _fetchResult;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,copy) id fetchResult;                                        //@synthesize fetchResult=_fetchResult - In the implementation block
-(id)fetchResult;
-(void)setFetchResult:(id)arg1 ;
-(id)mainReturningError;
-(HMDBackingStoreCacheShareGroup *)share;
-(void)setShare:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)initWithShareGroup:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
-(id)initWithGroup:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
-(HMDBackingStoreCacheGroup *)group;
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
@end

