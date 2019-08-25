/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, CBPeripheralManager, CURetrier, NSData, NSObject, NSString;

@interface CUBLEAdvertiser : NSObject <CBPeripheralManagerDelegate> {

	BOOL _activateCalled;
	NSDictionary* _advertiseParametersCurrent;
	BOOL _changesPending;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CBPeripheralManager* _peripheralManager;
	CURetrier* _retrier;
	BOOL _startAdvertisingCalled;
	LogCategory* _ucat;
	unsigned _advertiseFlags;
	NSData* _appleManufacturerData;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSData* _lgBTAddress;
	NSData* _lgDeviceID;
	NSString* _label;

}

@property (nonatomic,copy) NSData * appleManufacturerData;                            //@synthesize appleManufacturerData=_appleManufacturerData - In the implementation block
@property (assign,nonatomic) unsigned advertiseFlags;                                 //@synthesize advertiseFlags=_advertiseFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSData * lgBTAddress;                                      //@synthesize lgBTAddress=_lgBTAddress - In the implementation block
@property (nonatomic,copy) NSData * lgDeviceID;                                       //@synthesize lgDeviceID=_lgDeviceID - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)setAdvertiseFlags:(unsigned)arg1 ;
-(void)setAppleManufacturerData:(NSData *)arg1 ;
-(void)setLgBTAddress:(NSData *)arg1 ;
-(id)_advertiseParameters;
-(void)_advertiseParametersAddLGWake:(id)arg1 ;
-(void)_advertiseParametersAddOSR;
-(id)_advertiseParametersSummary:(id)arg1 ;
-(NSData *)appleManufacturerData;
-(unsigned)advertiseFlags;
-(NSData *)lgDeviceID;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)_invalidated;
-(void)setLgDeviceID:(NSData *)arg1 ;
-(NSData *)lgBTAddress;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end
