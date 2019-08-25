/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewDescription.h>

@class NSString;

@interface TVURLDescription : TVViewDescription {

	BOOL _centerGrowth;
	NSString* _url;
	double _focusSizeIncrease;
	NSString* _cropCode;
	NSString* _urlFormat;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;              //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (nonatomic,retain) NSString * cropCode;                   //@synthesize cropCode=_cropCode - In the implementation block
@property (nonatomic,retain) NSString * urlFormat;                  //@synthesize urlFormat=_urlFormat - In the implementation block
@property (assign,nonatomic) BOOL centerGrowth;                     //@synthesize centerGrowth=_centerGrowth - In the implementation block
-(void)setImageSize:(CGSize)arg1 ;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(void)setUrlFormat:(NSString *)arg1 ;
-(double)focusSizeIncrease;
-(NSString *)cropCode;
-(NSString *)urlFormat;
-(BOOL)centerGrowth;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(CGSize)imageSize;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(id)initUrlWithProperties:(id)arg1 imageSize:(CGSize)arg2 focusSizeIncrease:(double)arg3 cropCode:(id)arg4 urlFormat:(id)arg5 ;
-(void)setCropCode:(NSString *)arg1 ;
@end

