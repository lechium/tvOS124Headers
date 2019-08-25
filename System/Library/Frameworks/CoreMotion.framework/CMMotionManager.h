/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class CMAmbientPressureData, CMAccelerometerData, CMGyroData, CMMagnetometerData, CMDeviceMotion;

@interface CMMotionManager : NSObject {

	id _internal;

}

@property (getter=isSidebandSensorFusionAvailable,nonatomic,readonly) BOOL sidebandSensorFusionAvailable; 
@property (readonly) CMAmbientPressureData * ambientPressureData; 
@property (readonly) CMAmbientPressureData * compensatedAmbientPressureData; 
@property (getter=isDeviceMotionLiteAvailable,nonatomic,readonly) BOOL isDeviceMotionLiteAvailable; 
@property (assign,nonatomic) double accelerometerUpdateInterval; 
@property (getter=isAccelerometerAvailable,nonatomic,readonly) BOOL accelerometerAvailable; 
@property (getter=isAccelerometerActive,nonatomic,readonly) BOOL accelerometerActive; 
@property (readonly) CMAccelerometerData * accelerometerData; 
@property (assign,nonatomic) double gyroUpdateInterval; 
@property (getter=isGyroAvailable,nonatomic,readonly) BOOL gyroAvailable; 
@property (getter=isGyroActive,nonatomic,readonly) BOOL gyroActive; 
@property (readonly) CMGyroData * gyroData; 
@property (assign,nonatomic) double magnetometerUpdateInterval; 
@property (getter=isMagnetometerAvailable,nonatomic,readonly) BOOL magnetometerAvailable; 
@property (getter=isMagnetometerActive,nonatomic,readonly) BOOL magnetometerActive; 
@property (readonly) CMMagnetometerData * magnetometerData; 
@property (assign,nonatomic) double deviceMotionUpdateInterval; 
@property (nonatomic,readonly) unsigned long long attitudeReferenceFrame; 
@property (getter=isDeviceMotionAvailable,nonatomic,readonly) BOOL deviceMotionAvailable; 
@property (getter=isDeviceMotionActive,nonatomic,readonly) BOOL deviceMotionActive; 
@property (readonly) CMDeviceMotion * deviceMotion; 
@property (assign,nonatomic) BOOL showsDeviceMovementDisplay; 
+(void)dummySelector:(id)arg1 ;
+(unsigned long long)availableAttitudeReferenceFrames;
+(SCD_Struct_CM27)gyroCalibrationDatabaseGetBiasFit;
+(void)setAllowInBackground:(BOOL)arg1 ;
+(void)dumpDb:(long long)arg1 toURL:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
+(BOOL)supportsGyroMiniCalibration;
+(BOOL)startGyroMiniCalibration;
+(BOOL)setUrgentCalFlag;
+(BOOL)configureM7Activity:(BOOL)arg1 stepCounting:(BOOL)arg2 activityForceCodeTransition:(BOOL)arg3 stepCountingForceCodeTransition:(BOOL)arg4 threshold:(BOOL)arg5 onBodyDetection:(BOOL)arg6 ispMode:(unsigned char)arg7 predictionInterval:(float)arg8 logLevel:(char)arg9 proactiveRevisitTime:(unsigned short)arg10 ;
+(SCD_Struct_CM27)gyroCalibrationDatabaseGetBiasFitAndEstimate:(SCD_Struct_CM4*)arg1 atTemperature:(float)arg2 ;
+(BOOL)hasRunMiniCal;
+(void)initialize;
-(void)onAmbientPressure:(const Sample*)arg1 ;
-(void)onCompensatedAmbientPressure:(const Sample*)arg1 ;
-(void)onAccelerometer:(const Sample*)arg1 ;
-(void)onGyro:(const Sample*)arg1 ;
-(void)onMagnetometer:(const Sample*)arg1 ;
-(void)onDeviceMotion:(const Sample*)arg1 ;
-(void)onGeomagneticModel:(const SCD_Struct_CM19*)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(void)deallocPrivate;
-(void)stopAccelerometerUpdatesPrivate;
-(void)stopGyroUpdatesPrivate;
-(void)stopDeviceMotionUpdatesPrivate;
-(void)_stopDeviceMotionErrorUpdates;
-(void)stopMagnetometerUpdatesPrivate;
-(void)stopWatchdogCheckinsPrivate;
-(void)setAccelerometerUpdateIntervalPrivate:(double)arg1 ;
-(void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAmbientPressureUpdateIntervalPrivate:(double)arg1 ;
-(void)startAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopAmbientPressureUpdatesPrivate;
-(void)setCompensatedAmbientPressureUpdateIntervalPrivate:(double)arg1 ;
-(void)startCompensatedAmbientPressureUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopCompensatedAmbientPressureUpdatesPrivate;
-(BOOL)isAmbientPressureAvailable;
-(void)setGyroUpdateIntervalPrivate:(double)arg1 ;
-(void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isGyroAvailable;
-(void)setDeviceMotionUpdateIntervalPrivate:(double)arg1 ;
-(void)applyNorthReference:(Sample*)arg1 ;
-(unsigned long long)attitudeReferenceFrame;
-(void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dismissDeviceMovementDisplay;
-(void)setMagnetometerUpdateIntervalPrivate:(double)arg1 ;
-(void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isMagnetometerAvailable;
-(void)setShowsDeviceMovementDisplayPrivate:(BOOL)arg1 ;
-(void)setMagnetometerDataCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 ;
-(void)startWatchdogCheckinsPrivate;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 measureLatency:(BOOL)arg2 withSnoopHandler:(/*^block*/id)arg3 ;
-(void)setSidebandTimeSyncHandler:(/*^block*/id)arg1 ;
-(BOOL)isSidebandSensorFusionAvailable;
-(void)setCaptureMode:(long long)arg1 ;
-(BOOL)sendDeviceMotionError:(int)arg1 ;
-(void)showDeviceMovementDisplay;
-(void)willResignActivePrivate:(id)arg1 ;
-(void)didBecomeActivePrivate:(id)arg1 ;
-(BOOL)isDeviceMotionLiteAvailable;
-(void)startDeviceMotionLiteUpdatesForDeviceID:(id)arg1 usingConfiguration:(SCD_Struct_CM28)arg2 toQueue:(id)arg3 withFusedHandler:(/*^block*/id)arg4 ;
-(void)setUseAccelerometer:(BOOL)arg1 ;
-(BOOL)useAccelerometer;
-(double)accelerometerUpdateInterval;
-(void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAmbientPressureUpdateInterval:(double)arg1 ;
-(double)ambientPressureUpdateInterval;
-(BOOL)isAmbientPressureActive;
-(void)startAmbientPressureUpdates;
-(void)startAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopAmbientPressureUpdates;
-(CMAmbientPressureData *)ambientPressureData;
-(BOOL)readRawAmbientPressureSamplesFromDB:(id)arg1 toQueue:(id)arg2 where:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)computeNonlinearPRTTFromDB:(id)arg1 where:(id)arg2 ;
-(void)setCompensatedAmbientPressureUpdateInterval:(double)arg1 ;
-(double)compensatedAmbientPressureUpdateInterval;
-(BOOL)isCompensatedAmbientPressureActive;
-(void)startCompensatedAmbientPressureUpdates;
-(void)startCompensatedAmbientPressureUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopCompensatedAmbientPressureUpdates;
-(CMAmbientPressureData *)compensatedAmbientPressureData;
-(BOOL)isGyroActive;
-(void)setGyroUpdateInterval:(double)arg1 ;
-(double)gyroUpdateInterval;
-(CMGyroData *)gyroData;
-(void)startGyroUpdates;
-(void)startGyroUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopGyroUpdates;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 ;
-(void)rebuildGytt;
-(int)gyttNumTemperatures;
-(BOOL)isMagnetometerActive;
-(void)setMagnetometerUpdateInterval:(double)arg1 ;
-(double)magnetometerUpdateInterval;
-(CMMagnetometerData *)magnetometerData;
-(void)startMagnetometerUpdates;
-(void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopMagnetometerUpdates;
-(void)setShowsDeviceMovementDisplay:(BOOL)arg1 ;
-(BOOL)showsDeviceMovementDisplay;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 ;
-(BOOL)setSidebandSensorFusionEnable:(BOOL)arg1 withSnoopHandler:(/*^block*/id)arg2 ;
-(void)captureStarting;
-(void)_startDeviceMotionErrorUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startDeviceMotionLiteFusedUpdatesForDeviceID:(id)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopDeviceMotionLiteUpdatesForDeviceID:(id)arg1 ;
-(id)initUsing6AxisSensorFusion;
-(void)stopDeviceMotionUpdates;
-(void)startDeviceMotionUpdatesUsingReferenceFrame:(unsigned long long)arg1 toQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)setMotionThreadPriority:(int)arg1 ;
-(void)setGyroDataCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 ;
-(void)startDeviceMotionUpdates;
-(void)startAccelerometerUpdates;
-(CMAccelerometerData *)accelerometerData;
-(BOOL)isDeviceMotionActive;
-(void)setPowerConservationMode:(int)arg1 ;
-(void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initPrivate;
-(void)didBecomeActive:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stopAccelerometerUpdates;
-(void)setAccelerometerUpdateInterval:(double)arg1 ;
-(BOOL)isAccelerometerAvailable;
-(BOOL)isAccelerometerActive;
-(void)setAccelerometerDataCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 ;
-(void)connect;
-(id)initUsingGyroOnlySensorFusion;
-(void)setDeviceMotionUpdateInterval:(double)arg1 ;
-(void)setDeviceMotionCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 interval:(double)arg3 fsync:(BOOL)arg4 ;
-(BOOL)isDeviceMotionAvailable;
-(void)setNotificationCallback:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(double)deviceMotionUpdateInterval;
-(CMDeviceMotion *)deviceMotion;
@end

