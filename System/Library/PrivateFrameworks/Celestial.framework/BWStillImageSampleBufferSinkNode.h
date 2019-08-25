/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@class NSString;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {

	/*^block*/id _sampleBufferAvailableHandler;
	BOOL _aggdIsPhotoFormat;
	BOOL _aggdClientIsCameraOrMessages;
	BOOL _aggdIsTimeLapse;
	NSString* _clientApplicationID;
	long long _lastCaptureRequestTime;

}

@property (nonatomic,copy) id sampleBufferAvailableHandler;              //@synthesize sampleBufferAvailableHandler=_sampleBufferAvailableHandler - In the implementation block
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSampleBufferAvailableHandler:(id)arg1 ;
-(void)setAggdIsPhotoFormat:(BOOL)arg1 ;
-(void)setAggdClientIsCameraOrMessages:(BOOL)arg1 ;
-(void)setAggdIsTimeLapse:(BOOL)arg1 ;
-(void)setClientApplicationID:(id)arg1 ;
-(id)initWithInputMediaType:(unsigned)arg1 ;
-(void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(void)_reportCoreAnalyticsDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(BOOL)aggdIsPhotoFormat;
-(BOOL)aggdClientIsCameraOrMessages;
-(BOOL)aggdIsTimeLapse;
-(id)sampleBufferAvailableHandler;
-(id)init;
-(void)dealloc;
@end

