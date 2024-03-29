/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISettingTemplateView.h>

@class UIImageView, UIButton;

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView {

	UIImageView* _checkmarkImageView;
	UIButton* _selectionButton;

}

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)addTargetForSelectionEvent:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForSelectionEvent:(id)arg1 action:(SEL)arg2 ;
-(void)layoutSubviews;
-(void)reloadData;
@end

