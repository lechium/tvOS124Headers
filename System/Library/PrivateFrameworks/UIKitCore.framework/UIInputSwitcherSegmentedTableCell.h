/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell {

	UIInputSwitcherSegmentControl* _segmentControl;

}

@property (nonatomic,readonly) UIInputSwitcherSegmentControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
+(CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(UIInputSwitcherSegmentControl *)segmentControl;
@end

