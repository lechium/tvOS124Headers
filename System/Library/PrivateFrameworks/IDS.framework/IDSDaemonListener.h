/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSProtocolChecker, NSMutableDictionary, NSString;

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSHashTable* _handlers;
	NSProtocolChecker* _protocol;
	NSMutableDictionary* _topicToAccountDictionaries;
	NSMutableDictionary* _topicToEnabledAccounts;
	NSMutableDictionary* _accountToDevices;
	NSMutableDictionary* _accountToActiveDeviceUniqueID;
	NSString* _deviceIdentifier;
	BOOL _setupComplete;
	BOOL _postedSetupComplete;
	BOOL _setupInfoComplete;
	BOOL _connectionComplete;
	BOOL _hidingDisconnect;

}

@property (nonatomic,readonly) BOOL isSetupComplete; 
@property (nonatomic,readonly) BOOL hasPostedSetupComplete; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (assign,setter=_setHidingDisconnect:,nonatomic) BOOL _hidingDisconnect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deviceIdentifier;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)connectionComplete:(BOOL)arg1 ;
-(void)setupCompleteWithInfo:(id)arg1 ;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)account:(id)arg1 accountInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2 ;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2 ;
-(void)device:(id)arg1 nsuuidChanged:(id)arg2 ;
-(void)continuityDidUpdateState:(long long)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 ;
-(void)continuityDidStartAdvertisingOfType:(long long)arg1 ;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1 ;
-(void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2 ;
-(void)continuityDidStartScanningForType:(long long)arg1 ;
-(void)continuityDidStopScanningForType:(long long)arg1 ;
-(void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2 ;
-(void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3 ;
-(void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2 ;
-(void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2 ;
-(void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2 ;
-(void)deviceIdentifierDidChange:(id)arg1 ;
-(void)didSwitchActivePairedDevice:(id)arg1 ;
-(void)deactivatePairedDevices;
-(void)_callHandlersWithBlockOnIvarQueue:(/*^block*/id)arg1 ;
-(void)_callHandlersWithBlockOnIvarQueue:(/*^block*/id)arg1 cleanup:(/*^block*/id)arg2 ;
-(void)_removeAccountOnIvarQueue:(id)arg1 ;
-(void)_callHandlersWithBlock:(/*^block*/id)arg1 ;
-(id)_uniqueIDForDevice:(id)arg1 ;
-(void)_internalDidSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 ;
-(void)_callHandlersAsyncWithBlock:(/*^block*/id)arg1 ;
-(void)_internalSwitchActivePairedDevice:(id)arg1 forAccount:(id)arg2 ;
-(void)__postSetupComplete;
-(id)accountDictionariesForService:(id)arg1 ;
-(id)enabledAccountsForService:(id)arg1 ;
-(id)dependentDevicesForAccount:(id)arg1 ;
-(void)didGetIdentities:(id)arg1 error:(id)arg2 ;
-(void)switchActivePairedDevice:(id)arg1 forAccount:(id)arg2 ;
-(void)_performSyncBlock:(/*^block*/id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(BOOL)_hidingDisconnect;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)_setHidingDisconnect:(BOOL)arg1 ;
-(BOOL)hasPostedSetupComplete;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(BOOL)isSetupComplete;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

