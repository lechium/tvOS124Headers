/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <libobjc.A.dylib/CRCaptureSessionManager.h>

@protocol AVCaptureVideoDataOutputSampleBufferDelegate;
@class NSString, CALayer, AVCaptureSession, AVCaptureVideoPreviewLayer, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureInputPort;

@interface CRDefaultCaptureSessionManager : NSObject <CRCaptureSessionManager> {

	BOOL _enableMetadataOutput;
	BOOL _exposureAdjustmentInProgress;
	BOOL _runningManualExposure;
	float _maxISO;
	float _minISO;
	int _exposureAdjustmentInProgressTimeoutCount;
	long long _cameraPosition;
	NSString* _cameraMode;
	long long _whiteBalanceMode;
	long long _focusMode;
	long long _exposureMode;
	long long _torchMode;
	id<AVCaptureVideoDataOutputSampleBufferDelegate> _captureSessionDelegate;
	NSString* _currentDeviceID;
	AVCaptureSession* _captureSession;
	AVCaptureVideoPreviewLayer* _avfPreviewLayer;
	AVCaptureDeviceInput* _deviceInput;
	AVCaptureVideoDataOutput* _captureVideoDataOutput;
	id _inputPortFormatObserver;
	AVCaptureInputPort* _inputPortFormatSender;
	SCD_Struct_CR0* _exposure_table;
	CGSize _cameraResolution;
	SCD_Struct_CR2 _highISOThresholdDuration;

}

@property (nonatomic,retain) AVCaptureSession * captureSession;                                          //@synthesize captureSession=_captureSession - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * avfPreviewLayer;                               //@synthesize avfPreviewLayer=_avfPreviewLayer - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * deviceInput;                                         //@synthesize deviceInput=_deviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * captureVideoDataOutput;                          //@synthesize captureVideoDataOutput=_captureVideoDataOutput - In the implementation block
@property (retain) id inputPortFormatObserver;                                                           //@synthesize inputPortFormatObserver=_inputPortFormatObserver - In the implementation block
@property (assign,nonatomic,__weak) AVCaptureInputPort * inputPortFormatSender;                          //@synthesize inputPortFormatSender=_inputPortFormatSender - In the implementation block
@property (assign) float maxISO;                                                                         //@synthesize maxISO=_maxISO - In the implementation block
@property (assign) float minISO;                                                                         //@synthesize minISO=_minISO - In the implementation block
@property (assign) SCD_Struct_CR2 highISOThresholdDuration;                                              //@synthesize highISOThresholdDuration=_highISOThresholdDuration - In the implementation block
@property (assign) BOOL exposureAdjustmentInProgress;                                                    //@synthesize exposureAdjustmentInProgress=_exposureAdjustmentInProgress - In the implementation block
@property (assign) int exposureAdjustmentInProgressTimeoutCount;                                         //@synthesize exposureAdjustmentInProgressTimeoutCount=_exposureAdjustmentInProgressTimeoutCount - In the implementation block
@property (assign) BOOL runningManualExposure;                                                           //@synthesize runningManualExposure=_runningManualExposure - In the implementation block
@property (assign) SCD_Struct_CR0* exposure_table;                                                       //@synthesize exposure_table=_exposure_table - In the implementation block
@property (assign,nonatomic) long long cameraPosition;                                                   //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,copy) NSString * cameraMode;                                                        //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign,nonatomic) long long whiteBalanceMode;                                                 //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign,nonatomic) long long focusMode;                                                        //@synthesize focusMode=_focusMode - In the implementation block
@property (assign,nonatomic) long long exposureMode;                                                     //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign,nonatomic) long long torchMode;                                                        //@synthesize torchMode=_torchMode - In the implementation block
@property (__weak) id<AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate;              //@synthesize captureSessionDelegate=_captureSessionDelegate - In the implementation block
@property (nonatomic,readonly) CALayer * previewLayer; 
@property (retain) NSString * currentDeviceID;                                                           //@synthesize currentDeviceID=_currentDeviceID - In the implementation block
@property (assign) BOOL enableMetadataOutput;                                                            //@synthesize enableMetadataOutput=_enableMetadataOutput - In the implementation block
@property (assign) CGSize cameraResolution;                                                              //@synthesize cameraResolution=_cameraResolution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreviewOrientation:(long long)arg1 ;
-(float)minISO;
-(float)maxISO;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(long long)focusMode;
-(void)setFocusMode:(long long)arg1 ;
-(BOOL)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(BOOL)isAdjustingFocus;
-(long long)exposureMode;
-(void)setExposureMode:(long long)arg1 ;
-(long long)whiteBalanceMode;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)setCameraMode:(NSString *)arg1 ;
-(NSString *)cameraMode;
-(CALayer *)previewLayer;
-(long long)cameraPosition;
-(AVCaptureSession *)captureSession;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
-(id)inputPortFormatObserver;
-(AVCaptureInputPort *)inputPortFormatSender;
-(void)setInputPortFormatObserver:(id)arg1 ;
-(void)setCameraResolution:(CGSize)arg1 ;
-(void)changeCameraConfiguration;
-(AVCaptureDeviceInput *)deviceInput;
-(void)cacheCameraResolution:(id)arg1 ;
-(void)setInputPortFormatSender:(AVCaptureInputPort *)arg1 ;
-(id)captureDeviceWithPosition:(long long)arg1 ;
-(void)setupCameraSessionWithCaptureDevice:(id)arg1 ;
-(int)targetVideoFormat;
-(AVCaptureVideoDataOutput *)captureVideoDataOutput;
-(void)setDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setupHighISO:(id)arg1 ;
-(void)setAvfPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)setCaptureVideoDataOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate>)captureSessionDelegate;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setCurrentDeviceID:(NSString *)arg1 ;
-(SCD_Struct_CR0*)exposure_table;
-(void)setExposure_table:(SCD_Struct_CR0*)arg1 ;
-(BOOL)isRearCamera;
-(AVCaptureVideoPreviewLayer *)avfPreviewLayer;
-(BOOL)switchToCamera:(long long)arg1 ;
-(id)captureDeviceWithIdentifier:(id)arg1 ;
-(unsigned long long)cameraCount;
-(id)frontFacingCamera;
-(id)backFacingCamera;
-(void)refocusOnPoint:(CGPoint)arg1 exposure:(BOOL)arg2 ;
-(void)_refocusOnPoint:(CGPoint)arg1 focusMode:(long long)arg2 exposure:(BOOL)arg3 ;
-(CGSize)cameraResolution;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 flipped:(BOOL)arg3 ;
-(void)setMaxISO:(float)arg1 ;
-(void)setMinISO:(float)arg1 ;
-(void)setHighISOThresholdDuration:(SCD_Struct_CR2)arg1 ;
-(BOOL)exposureAdjustmentInProgress;
-(int)exposureAdjustmentInProgressTimeoutCount;
-(void)setExposureAdjustmentInProgressTimeoutCount:(int)arg1 ;
-(void)setExposureAdjustmentInProgress:(BOOL)arg1 ;
-(SCD_Struct_CR2)highISOThresholdDuration;
-(BOOL)runningManualExposure;
-(void)setRunningManualExposure:(BOOL)arg1 ;
-(void)setupCameraSession;
-(void)teardownCameraSession;
-(BOOL)toggleCamera;
-(BOOL)switchToCameraWithDeviceID:(id)arg1 ;
-(void)refocusOnPoint:(CGPoint)arg1 ;
-(void)resetFocus;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertCameraPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGRect)convertCameraRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(void)highISOAdjustExposure;
-(BOOL)isPreviewVideoMirrored;
-(CGRect)previewVisibleRect;
-(void)setCaptureSessionDelegate:(id<AVCaptureVideoDataOutputSampleBufferDelegate>)arg1 ;
-(NSString *)currentDeviceID;
-(BOOL)enableMetadataOutput;
-(void)setEnableMetadataOutput:(BOOL)arg1 ;
-(void)stopRunning;
-(void)startRunning;
-(BOOL)isRunning;
@end

