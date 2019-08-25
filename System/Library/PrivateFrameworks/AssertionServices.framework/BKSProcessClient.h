/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@protocol BKSProcessClientDelegate;
@interface BKSProcessClient : BSBaseXPCClient {

	id<BKSProcessClientDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<BKSProcessClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue; 
-(void)queue_connectionWasInterrupted;
-(void)queue_handleMessage:(id)arg1 ;
-(void)_queue_handleSuspendedStateChanged:(id)arg1 ;
-(void)_queue_handleExpirationWarning:(id)arg1 ;
-(void)_queue_handleDebuggingStateChanged:(id)arg1 ;
-(void)_queue_handleExited:(id)arg1 ;
-(id<BKSProcessClientDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
