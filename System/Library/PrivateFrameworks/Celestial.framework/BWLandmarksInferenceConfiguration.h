/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceConfiguration.h>

@class NSNumber;

@interface BWLandmarksInferenceConfiguration : BWInferenceConfiguration {

	BOOL _refinesMouthLandmarks;
	BOOL _refinesLeftEyeLandmarks;
	BOOL _refinesRightEyeLandmarks;
	BOOL _detectsBlinking;
	BOOL _detectLandmarksInFullSizeInput;
	NSNumber* _cascadeStepCount;
	unsigned long long _maximumNumberOfFaces;

}

@property (assign,nonatomic) BOOL refinesMouthLandmarks;                           //@synthesize refinesMouthLandmarks=_refinesMouthLandmarks - In the implementation block
@property (assign,nonatomic) BOOL refinesLeftEyeLandmarks;                         //@synthesize refinesLeftEyeLandmarks=_refinesLeftEyeLandmarks - In the implementation block
@property (assign,nonatomic) BOOL refinesRightEyeLandmarks;                        //@synthesize refinesRightEyeLandmarks=_refinesRightEyeLandmarks - In the implementation block
@property (assign,nonatomic) BOOL detectsBlinking;                                 //@synthesize detectsBlinking=_detectsBlinking - In the implementation block
@property (nonatomic,retain) NSNumber * cascadeStepCount;                          //@synthesize cascadeStepCount=_cascadeStepCount - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfFaces;              //@synthesize maximumNumberOfFaces=_maximumNumberOfFaces - In the implementation block
@property (assign,nonatomic) BOOL detectLandmarksInFullSizeInput;                  //@synthesize detectLandmarksInFullSizeInput=_detectLandmarksInFullSizeInput - In the implementation block
+(SCD_Struct_BW57)portraitVersion;
+(unsigned long long)portraitMaximumNumberOfFaces;
+(BOOL)isPortraitPrewarmingRequired;
+(id)configuration;
-(id)initWithInferenceType:(int)arg1 ;
-(int)inferenceType;
-(BOOL)refinesMouthLandmarks;
-(void)setRefinesMouthLandmarks:(BOOL)arg1 ;
-(BOOL)refinesLeftEyeLandmarks;
-(void)setRefinesLeftEyeLandmarks:(BOOL)arg1 ;
-(BOOL)refinesRightEyeLandmarks;
-(void)setRefinesRightEyeLandmarks:(BOOL)arg1 ;
-(BOOL)detectsBlinking;
-(void)setDetectsBlinking:(BOOL)arg1 ;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(unsigned long long)maximumNumberOfFaces;
-(void)setMaximumNumberOfFaces:(unsigned long long)arg1 ;
-(BOOL)detectLandmarksInFullSizeInput;
-(void)setDetectLandmarksInFullSizeInput:(BOOL)arg1 ;
-(void)dealloc;
@end

