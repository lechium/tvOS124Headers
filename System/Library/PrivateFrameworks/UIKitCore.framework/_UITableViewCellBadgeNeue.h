/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _UITableViewCellBadgeNeue : UIView {

	BOOL _selected;
	UILabel* _badgeTextLabel;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UILabel * badgeTextLabel;                     //@synthesize badgeTextLabel=_badgeTextLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBadgeTextLabel:(UILabel *)arg1 ;
-(UILabel *)badgeTextLabel;
-(double)minHeight;
-(void)_sizeToFit;
@end
