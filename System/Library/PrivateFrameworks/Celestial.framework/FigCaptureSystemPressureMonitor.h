/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface FigCaptureSystemPressureMonitor : NSObject {

	/*^block*/id _systemPressureLevelChangedHandler;
	NSObject*<OS_dispatch_queue> _systemPressureLevelChangedHandlerQueue;
	int _thermalPressureNotificationToken;
	int _systemPressureLevelByThermalPressureLevel[5];
	int _currentSystemPressureFromThermalPressure;
	SCD_Struct_Fi19 _systemPressureLevelByProjectorTemperature[5];
	int _currentSystemPressureFromProjectorTemperature;
	NSObject*<OS_dispatch_source> _pearlPollTimer;
	SCD_Struct_BW2 _pollingTimerStopTime;

}

@property (copy) id systemPressureLevelChangedHandler; 
@property (readonly) int systemPressureLevelFromPearlProjector; 
+(void)initialize;
-(void)_registerForThermalNotifications;
-(void)_releasePearlProjectorPollingResources;
-(void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(BOOL)arg1 ;
-(void)_callChangeHandler;
-(void)_updateWithPearlProjectorTemperature:(float)arg1 ;
-(id)systemPressureLevelChangedHandler;
-(void)setSystemPressureLevelChangedHandler:(id)arg1 ;
-(void)callSystemPressureLevelChangedHandler;
-(int)systemPressureLevelFromPearlProjector;
-(void)updateWithPearlProjectorTemperature:(float)arg1 ;
-(void)startMonitoringPearlProjectorTemperatureUntilNominal;
-(id)init;
-(void)dealloc;
@end

