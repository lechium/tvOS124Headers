/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView;

@interface RPYouTubeActivityProgressOverlay : UIView {

	BOOL _isShowing;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                           //@synthesize isShowing=_isShowing - In the implementation block
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setupOverlayAnimated:(BOOL)arg1 ;
-(void)tearDownOverlayAnimated:(BOOL)arg1 ;
-(void)setShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)stopActivity;
-(BOOL)isShowing;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

