/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSArray, NSMutableSet, NSObject, HMFTimer, NSString;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate> {

	BonjourBrowserRef _bonjourBrowser;
	NSArray* _scanResults;
	NSMutableSet* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _pendingBonjourEvents;
	HMFTimer* _bonjourEventTimer;

}

@property (nonatomic,retain) NSMutableSet * discoveredAccessoryServers;                          //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingBonjourEvents;                                //@synthesize pendingBonjourEvents=_pendingBonjourEvents - In the implementation block
@property (nonatomic,retain) HMFTimer * bonjourEventTimer;                                       //@synthesize bonjourEventTimer=_bonjourEventTimer - In the implementation block
@property (nonatomic,copy) NSArray * scanResults;                                                //@synthesize scanResults=_scanResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(HMFTimer *)bonjourEventTimer;
-(void)setBonjourEventTimer:(HMFTimer *)arg1 ;
-(void)processPendingBonjourRemoveEvents:(id)arg1 ;
-(void)_matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleBonjourBrowserEvent:(unsigned)arg1 eventInfo:(id)arg2 ;
-(int)_initializeAndStartBonjourBrowser;
-(void)_processPendingBonjourEvent:(id)arg1 ;
-(int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2 ;
-(void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1 ;
-(int)_server:(id*)arg1 forBonjourDevice:(id)arg2 ;
-(void)_pendBonjourRemoveEvent:(id)arg1 ;
-(void)_handleBonjourRemoveWithEventInfo:(id)arg1 ;
-(void)_invalidateAccessoryServers:(BOOL)arg1 ;
-(void)_setReachability:(BOOL)arg1 forServer:(id)arg2 ;
-(void)_invalidateAndRemoveAccessoryServer:(id)arg1 ;
-(NSMutableSet *)pendingBonjourEvents;
-(void)_pendBonjourEvent:(id)arg1 ;
-(void)_timerDidExpire:(id)arg1 ;
-(void)mergeScanResults:(id)arg1 ;
-(void)startWACScanWithIdentifier:(id)arg1 ;
-(void)stopWACScan;
-(void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)setDiscoveredAccessoryServers:(NSMutableSet *)arg1 ;
-(void)setPendingBonjourEvents:(NSMutableSet *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(long long)linkType;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopDiscoveringAccessoryServers;
-(void)stopDiscoveringWACAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)startDiscoveringWACAccessoryServers;
-(void)matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableSet *)discoveredAccessoryServers;
-(void)updateWACAccessoryServerAgeOut:(long long)arg1 ;
-(NSArray *)scanResults;
-(void)setScanResults:(NSArray *)arg1 ;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

