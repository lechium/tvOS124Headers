/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(FBTransaction *)transaction;
-(void)_dumpDebugInfo;
-(void)_watchdogTimerFired;
-(id)initWithTransaction:(id)arg1 ;
-(void)invalidate;
@end
