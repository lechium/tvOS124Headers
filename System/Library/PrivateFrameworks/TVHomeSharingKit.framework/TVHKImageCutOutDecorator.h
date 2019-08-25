/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@interface TVHKImageCutOutDecorator : TVImageDecorator {

	BOOL _cutOutCropToFit;
	CGSize _imageScaleToSize;
	CGSize _cutOutScaleToSize;
	CGRect _fractionalRect;

}

@property (assign,nonatomic) CGSize imageScaleToSize;               //@synthesize imageScaleToSize=_imageScaleToSize - In the implementation block
@property (assign,nonatomic) CGRect fractionalRect;                 //@synthesize fractionalRect=_fractionalRect - In the implementation block
@property (assign,nonatomic) CGSize cutOutScaleToSize;              //@synthesize cutOutScaleToSize=_cutOutScaleToSize - In the implementation block
@property (assign,nonatomic) BOOL cutOutCropToFit;                  //@synthesize cutOutCropToFit=_cutOutCropToFit - In the implementation block
-(CGSize)imageScaleToSize;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(CGSize)expectedSize;
-(CGSize)loaderScaleToSize;
-(BOOL)loaderCropToFit;
-(id)decoratorIdentifier;
-(CGRect)fractionalRect;
-(void)setFractionalRect:(CGRect)arg1 ;
-(CGSize)cutOutScaleToSize;
-(id)_scaleImage:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 scaleToSize:(CGSize)arg4 cropToFit:(BOOL)arg5 ;
-(id)_cutOutImage:(id)arg1 ;
-(BOOL)cutOutCropToFit;
-(id)initWithCutOutFractionalRect:(CGRect)arg1 ;
-(void)setImageScaleToSize:(CGSize)arg1 ;
-(void)setCutOutScaleToSize:(CGSize)arg1 ;
-(void)setCutOutCropToFit:(BOOL)arg1 ;
@end
