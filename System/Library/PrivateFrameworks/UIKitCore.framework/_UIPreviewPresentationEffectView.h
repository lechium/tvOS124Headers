/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UIPreviewPresentationEffectView : UIView {

	BOOL _shouldRasterizeForTransition;
	UIColor* _shadowColor;

}

@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double shadowAlpha; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (nonatomic,copy) UIColor * shadowColor;                            //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)blurRadius;
-(double)cornerRadius;
-(double)shadowRadius;
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
@end

