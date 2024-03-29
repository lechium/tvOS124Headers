/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>

@protocol MKPlaceParentInfoViewControllerDelegate;
@class MKPlaceSectionRowView, NSTextAttachment, NSLayoutConstraint, MKMapItem, UILabel, UIImageView, UIImage, NSString;

@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware> {

	MKPlaceSectionRowView* _sectionRow;
	NSTextAttachment* _attachment;
	BOOL _resizableViewsDisabled;
	BOOL _accessibilityMode;
	id<MKPlaceParentInfoViewControllerDelegate> _delegate;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _leadingLayoutGuideConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _baselineConstraint;
	MKMapItem* _childMapItem;
	MKMapItem* _parentMapItem;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _iconImageView;
	UIImage* _iconImage;

}

@property (nonatomic,retain) NSLayoutConstraint * topConstraint;                                       //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingLayoutGuideConstraint;                        //@synthesize leadingLayoutGuideConstraint=_leadingLayoutGuideConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                    //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * baselineConstraint;                                  //@synthesize baselineConstraint=_baselineConstraint - In the implementation block
@property (nonatomic,retain) MKMapItem * childMapItem;                                                 //@synthesize childMapItem=_childMapItem - In the implementation block
@property (nonatomic,retain) MKMapItem * parentMapItem;                                                //@synthesize parentMapItem=_parentMapItem - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                                      //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) BOOL accessibilityMode;                                                   //@synthesize accessibilityMode=_accessibilityMode - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceParentInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                              //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
+(id)parentInfoWithPlaceItem:(id)arg1 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)infoCardChildPossibleActions;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_contentSizeDidChange;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(id)initWithChild:(id)arg1 ;
-(void)updateAccessibilityMode;
-(void)showData;
-(void)setAccessibilityMode:(BOOL)arg1 ;
-(void)setupData;
-(id)venueTitleForMapItem:(id)arg1 ;
-(id)_titleAttributedString;
-(void)addConstraints;
-(void)updateConstraintsValue;
-(void)updateLabelsColor;
-(id)parentIdentifiers;
-(void)fetchParentItem;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingLayoutGuideConstraint;
-(void)setLeadingLayoutGuideConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)baselineConstraint;
-(void)setBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(MKMapItem *)childMapItem;
-(void)setChildMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)parentMapItem;
-(void)setParentMapItem:(MKMapItem *)arg1 ;
-(BOOL)accessibilityMode;
-(void)setIconImage:(UIImage *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<MKPlaceParentInfoViewControllerDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(id<MKPlaceParentInfoViewControllerDelegate>)delegate;
-(NSLayoutConstraint *)topConstraint;
-(NSLayoutConstraint *)bottomConstraint;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UIImage *)iconImage;
@end

