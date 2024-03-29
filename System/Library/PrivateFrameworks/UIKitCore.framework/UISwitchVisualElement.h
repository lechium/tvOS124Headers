/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwitchControl;
@interface UISwitchVisualElement : UIView {

	BOOL _enabled;
	id<UISwitchControl> _switchControl;
	double _enabledAlpha;

}

@property (assign,nonatomic) double enabledAlpha;                                   //@synthesize enabledAlpha=_enabledAlpha - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<UISwitchControl> switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
+(CGSize)preferredContentSize;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)setThumbTintColor:(id)arg1 ;
-(void)setOnTintColor:(id)arg1 ;
-(void)setOnImage:(id)arg1 ;
-(void)setOffImage:(id)arg1 ;
-(void)setSwitchControl:(id<UISwitchControl>)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsOnOffLabel:(BOOL)arg1 ;
-(id<UISwitchControl>)switchControl;
-(void)setEnabledAlpha:(double)arg1 ;
-(BOOL)enabled;
-(double)enabledAlpha;
@end

