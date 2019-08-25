/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _UIRecentsAccessoryDefaultView : UIView {

	UILabel* _titleLabel;
	UILabel* _subheadLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subheadLabel;              //@synthesize subheadLabel=_subheadLabel - In the implementation block
-(id)init;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateLabelTextColors;
-(UILabel *)subheadLabel;
-(void)setSubheadLabel:(UILabel *)arg1 ;
@end

