/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIScrollViewGradientMaskView : UIView {

	long long _gradientDirection;
	UIEdgeInsets _gradientStartInsets;
	UIEdgeInsets _gradientEndInsets;
	UIEdgeInsets _gradientIntensities;

}

@property (assign,nonatomic) UIEdgeInsets gradientStartInsets;              //@synthesize gradientStartInsets=_gradientStartInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gradientEndInsets;                //@synthesize gradientEndInsets=_gradientEndInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gradientIntensities;              //@synthesize gradientIntensities=_gradientIntensities - In the implementation block
@property (assign,nonatomic) long long gradientDirection;                   //@synthesize gradientDirection=_gradientDirection - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)gradientLayer;
-(void)updateWithFrame:(CGRect)arg1 gradientStartInsets:(UIEdgeInsets)arg2 gradientEndInsets:(UIEdgeInsets)arg3 gradientIntensities:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)gradientStartInsets;
-(UIEdgeInsets)gradientEndInsets;
-(UIEdgeInsets)gradientIntensities;
-(void)setGradientStartInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientEndInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientIntensities:(UIEdgeInsets)arg1 ;
-(long long)gradientDirection;
-(void)setGradientDirection:(long long)arg1 ;
@end

