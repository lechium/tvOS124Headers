/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface CNUIUserActionSingleFieldCell : UITableViewCell {

	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelTopConstraint;
	NSLayoutConstraint* _titleLabelBottomConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;                 //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelBottomConstraint;              //@synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)updateFonts;
-(NSLayoutConstraint *)titleLabelBottomConstraint;
-(void)setTitleLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
@end

