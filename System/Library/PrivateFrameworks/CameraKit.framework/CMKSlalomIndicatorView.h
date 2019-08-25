/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface CMKSlalomIndicatorView : UIView {

	long long _framesPerSecond;
	UILabel* __framerateLabel;

}

@property (nonatomic,readonly) UILabel * _framerateLabel;              //@synthesize _framerateLabel=__framerateLabel - In the implementation block
@property (assign,nonatomic) long long framesPerSecond;                //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
-(void)_commonCMKSlalomIndicatorViewInitialization;
-(void)_updateFramerateLabel;
-(void)setFramesPerSecond:(long long)arg1 ;
-(long long)framesPerSecond;
-(UILabel *)_framerateLabel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
@end
