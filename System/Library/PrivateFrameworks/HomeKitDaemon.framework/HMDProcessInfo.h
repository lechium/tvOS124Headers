/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDApplicationInfo, NSArray, NSObject, NSHashTable, NSString;

@interface HMDProcessInfo : HMFObject <HMFLogging> {

	BOOL _viewService;
	int _pid;
	unsigned long long _state;
	HMDApplicationInfo* _appInfo;
	NSArray* _runningReasons;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSHashTable* _connectionProxies;

}

@property (nonatomic,readonly) int pid;                                                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSArray * runningReasons;                                                                   //@synthesize runningReasons=_runningReasons - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcQueue;                                                    //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                               //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectionProxies;                                                          //@synthesize connectionProxies=_connectionProxies - In the implementation block
@property (getter=isViewService,nonatomic,readonly) BOOL viewService;                                                    //@synthesize viewService=_viewService - In the implementation block
@property (getter=isForegrounded,nonatomic,readonly) BOOL foreground; 
@property (getter=isBackgroundUpgradedToForeground,nonatomic,readonly) BOOL backgroundUpgradedToForeground; 
@property (getter=isBackgrounded,nonatomic,readonly) BOOL background; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (getter=isTerminated,nonatomic,readonly) BOOL terminated; 
@property (nonatomic,__weak,readonly) HMDApplicationInfo * appInfo;                                                      //@synthesize appInfo=_appInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)isForegrounded;
-(void)initiateRefresh;
-(HMDApplicationInfo *)appInfo;
-(int)pid;
-(NSHashTable *)connectionProxies;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3 xpcQueue:(id)arg4 ;
-(BOOL)isBackgroundUpgradedToForeground;
-(BOOL)isTerminated;
-(unsigned long long)proxyCount;
-(void)addConnectionProxy:(id)arg1 ;
-(void)removeConnectionProxy:(id)arg1 ;
-(id)_activeRequestIdentifiers;
-(BOOL)isViewService;
-(NSArray *)runningReasons;
-(void)setRunningReasons:(NSArray *)arg1 ;
-(id)init;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isBackgrounded;
-(void)activate;
-(BOOL)isSuspended;
-(void)deactivate;
@end

