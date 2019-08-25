/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@class NSRecursiveLock, NSMapTable, PCSimpleTimer, NSString, NSTimer, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {

	NSRecursiveLock* _lock;
	NSMapTable* _delegatesAndQueues;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCSimpleTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCSimpleTimer* _wakeOnWiFiDisableTimer;
	void* _interfaceAssertion;
	int _WWANContextIdentifier;
	NSString* _WWANInterfaceName;
	BOOL _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	BOOL _isWWANInterfaceDataActive;
	BOOL _ctIsWWANInHomeCountry;
	BOOL _hasWWANStatusIndicator;
	BOOL _isWWANInterfaceSuspended;
	BOOL _isPowerStateDetectionSupported;
	BOOL _isWWANInterfaceInProlongedHighPowerState;
	BOOL _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	BOOL _isInCall;
	BOOL _isWakeOnWiFiSupported;
	BOOL _isWakeOnWiFiEnabled;
	BOOL _shouldOverrideOnCallBehavior;
	CoreTelephonyClient* _ctClient;
	CTXPCServiceSubscriptionContext* _currentDataSimContext;
	void* _ctServerConnection;

}

@property (readonly) BOOL isPowerStateDetectionSupported; 
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState; 
@property (readonly) BOOL isInCall; 
@property (readonly) BOOL isWWANInterfaceActivationPermitted; 
@property (readonly) BOOL areAllNetworkInterfacesDisabled; 
@property (readonly) BOOL isWWANInterfaceUp; 
@property (readonly) BOOL isWWANInHomeCountry; 
@property (readonly) BOOL isWWANBetterThanWiFi; 
@property (readonly) BOOL isWWANInterfaceSuspended; 
@property (readonly) BOOL doesWWANInterfaceExist; 
@property (readonly) NSString * WWANInterfaceName; 
@property (readonly) BOOL isInternetReachableViaWiFi; 
@property (readonly) BOOL isWakeOnWiFiSupported; 
@property (readonly) BOOL isInternetReachable; 
@property (nonatomic,readonly) NSString * currentLinkQualityString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)handleMachMessage:(void*)arg1 ;
-(void)_createCTConnection;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)_processCallStatusChanged:(id)arg1 ;
-(void)_processCurrentDataSimChangedLocked:(id)arg1 ;
-(void)_processConnectionStatusLocked:(id)arg1 ;
-(void)_processDataStatusLocked:(id)arg1 ;
-(void)_mainThreadCTConnectionAttempt;
-(void)_ctConnectionAttempt;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(BOOL)_isCurrentDataSimContextLocked:(id)arg1 ;
-(void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2 ;
-(BOOL)_wantsWWANInterfaceAssertion;
-(BOOL)_isCellularCall:(CTCallRef)arg1 ;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_inCallWWANOverrideTimerFired;
-(id)_nonCellularMonitor;
-(BOOL)_isWWANInHomeCountryLocked;
-(BOOL)_isInternetReachableLocked;
-(void)_adjustWakeOnWiFi;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(BOOL)_wantsWakeOnWiFiEnabled;
-(void)_adjustWakeOnWiFiLocked;
-(BOOL)doesWWANInterfaceExist;
-(BOOL)isWWANInterfaceActivationPermitted;
-(BOOL)isInCall;
-(BOOL)_isWiFiUsable;
-(BOOL)_allowBindingToWWAN;
-(void)bindCFStream:(CFReadStreamRef)arg1 toWWANInterface:(BOOL)arg2 ;
-(id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(NSString *)currentLinkQualityString;
-(BOOL)_wwanIsPoorLinkQuality;
-(BOOL)_wifiIsPoorLinkQuality;
-(BOOL)isWWANBetterThanWiFi;
-(BOOL)isWWANInterfaceUp;
-(NSString *)WWANInterfaceName;
-(BOOL)isWWANInterfaceSuspended;
-(BOOL)isPowerStateDetectionSupported;
-(BOOL)isWWANInterfaceInProlongedHighPowerState;
-(BOOL)isWWANInHomeCountry;
-(BOOL)isInternetReachableViaWiFi;
-(BOOL)isWakeOnWiFiSupported;
-(BOOL)areAllNetworkInterfacesDisabled;
-(void)cutWiFiManagerDeviceAttached:(id)arg1 ;
-(void)_updateWWANInterfaceAssertions;
-(void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)bindCFStreamToWWANInterface:(CFReadStreamRef)arg1 ;
-(id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6 ;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)isInternetReachable;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

