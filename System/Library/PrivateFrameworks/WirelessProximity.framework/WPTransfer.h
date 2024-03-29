/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPTransferDelegate;
@class NSUUID, NSMutableSet, NSMutableData;

@interface WPTransfer : WPClient {

	BOOL _advertising;
	BOOL _scanning;
	BOOL _connectedToPeripheral;
	BOOL _unsubscribeComing;
	BOOL _advertiserConnected;
	BOOL _sentEOM;
	BOOL _sendingTransferComplete;
	id<WPTransferDelegate> _delegate;
	NSUUID* _currentPeripheralUUID;
	NSMutableSet* _ignoredDevices;
	NSMutableData* _notificationData;
	NSUUID* _currentlySubscribedCentral;
	long long _lockScanTimer;

}

@property (__weak) id<WPTransferDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL advertising;                                 //@synthesize advertising=_advertising - In the implementation block
@property (assign) BOOL scanning;                                    //@synthesize scanning=_scanning - In the implementation block
@property (assign) BOOL connectedToPeripheral;                       //@synthesize connectedToPeripheral=_connectedToPeripheral - In the implementation block
@property (assign) BOOL unsubscribeComing;                           //@synthesize unsubscribeComing=_unsubscribeComing - In the implementation block
@property (assign) BOOL advertiserConnected;                         //@synthesize advertiserConnected=_advertiserConnected - In the implementation block
@property (assign) BOOL sentEOM;                                     //@synthesize sentEOM=_sentEOM - In the implementation block
@property (retain) NSUUID * currentPeripheralUUID;                   //@synthesize currentPeripheralUUID=_currentPeripheralUUID - In the implementation block
@property (retain) NSMutableSet * ignoredDevices;                    //@synthesize ignoredDevices=_ignoredDevices - In the implementation block
@property (retain) NSMutableData * notificationData;                 //@synthesize notificationData=_notificationData - In the implementation block
@property (retain) NSUUID * currentlySubscribedCentral;              //@synthesize currentlySubscribedCentral=_currentlySubscribedCentral - In the implementation block
@property (assign) long long lockScanTimer;                          //@synthesize lockScanTimer=_lockScanTimer - In the implementation block
@property (assign) BOOL sendingTransferComplete;                     //@synthesize sendingTransferComplete=_sendingTransferComplete - In the implementation block
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(NSMutableSet *)ignoredDevices;
-(void)setIgnoredDevices:(NSMutableSet *)arg1 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)disconnectedDevice:(id)arg1 withError:(id)arg2 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)setAdvertising:(BOOL)arg1 ;
-(NSUUID *)currentPeripheralUUID;
-(void)setCurrentPeripheralUUID:(NSUUID *)arg1 ;
-(void)setConnectedToPeripheral:(BOOL)arg1 ;
-(NSMutableData *)notificationData;
-(void)setUnsubscribeComing:(BOOL)arg1 ;
-(void)transferFailed:(id)arg1 ;
-(void)setSentEOM:(BOOL)arg1 ;
-(NSUUID *)currentlySubscribedCentral;
-(BOOL)advertiserConnected;
-(BOOL)connectedToPeripheral;
-(void)setSendingTransferComplete:(BOOL)arg1 ;
-(BOOL)sendingTransferComplete;
-(BOOL)sentEOM;
-(void)setCurrentlySubscribedCentral:(NSUUID *)arg1 ;
-(void)setAdvertiserConnected:(BOOL)arg1 ;
-(BOOL)advertising;
-(BOOL)unsubscribeComing;
-(void)advertiserStateDidChange:(long long)arg1 ;
-(void)scannerStateDidChange:(long long)arg1 ;
-(void)setNotificationData:(NSMutableData *)arg1 ;
-(long long)lockScanTimer;
-(void)setLockScanTimer:(long long)arg1 ;
-(void)receivedData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4 ;
-(void)ignoreDevice;
-(void)startScan;
-(void)setScanning:(BOOL)arg1 ;
-(void)startAdvertising;
-(void)stopAdvertising;
-(void)stopScan;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<WPTransferDelegate>)arg1 ;
-(id<WPTransferDelegate>)delegate;
-(void)invalidate;
-(BOOL)scanning;
@end

