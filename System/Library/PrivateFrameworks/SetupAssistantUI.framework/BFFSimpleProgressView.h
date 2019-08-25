/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class BFFPaneHeaderView, UIProgressView, UILabel;

@interface BFFSimpleProgressView : UIView {

	BFFPaneHeaderView* _headerView;
	UIProgressView* _progressBar;
	UILabel* _progressSubtextLabel;

}
-(double)progressBarWidth;
-(void)setProgressSubtext:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setDetail:(id)arg1 ;
@end

