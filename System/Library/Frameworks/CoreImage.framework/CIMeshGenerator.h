/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class NSNumber, CIColor, NSArray;

@interface CIMeshGenerator : CIFilter {

	NSNumber* inputWidth;
	CIColor* inputColor;
	NSArray* inputMesh;

}

@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSArray * inputMesh; 
+(id)customAttributes;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3 ;
-(id)_CIMesh32;
-(id)_CIMesh16;
-(id)_CIMesh8;
-(id)_CIMesh4;
-(id)_CIMesh2;
-(id)_CIMesh1;
-(NSArray *)inputMesh;
-(void)setInputMesh:(NSArray *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(id)outputImage;
@end

