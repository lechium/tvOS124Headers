/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUIViewControllerRootView.h>

@class NSLayoutConstraint, UIView;

@interface _MKStackingContentView : _MKUIViewControllerRootView {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _middleConstraint;
	NSLayoutConstraint* _bottomConstraint;
	UIView* _topView;
	UIView* _bottomView;

}

@property (nonatomic,retain) UIView * topView;                                     //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                  //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint; 
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
-(void)updateConstraints;
-(NSLayoutConstraint *)bottomConstraint;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)topView;
-(UIView *)bottomView;
@end

