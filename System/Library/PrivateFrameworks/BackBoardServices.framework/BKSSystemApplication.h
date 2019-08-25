/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSSystemApplicationClientDelegate.h>

@protocol OS_dispatch_queue, BKSSystemApplicationDelegate;
@class NSObject, BKSSystemApplicationClient, NSString;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BKSSystemApplicationClient* _client;
	id<BKSSystemApplicationDelegate> _delegate;
	BOOL _waitForDataMigration;
	double _systemIdleSleepInterval;

}

@property (assign,nonatomic,__weak) id<BKSSystemApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL waitForDataMigration;                                     //@synthesize waitForDataMigration=_waitForDataMigration - In the implementation block
@property (assign,nonatomic) double systemIdleSleepInterval;                                //@synthesize systemIdleSleepInterval=_systemIdleSleepInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)waitForDataMigration;
-(BOOL)clientIsAliveForWatchdog:(id)arg1 ;
-(void)restart;
-(void)bootstrap;
-(void)finishBooting;
-(double)systemIdleSleepInterval;
-(void)setWaitForDataMigration:(BOOL)arg1 ;
-(void)setSystemIdleSleepInterval:(double)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<BKSSystemApplicationDelegate>)arg1 ;
-(id<BKSSystemApplicationDelegate>)delegate;
-(void)start;
-(id)initWithQueue:(id)arg1 ;
-(void)sendActions:(id)arg1 ;
@end

