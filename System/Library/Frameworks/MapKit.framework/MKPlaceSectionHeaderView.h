/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionItemView.h>

@class NSLayoutConstraint, NSString, _MKUILabel, _MKRightImageButton, NSArray, UIImage;

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {

	NSLayoutConstraint* _baselineToTopConstraint;
	NSLayoutConstraint* _baselineToBottomConstraint;
	NSLayoutConstraint* _baselineToBaselineConstraint;
	NSLayoutConstraint* _iconHeightConstraint;
	NSLayoutConstraint* _iconWidthConstraint;
	NSLayoutConstraint* _seeMoreBaselineConstraint;
	NSLayoutConstraint* _seeMoreCenterYConstraint;
	BOOL _contentChanged;
	double _width;
	BOOL _showSeeMoreButton;
	NSString* _seeMoreButtonText;
	NSString* _providerName;
	_MKUILabel* _sectionHeaderLabel;
	_MKRightImageButton* _seeMoreButton;
	NSArray* _seeMoreButtonConstraints;
	NSArray* _constraints;
	SEL _action;
	id _target;
	CGSize _iconDisplaySize;

}

@property (nonatomic,retain) _MKUILabel * sectionHeaderLabel;                  //@synthesize sectionHeaderLabel=_sectionHeaderLabel - In the implementation block
@property (nonatomic,retain) _MKRightImageButton * seeMoreButton;              //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (nonatomic,retain) NSArray * seeMoreButtonConstraints;               //@synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) SEL action;                                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * seeMoreButtonText;                     //@synthesize seeMoreButtonText=_seeMoreButtonText - In the implementation block
@property (nonatomic,retain) NSString * providerName;                          //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) CGSize iconDisplaySize;                           //@synthesize iconDisplaySize=_iconDisplaySize - In the implementation block
@property (assign,nonatomic) BOOL showSeeMoreButton;                           //@synthesize showSeeMoreButton=_showSeeMoreButton - In the implementation block
-(NSString *)providerName;
-(void)contentSizeDidChange;
-(BOOL)shouldStack;
-(void)createConstraints;
-(NSString *)seeMoreButtonText;
-(void)setSeeMoreButtonText:(NSString *)arg1 ;
-(void)setIconDisplaySize:(CGSize)arg1 ;
-(void)setShowSeeMoreButton:(BOOL)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(CGSize)iconDisplaySize;
-(BOOL)showSeeMoreButton;
-(_MKUILabel *)sectionHeaderLabel;
-(void)setSectionHeaderLabel:(_MKUILabel *)arg1 ;
-(_MKRightImageButton *)seeMoreButton;
-(void)setSeeMoreButton:(_MKRightImageButton *)arg1 ;
-(NSArray *)seeMoreButtonConstraints;
-(void)setSeeMoreButtonConstraints:(NSArray *)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(SEL)action;
-(void)updateConstraints;
-(NSArray *)constraints;
-(void)setAction:(SEL)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)updateContent;
-(void)setConstraints:(NSArray *)arg1 ;
@end

