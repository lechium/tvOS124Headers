/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServerBTLE.h>
#import <libobjc.A.dylib/HAPSecuritySessionDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol OS_dispatch_source;
@class NSMapTable, NSMutableArray, CBService, CBCharacteristic, NSString, HAPSecuritySession, NSObject;

@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE <HAPSecuritySessionDelegate, CBPeripheralDelegate> {

	PairingSessionPrivateRef _pairingSession;
	BOOL _startPairingRequested;
	BOOL _pairingFeaturesRead;
	BOOL _securitySessionOpening;
	BOOL _disconnecting;
	BOOL _unpairedIdentifyRequested;
	BOOL _removeOnDisconnect;
	unsigned long long _state;
	unsigned long long _connectionRetryCount;
	NSMapTable* _btleServiceToHAPServiceMap;
	unsigned long long _characteristicDiscoveryRequestCount;
	unsigned long long _characteristicValueReadCount;
	unsigned long long _metadataDiscoveryRequestCount;
	unsigned long long _metadataValueReadCount;
	unsigned long long _availableInstanceID;
	NSMapTable* _btleCharacteristicToHAPCharacteristicMap;
	NSMapTable* _hapCharacteristicReadCompletionQueues;
	NSMapTable* _hapCharacteristicWriteCompletionQueues;
	NSMapTable* _hapCharacteristicEnableEventCompletionQueues;
	NSMutableArray* _addRemovePairingOperationsQueue;
	CBService* _pairingService;
	CBCharacteristic* _pairSetupCharacteristic;
	CBCharacteristic* _pairVerifyCharacteristic;
	CBCharacteristic* _pairingFeaturesCharacteristic;
	CBCharacteristic* _pairingsCharacteristic;
	CBService* _accessoryInfoService;
	CBCharacteristic* _identifyCharacteristic;
	CBCharacteristic* _modelCharacteristic;
	CBCharacteristic* _serialNumberCharacteristic;
	CBCharacteristic* _manufacturerCharacteristic;
	NSString* _controllerUsername;
	/*^block*/id _pairVerifyCompletionBlock;
	unsigned long long _pairingFeatureFlags;
	HAPSecuritySession* _securitySession;
	NSObject*<OS_dispatch_source> _connectionLifetimeTimer;
	double _idleConnectionTimeoutInSec;
	/*^block*/id _unpairedIdentifyCompletionBlock;

}

@property (assign,nonatomic) unsigned long long state;                                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long connectionRetryCount;                                  //@synthesize connectionRetryCount=_connectionRetryCount - In the implementation block
@property (nonatomic,retain) NSMapTable * btleServiceToHAPServiceMap;                                  //@synthesize btleServiceToHAPServiceMap=_btleServiceToHAPServiceMap - In the implementation block
@property (assign,nonatomic) unsigned long long characteristicDiscoveryRequestCount;                   //@synthesize characteristicDiscoveryRequestCount=_characteristicDiscoveryRequestCount - In the implementation block
@property (assign,nonatomic) unsigned long long characteristicValueReadCount;                          //@synthesize characteristicValueReadCount=_characteristicValueReadCount - In the implementation block
@property (assign,nonatomic) unsigned long long metadataDiscoveryRequestCount;                         //@synthesize metadataDiscoveryRequestCount=_metadataDiscoveryRequestCount - In the implementation block
@property (assign,nonatomic) unsigned long long metadataValueReadCount;                                //@synthesize metadataValueReadCount=_metadataValueReadCount - In the implementation block
@property (assign,nonatomic) unsigned long long availableInstanceID;                                   //@synthesize availableInstanceID=_availableInstanceID - In the implementation block
@property (nonatomic,retain) NSMapTable * btleCharacteristicToHAPCharacteristicMap;                    //@synthesize btleCharacteristicToHAPCharacteristicMap=_btleCharacteristicToHAPCharacteristicMap - In the implementation block
@property (nonatomic,retain) NSMapTable * hapCharacteristicReadCompletionQueues;                       //@synthesize hapCharacteristicReadCompletionQueues=_hapCharacteristicReadCompletionQueues - In the implementation block
@property (nonatomic,retain) NSMapTable * hapCharacteristicWriteCompletionQueues;                      //@synthesize hapCharacteristicWriteCompletionQueues=_hapCharacteristicWriteCompletionQueues - In the implementation block
@property (nonatomic,retain) NSMapTable * hapCharacteristicEnableEventCompletionQueues;                //@synthesize hapCharacteristicEnableEventCompletionQueues=_hapCharacteristicEnableEventCompletionQueues - In the implementation block
@property (nonatomic,retain) NSMutableArray * addRemovePairingOperationsQueue;                         //@synthesize addRemovePairingOperationsQueue=_addRemovePairingOperationsQueue - In the implementation block
@property (nonatomic,retain) CBService * pairingService;                                               //@synthesize pairingService=_pairingService - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairSetupCharacteristic;                               //@synthesize pairSetupCharacteristic=_pairSetupCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairVerifyCharacteristic;                              //@synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairingFeaturesCharacteristic;                         //@synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairingsCharacteristic;                                //@synthesize pairingsCharacteristic=_pairingsCharacteristic - In the implementation block
@property (nonatomic,retain) CBService * accessoryInfoService;                                         //@synthesize accessoryInfoService=_accessoryInfoService - In the implementation block
@property (nonatomic,retain) CBCharacteristic * identifyCharacteristic;                                //@synthesize identifyCharacteristic=_identifyCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * modelCharacteristic;                                   //@synthesize modelCharacteristic=_modelCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * serialNumberCharacteristic;                            //@synthesize serialNumberCharacteristic=_serialNumberCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * manufacturerCharacteristic;                            //@synthesize manufacturerCharacteristic=_manufacturerCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * controllerUsername;                                            //@synthesize controllerUsername=_controllerUsername - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletionBlock;                                               //@synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL startPairingRequested;                                               //@synthesize startPairingRequested=_startPairingRequested - In the implementation block
@property (assign,nonatomic) BOOL pairingFeaturesRead;                                                 //@synthesize pairingFeaturesRead=_pairingFeaturesRead - In the implementation block
@property (assign,nonatomic) unsigned long long pairingFeatureFlags;                                   //@synthesize pairingFeatureFlags=_pairingFeatureFlags - In the implementation block
@property (nonatomic,retain) HAPSecuritySession * securitySession;                                     //@synthesize securitySession=_securitySession - In the implementation block
@property (assign,getter=isSecuritySessionOpening,nonatomic) BOOL securitySessionOpening;              //@synthesize securitySessionOpening=_securitySessionOpening - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionLifetimeTimer;                    //@synthesize connectionLifetimeTimer=_connectionLifetimeTimer - In the implementation block
@property (assign,nonatomic) double idleConnectionTimeoutInSec;                                        //@synthesize idleConnectionTimeoutInSec=_idleConnectionTimeoutInSec - In the implementation block
@property (assign,getter=isDisconnecting,nonatomic) BOOL disconnecting;                                //@synthesize disconnecting=_disconnecting - In the implementation block
@property (assign,nonatomic) BOOL unpairedIdentifyRequested;                                           //@synthesize unpairedIdentifyRequested=_unpairedIdentifyRequested - In the implementation block
@property (nonatomic,copy) id unpairedIdentifyCompletionBlock;                                         //@synthesize unpairedIdentifyCompletionBlock=_unpairedIdentifyCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL removeOnDisconnect;                                                  //@synthesize removeOnDisconnect=_removeOnDisconnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializeCharacteristicWriteValue:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(BOOL)arg3 authenticationData:(id)arg4 error:(id*)arg5 ;
+(id)deserializeCharacteristicReadData:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditonalAuthentication:(BOOL)arg3 error:(id*)arg4 ;
+(id)_convertFromBTLEToHAPUUID:(id)arg1 ;
-(void)_resetState;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)_getAttributeDatabase;
-(void)setPairVerifyCompletionBlock:(id)arg1 ;
-(void)_establishSecureSession;
-(int)_pairSetupTryPassword:(id)arg1 ;
-(void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)pairVerifyCompletionBlock;
-(NSString *)controllerUsername;
-(int)_ensurePairingSessionIsInitializedWithType:(unsigned)arg1 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setControllerUsername:(NSString *)arg1 ;
-(CBCharacteristic *)pairingsCharacteristic;
-(void)setSecuritySession:(HAPSecuritySession *)arg1 ;
-(void)setSecuritySessionOpening:(BOOL)arg1 ;
-(CBCharacteristic *)pairVerifyCharacteristic;
-(HAPSecuritySession *)securitySession;
-(id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2 ;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSecuritySessionOpening;
-(void)setPairVerifyCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setPairingsCharacteristic:(CBCharacteristic *)arg1 ;
-(id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)securitySessionIsOpening:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg1 ;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2 ;
-(CBService *)pairingService;
-(void)setPairingService:(CBService *)arg1 ;
-(void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateConnectionIdleTime:(unsigned char)arg1 ;
-(void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2 ;
-(id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13 ;
-(void)_createPrimaryAccessoryFromAdvertisementData;
-(void)_enableEvent:(BOOL)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(CBCharacteristic *)pairingFeaturesCharacteristic;
-(CBCharacteristic *)pairSetupCharacteristic;
-(CBCharacteristic *)identifyCharacteristic;
-(void)_handleConnectionWithError:(id)arg1 ;
-(void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(unsigned long long)hapBLEProtocolVersion;
-(void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)setIdentifyCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setPairingFeaturesCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setPairSetupCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setBtleServiceToHAPServiceMap:(NSMapTable *)arg1 ;
-(void)setBtleCharacteristicToHAPCharacteristicMap:(NSMapTable *)arg1 ;
-(void)setHapCharacteristicReadCompletionQueues:(NSMapTable *)arg1 ;
-(void)setHapCharacteristicWriteCompletionQueues:(NSMapTable *)arg1 ;
-(void)setHapCharacteristicEnableEventCompletionQueues:(NSMapTable *)arg1 ;
-(void)setAddRemovePairingOperationsQueue:(NSMutableArray *)arg1 ;
-(void)setModelCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setSerialNumberCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setManufacturerCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setConnectionRetryCount:(unsigned long long)arg1 ;
-(void)setCharacteristicDiscoveryRequestCount:(unsigned long long)arg1 ;
-(void)setCharacteristicValueReadCount:(unsigned long long)arg1 ;
-(void)setMetadataDiscoveryRequestCount:(unsigned long long)arg1 ;
-(void)setMetadataValueReadCount:(unsigned long long)arg1 ;
-(void)setAvailableInstanceID:(unsigned long long)arg1 ;
-(void)setStartPairingRequested:(BOOL)arg1 ;
-(BOOL)unpairedIdentifyRequested;
-(void)setRemoveOnDisconnect:(BOOL)arg1 ;
-(void)setUnpairedIdentifyRequested:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)connectionLifetimeTimer;
-(void)setConnectionLifetimeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIdleConnectionTimeoutInSec:(double)arg1 ;
-(void)_handlePairingStateMachine;
-(void)_updateConnectionLifetimeTimer;
-(void)_setupBTLEConnectionToPeripheral;
-(void)setAccessoryInfoService:(CBService *)arg1 ;
-(CBService *)accessoryInfoService;
-(BOOL)pairingFeaturesRead;
-(BOOL)startPairingRequested;
-(void)_cancelConnectionLifetimeTimer;
-(void)_checkForAuthPrompt;
-(CBCharacteristic *)modelCharacteristic;
-(CBCharacteristic *)manufacturerCharacteristic;
-(CBCharacteristic *)serialNumberCharacteristic;
-(int)_pairSetupStart;
-(void)_reallyEstablishSecureSession;
-(void)_handleHAPServiceDiscovery;
-(void)_handleDescriptorDiscovery;
-(void)_handleReadDescriptorValues;
-(void)setDisconnecting:(BOOL)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_btleCharacteristicForHAPCharacteristic:(id)arg1 ;
-(BOOL)isDisconnecting;
-(void)_enqueueEnableEventCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 forCharacteristic:(id)arg3 ;
-(id)_hapCharacteristicForBTLECharacteristic:(id)arg1 ;
-(id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg1 ;
-(void)_handleSuccessfulBTLEConnection;
-(unsigned long long)connectionRetryCount;
-(void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)unpairedIdentifyCompletionBlock;
-(void)setUnpairedIdentifyCompletionBlock:(id)arg1 ;
-(NSMapTable *)btleCharacteristicToHAPCharacteristicMap;
-(id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1 ;
-(/*^block*/id)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1 ;
-(NSMutableArray *)addRemovePairingOperationsQueue;
-(BOOL)removeOnDisconnect;
-(NSMapTable *)hapCharacteristicWriteCompletionQueues;
-(NSMapTable *)hapCharacteristicReadCompletionQueues;
-(NSMapTable *)hapCharacteristicEnableEventCompletionQueues;
-(void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(BOOL)_shouldEnableSessionSecurity;
-(void)_enqueueWriteCompletionHandler:(/*^block*/id)arg1 forCharacteristic:(id)arg2 ;
-(void)_readValueForCharacteristic:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enqueueReadCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 forCharacteristic:(id)arg3 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_pairVerifyHAPCharacteristic;
-(unsigned long long)characteristicDiscoveryRequestCount;
-(unsigned long long)metadataDiscoveryRequestCount;
-(unsigned long long)metadataValueReadCount;
-(unsigned long long)characteristicValueReadCount;
-(id)_parseBTLEService:(id)arg1 withInstanceId:(id)arg2 ;
-(NSMapTable *)btleServiceToHAPServiceMap;
-(id)_nextInstanceID;
-(unsigned long long)availableInstanceID;
-(void)_handleConnectionLifetimeTimeout;
-(void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2 ;
-(BOOL)_parseBTLECharacteristicDescriptor:(id)arg1 existingDescriptors:(id)arg2 characteristics:(id)arg3 ;
-(id)_pairSetupHAPCharacteristic;
-(int)_handlePairSetupExchangeWithData:(id)arg1 ;
-(void)_handleReceivedSecuritySessionSetupExchangeData:(id)arg1 ;
-(void)setPairingFeaturesRead:(BOOL)arg1 ;
-(void)_handleHAPServiceDiscoveryCompletionForService:(id)arg1 withInstanceId:(id)arg2 ;
-(void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2 ;
-(double)idleConnectionTimeoutInSec;
-(void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_enqueueOperation:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(BOOL)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_dequeueAndContinueOperation;
-(void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)pairingFeatureFlags;
-(void)setPairingFeatureFlags:(unsigned long long)arg1 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isBLELinkConnected;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startPairingWithConsentRequired:(BOOL)arg1 ;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)discoverAccessories;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

