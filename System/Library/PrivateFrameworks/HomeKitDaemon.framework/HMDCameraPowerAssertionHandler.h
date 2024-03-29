/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging> {

	unsigned _powerAssertion;
	NSMutableSet* _currentRequestHandlerSessionIDs;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableSet * currentRequestHandlerSessionIDs;              //@synthesize currentRequestHandlerSessionIDs=_currentRequestHandlerSessionIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned powerAssertion;                                       //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedHandler;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)registerRemoteRequestHandler:(id)arg1 ;
-(void)deregisterRemoteRequestHandler:(id)arg1 ;
-(NSMutableSet *)currentRequestHandlerSessionIDs;
-(unsigned)powerAssertion;
-(void)setPowerAssertion:(unsigned)arg1 ;
-(id)init;
@end

