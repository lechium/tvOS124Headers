/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableSet;

@interface MNVehicleDetector : NSObject {

	NSLock* _observerLock;
	NSMutableSet* _observers;
	int _vehicularToken;
	int _vehicleConnectedToken;
	int _vehicleDisconnectedToken;
	int _testToken;
	BOOL _testMode;
	unsigned long long _vehicleDetectionState;
	unsigned long long _vehicularState;
	unsigned long long _vehicleConnectionState;

}

@property (assign,nonatomic) unsigned long long vehicularState;                       //@synthesize vehicularState=_vehicularState - In the implementation block
@property (assign,nonatomic) unsigned long long vehicleConnectionState;               //@synthesize vehicleConnectionState=_vehicleConnectionState - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicleDetectionState;              //@synthesize vehicleDetectionState=_vehicleDetectionState - In the implementation block
+(id)sharedDetector;
-(void)stopDetectingVehicle;
-(void)_startVehicularDetection;
-(void)_startTestDetection;
-(void)_startVehicleConnectionMonitoring;
-(void)_stopVehicularDetection;
-(void)_stopTestDetection;
-(void)_stopVehicleConnectionMonitoring;
-(unsigned long long)vehicularState;
-(void)setVehicularState:(unsigned long long)arg1 ;
-(void)setVehicleConnectionState:(unsigned long long)arg1 ;
-(void)setVehicleDetectedState:(unsigned long long)arg1 ;
-(void)startDetectingVehicle;
-(unsigned long long)vehicleDetectionState;
-(unsigned long long)vehicleConnectionState;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
