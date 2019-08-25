/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _reachabilityRequests;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	SCPreferencesRef _wifiPreferences;
	CFDictionaryRef _wifiObservers;
	BOOL _networkNotified;
	BOOL _networkReachable;
	BOOL _wifiNotified;
	BOOL _wifiEnabled;

}
+(id)sharedNetworkObserver;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)_wifiFirstCallBack:(id)arg1 ;
-(void)_wifiObserversInitialize;
-(void)addWiFiObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeWiFiObserver:(id)arg1 ;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)_networkObserversInitialize;
-(BOOL)isWiFiEnabled;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3 ;
-(void)removeObserver:(id)arg1 forHostname:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
@end

