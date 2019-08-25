/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSDictionary, NSObject, BWLimitedGMErrorLogger;

@interface BWVideoCompressorNode : BWNode {

	NSDictionary* _compressionSettings;
	BOOL _nextFrameEncodeAsKeyFrame;
	OpaqueVTCompressionSessionRef _compressionSession;
	BOOL _didPrepareToEncode;
	BOOL _sourceIsHDResolution;
	unsigned _sourcePixelFormatType;
	NSObject*<OS_dispatch_queue> _emitterQueue;
	NSObject*<OS_dispatch_queue> _thermalAndPowerNotificationQueue;
	double _bFrameEncodingAllowedAtHigherPressureTimeLimit;
	double _bFrameEncodingAllowedAtHigherPressureStopTime;
	int _nonBFrameAverageBitRate;
	int _thermalPressureNotificationToken;
	int _thermalPressureLevel;
	int _powerPressureNotificationToken;
	int _powerPressureLevel;
	BOOL _bFrameEncodingRequested;
	BOOL _bFrameEncodingAllowed;
	BOOL _shouldAttachDebugSEI;
	BOOL _shouldPassSerializedDepthImageBuffers;
	float _maxVideoFrameRate;
	BOOL _flushRequestReceived;
	NSObject*<OS_dispatch_semaphore> _backPressureSemaphore;
	int _backPressureSemaphoreInitialValue;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}
+(id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3 ;
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)setCompressionSettings:(id)arg1 ;
-(void)prepareForVideoCompression;
-(id)initWithCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 backPressureSemaphoreInitialValue:(int)arg3 ;
-(id)backPressureSemaphore;
-(void)makeCurrentConfigurationLive;
-(void)_cleanCompressor;
-(void)_registerForThermalAndPowerNotifications;
-(void)_validateBFrameEncodingAbility;
-(void)_signalBackPressureSemaphore;
-(OpaqueVTCompressionSessionRef)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void*)arg8 ;
-(void)_updateThermalPressureLevel;
-(void)_updatePowerPressureLevel;
-(int)_setEncoderCompressionPropertiesWithCompressionSession:(OpaqueVTCompressionSessionRef)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned)arg3 isHDResolution:(unsigned char)arg4 ;
-(void)insertKeyFrame;
-(id)compressionSettings;
-(void)dealloc;
-(id)nodeType;
@end
