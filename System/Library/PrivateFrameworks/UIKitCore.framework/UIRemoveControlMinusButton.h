/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@interface UIRemoveControlMinusButton : UIControl {

	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _hiding : 1;
	unsigned _showAsPlus : 1;
	unsigned _reserved : 28;
	float _verticalOffset;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
-(void)dealloc;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isRotating;
-(void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)isRotated;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(BOOL)arg1 ;
-(BOOL)isHiding;
-(void)toggleRotate:(BOOL)arg1 ;
@end

