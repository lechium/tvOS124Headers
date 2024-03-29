/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject, NSHashTable;

@interface MNXPCTransactionManager : NSObject {

	NSObject*<OS_os_transaction> _xpcTransaction;
	NSHashTable* _requesters;

}
+(id)sharedInstance;
-(void)addHighMemoryThresholdRequest:(id)arg1 ;
-(void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2 ;
@end

