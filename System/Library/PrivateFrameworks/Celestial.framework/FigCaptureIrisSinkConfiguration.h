/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _movieCaptureEnabled;
	SCD_Struct_BW2 _movieDuration;
	SCD_Struct_BW2 _movieVideoFrameDuration;
	int _movieAutoTrimMethod;
	FigCaptureIrisPreparedSettings* _preparedSettings;
	BOOL _optimizesImagesForOfflineVideoStabilization;
	BOOL _quadraHighResCaptureEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _portraitEffectsMatteDeliveryEnabled;
	BOOL _filterRenderingEnabled;
	BOOL _bravoDualPhotoDeliveryEnabled;

}

@property (assign,nonatomic) BOOL irisMovieCaptureEnabled;                                       //@synthesize movieCaptureEnabled=_movieCaptureEnabled - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieDuration;                                   //@synthesize movieDuration=_movieDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 irisMovieVideoFrameDuration;                         //@synthesize movieVideoFrameDuration=_movieVideoFrameDuration - In the implementation block
@property (assign,nonatomic) int irisMovieAutoTrimMethod;                                        //@synthesize movieAutoTrimMethod=_movieAutoTrimMethod - In the implementation block
@property (nonatomic,retain) FigCaptureIrisPreparedSettings * irisPreparedSettings;              //@synthesize preparedSettings=_preparedSettings - In the implementation block
@property (assign,nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;                   //@synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;                                   //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                                      //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;                           //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL filterRenderingEnabled;                                        //@synthesize filterRenderingEnabled=_filterRenderingEnabled - In the implementation block
@property (assign,nonatomic) BOOL bravoDualPhotoDeliveryEnabled;                                 //@synthesize bravoDualPhotoDeliveryEnabled=_bravoDualPhotoDeliveryEnabled - In the implementation block
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(BOOL)portraitEffectsMatteDeliveryEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)irisMovieCaptureEnabled;
-(BOOL)bravoDualPhotoDeliveryEnabled;
-(FigCaptureIrisPreparedSettings *)irisPreparedSettings;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(int)irisMovieAutoTrimMethod;
-(BOOL)filterRenderingEnabled;
-(SCD_Struct_BW2)irisMovieDuration;
-(SCD_Struct_BW2)irisMovieVideoFrameDuration;
-(void)setBravoDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)quadraHighResCaptureEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(void)setIrisMovieCaptureEnabled:(BOOL)arg1 ;
-(void)setIrisMovieDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieVideoFrameDuration:(SCD_Struct_BW2)arg1 ;
-(void)setIrisMovieAutoTrimMethod:(int)arg1 ;
-(void)setIrisPreparedSettings:(FigCaptureIrisPreparedSettings *)arg1 ;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

