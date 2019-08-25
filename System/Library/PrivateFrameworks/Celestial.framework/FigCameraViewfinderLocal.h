/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinder.h>
#import <libobjc.A.dylib/FigCaptureSessionObserver.h>

@class NSDictionary, FigCameraViewfinderSessionLocal, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {

	BOOL _observing;
	NSDictionary* _options;
	FigCameraViewfinderSessionLocal* _activeViewfinderSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
+(id)cameraViewfinder;
+(void)initialize;
-(void)startWithOptions:(id)arg1 ;
-(void)_updateActiveViewfinderSession:(id)arg1 ;
-(void)captureSessionDidStart:(id)arg1 ;
-(void)captureSessionDidStop:(long long)arg1 ;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(int)photoThumbnailMaxDimension;
-(BOOL)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;
-(id)init;
-(void)dealloc;
-(void)stop;
@end

