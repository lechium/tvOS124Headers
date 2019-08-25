/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface TDImageColorHistogram : NSObject {

	histogram_ARGB_t _histogram;
	vImage_Buffer* _imageBuffer;
	vImage_CGImageFormat* _imageFormat;
	BOOL _isMonochrome;

}

@property (readonly) BOOL isMonochrome; 
-(BOOL)isMonochrome;
-(double)intersection:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
@end

