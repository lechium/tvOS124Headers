/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UILabel;

@interface TVLDialogViewController : UIViewController <ATVUpdatable> {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(id)initWithDialogElement:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
