/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIOpacity : CIFilter {

	CIImage* inputImage;
	NSNumber* inputOpacity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOpacity; 
+(id)customAttributes;
-(NSNumber *)inputOpacity;
-(void)setInputOpacity:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

