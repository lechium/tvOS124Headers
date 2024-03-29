/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiShimDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSDictionary, NSString;

@interface WiFiShim : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	WiFiDeviceClientRef _awdlDevice;
	BOOL _registeredForCallbacks;
	unsigned char _lqmCallbackRegistrationAttempts;
	id _tdObserver;
	BOOL _awdlLinkUp;
	unsigned char _lqmCallbacks;
	BOOL _registeredForLQMCallbacks;
	BOOL _hasAssociation;
	BOOL _apIsAwake;
	BOOL _lqmCallbackBradycardiaTimerResumed;
	char _awdlLinkState;
	id<WiFiShimDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _lqmCallbackBradycardiaTimer;
	NSDictionary* _awdlStateDict;
	NSObject*<OS_dispatch_source> _awdlTimer;
	long long _awdlTimerCount;
	NSString* _lastSsid;
	NSString* _lastBssid;

}

@property (assign,nonatomic) unsigned char lqmCallbacks;                                             //@synthesize lqmCallbacks=_lqmCallbacks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL registeredForLQMCallbacks;                                         //@synthesize registeredForLQMCallbacks=_registeredForLQMCallbacks - In the implementation block
@property (assign,nonatomic) BOOL hasAssociation;                                                    //@synthesize hasAssociation=_hasAssociation - In the implementation block
@property (assign,nonatomic) BOOL apIsAwake;                                                         //@synthesize apIsAwake=_apIsAwake - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> lqmCallbackBradycardiaTimer;              //@synthesize lqmCallbackBradycardiaTimer=_lqmCallbackBradycardiaTimer - In the implementation block
@property (assign,nonatomic) BOOL lqmCallbackBradycardiaTimerResumed;                                //@synthesize lqmCallbackBradycardiaTimerResumed=_lqmCallbackBradycardiaTimerResumed - In the implementation block
@property (nonatomic,retain) NSDictionary * awdlStateDict;                                           //@synthesize awdlStateDict=_awdlStateDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> awdlTimer;                                //@synthesize awdlTimer=_awdlTimer - In the implementation block
@property (assign,nonatomic) long long awdlTimerCount;                                               //@synthesize awdlTimerCount=_awdlTimerCount - In the implementation block
@property (assign,nonatomic) char awdlLinkState;                                                     //@synthesize awdlLinkState=_awdlLinkState - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef awdlDevice;                                         //@synthesize awdlDevice=_awdlDevice - In the implementation block
@property (nonatomic,retain) NSString * lastSsid;                                                    //@synthesize lastSsid=_lastSsid - In the implementation block
@property (nonatomic,retain) NSString * lastBssid;                                                   //@synthesize lastBssid=_lastBssid - In the implementation block
@property (nonatomic,retain) id<WiFiShimDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL awdlLinkUp;                                                                //@synthesize awdlLinkUp=_awdlLinkUp - In the implementation block
+(id)sharedInstance;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(WiFiManagerClientRef)wifiManager;
-(void)_triggerDisconnectEdge:(id)arg1 ;
-(id)ssidForInterfaceWithName:(id)arg1 ;
-(id)bssidForInterfaceWithName:(id)arg1 ;
-(long long)phyModeForInterfaceWithName:(id)arg1 ;
-(BOOL)isHotSpotOnInterfaceWithName:(id)arg1 ;
-(id)getAWDLPeerList;
-(void)registerForCallbacks;
-(void)unregisterForCallbacks;
-(WiFiDeviceClientRef)wifiDevice;
-(void)setLastSsid:(NSString *)arg1 ;
-(void)setLastBssid:(NSString *)arg1 ;
-(void)_unregisterForLQMCallbacks;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setAWDLDevice:(WiFiDeviceClientRef)arg1 ;
-(BOOL)_shouldRegisterForLQMCallbacks;
-(void)_registerForLQMCallbacks;
-(void)changeLQMBradycardiaMonitoring;
-(void)setAwdlStateDict:(NSDictionary *)arg1 ;
-(char)awdlLinkState;
-(void)setAwdlLinkState:(char)arg1 ;
-(void)_setAWDLLinkUp:(BOOL)arg1 ;
-(id)awdlPeerList;
-(NSDictionary *)awdlStateDict;
-(NSString *)lastSsid;
-(NSString *)lastBssid;
-(BOOL)hasAssociation;
-(void)setHasAssociation:(BOOL)arg1 ;
-(void)resumeLQMCallbackBradycardiaMonitoring;
-(void)suspendLQMCallbackBradycardiaMonitoring;
-(unsigned char)lqmCallbacks;
-(void)setLqmCallbacks:(unsigned char)arg1 ;
-(void)_wifiDevicesRefresh;
-(void)_delayedRegisterForLQMCallbacks;
-(void)handleAWDLStateChange:(id)arg1 ;
-(WiFiDeviceClientRef)awdlDevice;
-(BOOL)awdlLinkUp;
-(BOOL)registeredForLQMCallbacks;
-(void)setRegisteredForLQMCallbacks:(BOOL)arg1 ;
-(BOOL)apIsAwake;
-(void)setApIsAwake:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)lqmCallbackBradycardiaTimer;
-(void)setLqmCallbackBradycardiaTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)lqmCallbackBradycardiaTimerResumed;
-(void)setLqmCallbackBradycardiaTimerResumed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)awdlTimer;
-(void)setAwdlTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)awdlTimerCount;
-(void)setAwdlTimerCount:(long long)arg1 ;
-(void)setAwdlDevice:(WiFiDeviceClientRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<WiFiShimDelegate>)arg1 ;
-(id<WiFiShimDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

