/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, NSLayoutConstraint;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _sizeLabel;
	UILabel* _titleLabel;
	NSLayoutConstraint* _labelLeadingConstraint;
	NSLayoutConstraint* _labelTrailingConstraint;

}

@property (nonatomic,retain) UILabel * sizeLabel;                                       //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeadingConstraint;               //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelTrailingConstraint;              //@synthesize labelTrailingConstraint=_labelTrailingConstraint - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(UILabel *)sizeLabel;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(void)setLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelTrailingConstraint;
-(void)setSizeLabelHidden:(BOOL)arg1 ;
-(void)setupConstraints;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSize:(id)arg1 ;
-(void)setTableView:(id)arg1 ;
@end

