/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUPoolObject.h>

@class MRImage, MRCroppingSprite;

@interface MRReflectionsRenderable : MUPoolObject {

	MRImage* _slide;
	MRCroppingSprite* _sprite;
	float _modelViewMatrix[16];
	CGPoint position;
	CGSize size;
	BOOL isShadow;
	MRReflectionsRenderable* next;
	BOOL needsFlipped;
	BOOL isBreak;

}
+(SCD_Struct_MR15*)poolInfo;
-(id)initWithSlide:(id)arg1 sprite:(id)arg2 modelViewMatrix:(const float*)arg3 position:(CGPoint)arg4 size:(CGSize)arg5 flipped:(BOOL)arg6 isShadow:(BOOL)arg7 isBreak:(BOOL)arg8 ;
-(void)dealloc;
-(void)purge;
@end

