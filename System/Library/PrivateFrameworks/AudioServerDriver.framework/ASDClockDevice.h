/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, ASDDeviceConfigurationChangeDelegate;
@class NSMutableArray, NSObject, NSArray, NSString;

@interface ASDClockDevice : ASDObject {

	NSMutableArray* _controls;
	NSObject*<OS_dispatch_queue> _controlQueue;
	double _samplingRate;
	NSArray* _samplingRates;
	NSObject*<OS_dispatch_queue> _sampleRateQueue;
	long long _ioReferenceCount;
	NSObject*<OS_dispatch_queue> _ioReferenceQueue;
	NSString* _deviceName;
	unsigned _timestampPeriod;
	unsigned _transportType;
	unsigned _clockDomain;
	unsigned _clockAlgorithm;
	BOOL _clockIsStable;
	NSObject*<OS_dispatch_semaphore> _wakeSemaphore;
	BOOL _isAlive;
	BOOL _isRunning;
	unsigned _inputLatency;
	unsigned _outputLatency;
	/*^block*/id _getZeroTimestampBlockUnretained;
	/*^block*/id _beginIOOperationBlockUnretained;
	/*^block*/id _endIOOperationBlockUnretained;
	BOOL _hidden;
	BOOL _canChangeDeviceName;
	NSString* _deviceUID;
	NSString* _modelUID;
	NSString* _manufacturerName;
	NSString* _modelName;
	/*^block*/id _getZeroTimestampBlock;
	/*^block*/id _beginIOOperationBlock;
	/*^block*/id _endIOOperationBlock;
	id<ASDDeviceConfigurationChangeDelegate> _configurationChangeDelegate;

}

@property (nonatomic,copy) id beginIOOperationBlock;                                                                   //@synthesize beginIOOperationBlock=_beginIOOperationBlock - In the implementation block
@property (nonatomic,copy) id endIOOperationBlock;                                                                     //@synthesize endIOOperationBlock=_endIOOperationBlock - In the implementation block
@property (assign,nonatomic,__weak) id<ASDDeviceConfigurationChangeDelegate> configurationChangeDelegate;              //@synthesize configurationChangeDelegate=_configurationChangeDelegate - In the implementation block
@property (nonatomic,readonly) /*^block*/id* getZeroTimestampBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* beginIOOperationBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* endIOOperationBlockUnretainedPtr; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * deviceUID;                                                              //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy) NSString * modelUID;                                                                        //@synthesize modelUID=_modelUID - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                                                                //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,copy) NSString * modelName;                                                                       //@synthesize modelName=_modelName - In the implementation block
@property (assign,nonatomic) double samplingRate; 
@property (nonatomic,copy) NSArray * samplingRates; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                              //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL canChangeDeviceName;                                                                 //@synthesize canChangeDeviceName=_canChangeDeviceName - In the implementation block
@property (assign,nonatomic) unsigned timestampPeriod; 
@property (assign,nonatomic) unsigned inputLatency; 
@property (assign,nonatomic) unsigned outputLatency; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> ioReferenceQueue; 
@property (assign,nonatomic) unsigned transportType; 
@property (assign,nonatomic) unsigned clockDomain; 
@property (assign,nonatomic) unsigned clockAlgorithm; 
@property (assign,nonatomic) BOOL clockIsStable; 
@property (nonatomic,copy) id getZeroTimestampBlock;                                                                   //@synthesize getZeroTimestampBlock=_getZeroTimestampBlock - In the implementation block
-(unsigned)outputLatency;
-(unsigned)inputLatency;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(unsigned)objectClass;
-(NSString *)deviceUID;
-(NSString *)deviceName;
-(void)systemWillSleep;
-(void)setModelName:(NSString *)arg1 ;
-(NSString *)manufacturerName;
-(void)setManufacturerName:(NSString *)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)driverClassName;
-(double)samplingRate;
-(unsigned)timestampPeriod;
-(void)systemHasPoweredOn;
-(void)setSamplingRate:(double)arg1 ;
-(void)requestConfigurationChange:(/*^block*/id)arg1 ;
-(/*^block*/id*)getZeroTimestampBlockUnretainedPtr;
-(/*^block*/id*)beginIOOperationBlockUnretainedPtr;
-(/*^block*/id*)endIOOperationBlockUnretainedPtr;
-(void)performConfigurationChange:(void*)arg1 ;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(int)startIOForClient:(unsigned)arg1 ;
-(int)stopIOForClient:(unsigned)arg1 ;
-(NSString *)modelUID;
-(void)setModelUID:(NSString *)arg1 ;
-(NSArray *)samplingRates;
-(unsigned)clockDomain;
-(unsigned)clockAlgorithm;
-(BOOL)clockIsStable;
-(BOOL)canChangeDeviceName;
-(BOOL)changeDeviceName:(id)arg1 ;
-(BOOL)changeSamplingRate:(double)arg1 ;
-(id<ASDDeviceConfigurationChangeDelegate>)configurationChangeDelegate;
-(int)performStartIO;
-(int)performStopIO;
-(id)getZeroTimestampBlock;
-(id)beginIOOperationBlock;
-(id)endIOOperationBlock;
-(void)_updateTimestampPeriod:(double)arg1 ;
-(void)_updateSafetyOffsets:(double)arg1 ;
-(id)initWithDeviceUID:(id)arg1 withPlugin:(id)arg2 ;
-(void)addControl:(id)arg1 ;
-(void)removeControl:(id)arg1 ;
-(void)setSamplingRates:(NSArray *)arg1 ;
-(void)setTimestampPeriod:(unsigned)arg1 ;
-(void)updateTimestampPeriod;
-(NSObject*<OS_dispatch_queue>)ioReferenceQueue;
-(void)setInputLatency:(unsigned)arg1 ;
-(void)setOutputLatency:(unsigned)arg1 ;
-(void)setClockDomain:(unsigned)arg1 ;
-(void)setClockAlgorithm:(unsigned)arg1 ;
-(void)setClockIsStable:(BOOL)arg1 ;
-(void)setGetZeroTimestampBlock:(id)arg1 ;
-(void)setBeginIOOperationBlock:(id)arg1 ;
-(void)setEndIOOperationBlock:(id)arg1 ;
-(void)setCanChangeDeviceName:(BOOL)arg1 ;
-(void)setConfigurationChangeDelegate:(id<ASDDeviceConfigurationChangeDelegate>)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)modelName;
-(id)controls;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isRunning;
-(int)addClient:(const AudioServerPlugInClientInfo*)arg1 ;
-(int)removeClient:(const AudioServerPlugInClientInfo*)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
@end

