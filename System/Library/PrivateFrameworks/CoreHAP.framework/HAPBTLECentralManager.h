/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CBCentralManager, NSMutableSet, NSString;

@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	CBCentralManager* centralManager;
	NSMutableSet* delegates;
	long long centralManagerState;
	long long _state;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) CBCentralManager * centralManager; 
@property (nonatomic,retain) NSMutableSet * delegates; 
@property (assign) long long centralManagerState; 
@property (readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getInstance;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCentralManagerState:(long long)arg1 ;
-(id)_getCentralManager;
-(long long)centralManagerState;
-(void)registerCentralManagerDelegate:(id)arg1 ;
-(CBCentralManager *)centralManager;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(id)init;
-(long long)state;
@end
