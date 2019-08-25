/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIColor.h>

@interface UIDisplayP3Color : UIColor {

	double redComponent;
	double greenComponent;
	double blueComponent;
	double alphaComponent;
	CGColorRef _cachedColor;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)set;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(id)colorSpaceName;
-(void)setFill;
-(void)setStroke;
-(BOOL)_isDeepColor;
-(double)alphaComponent;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
@end

