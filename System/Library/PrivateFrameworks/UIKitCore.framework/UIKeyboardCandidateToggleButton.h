/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString, UIKBThemedView;

@interface UIKeyboardCandidateToggleButton : UIButton {

	NSString* _arrowDirection;
	UIKBThemedView* _themedView;

}

@property (nonatomic,retain) UIKBThemedView * themedView;              //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,copy) NSString * arrowDirection;                  //@synthesize arrowDirection=_arrowDirection - In the implementation block
+(id)arrowImageName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)arrowDirection;
-(void)setArrowDirection:(NSString *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(UIKBThemedView *)themedView;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(void)setArrowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)updateArrow;
-(CGRect)labelFrameFromFrame:(CGRect)arg1 ;
-(id)arrowColorForState:(unsigned long long)arg1 ;
@end
