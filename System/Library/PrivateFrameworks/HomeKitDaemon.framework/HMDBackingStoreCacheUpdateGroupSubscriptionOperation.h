/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, CKRecordZoneSubscription;

@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	CKRecordZoneSubscription* _subscription;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecordZoneSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
-(HMDBackingStoreCacheGroup *)record;
-(id)mainReturningError;
-(CKRecordZoneSubscription *)subscription;
-(void)setSubscription:(CKRecordZoneSubscription *)arg1 ;
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(id)initWithGroup:(id)arg1 subscription:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

