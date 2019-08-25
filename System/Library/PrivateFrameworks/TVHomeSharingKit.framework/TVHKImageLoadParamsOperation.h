/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>
#import <TVHomeSharingKit/TVHKImageLoadingOperation.h>

@protocol TVHKImageLoadParams;
@class TVImage, NSError, NSString;

@interface TVHKImageLoadParamsOperation : TVHSAsynchronousOperation <TVHKImageLoadingOperation> {

	BOOL _cropToFit;
	TVImage* _image;
	unsigned long long _scalingResult;
	NSError* _error;
	id<TVHKImageLoadParams> _params;
	CGSize _scaleToSize;

}

@property (nonatomic,retain) id<TVHKImageLoadParams> params;                //@synthesize params=_params - In the implementation block
@property (assign,nonatomic) CGSize scaleToSize;                            //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) BOOL cropToFit;                                //@synthesize cropToFit=_cropToFit - In the implementation block
@property (nonatomic,retain) TVImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long scalingResult;              //@synthesize scalingResult=_scalingResult - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVHKImageLoadParams>)params;
-(void)setParams:(id<TVHKImageLoadParams>)arg1 ;
-(id)init;
-(void)setImage:(TVImage *)arg1 ;
-(TVImage *)image;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(void)setScalingResult:(unsigned long long)arg1 ;
-(unsigned long long)scalingResult;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(void)setScaleToSize:(CGSize)arg1 ;
-(void)setCropToFit:(BOOL)arg1 ;
@end
