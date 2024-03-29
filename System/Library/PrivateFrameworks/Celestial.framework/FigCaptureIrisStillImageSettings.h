/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureStillImageSettings.h>

@class FigCaptureMovieFileRecordingSettings, NSURL, NSArray;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings {

	int _movieMode;
	FigCaptureMovieFileRecordingSettings* _movieRecordingSettings;
	NSURL* _movieURLForOriginalImage;
	NSArray* _movieLevelMetadataForOriginalImage;

}

@property (assign,nonatomic) int movieMode;                                                            //@synthesize movieMode=_movieMode - In the implementation block
@property (nonatomic,copy) FigCaptureMovieFileRecordingSettings * movieRecordingSettings;              //@synthesize movieRecordingSettings=_movieRecordingSettings - In the implementation block
@property (nonatomic,copy) NSURL * movieURLForOriginalImage;                                           //@synthesize movieURLForOriginalImage=_movieURLForOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadataForOriginalImage;                               //@synthesize movieLevelMetadataForOriginalImage=_movieLevelMetadataForOriginalImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMovieMode:(int)arg1 ;
-(void)setMovieRecordingSettings:(FigCaptureMovieFileRecordingSettings *)arg1 ;
-(void)setMovieURLForOriginalImage:(NSURL *)arg1 ;
-(void)setMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(int)movieMode;
-(FigCaptureMovieFileRecordingSettings *)movieRecordingSettings;
-(NSURL *)movieURLForOriginalImage;
-(NSArray *)movieLevelMetadataForOriginalImage;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

