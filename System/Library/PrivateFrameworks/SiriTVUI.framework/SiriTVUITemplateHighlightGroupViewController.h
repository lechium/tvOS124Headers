/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class SiriTVUITemplateItemViewController, SiriTVUITemplateHighlightGroupView, SiriTVUIHighlightGroupViewTemplateItem;

@interface SiriTVUITemplateHighlightGroupViewController : SiriTVUITemplateItemViewController {

	SiriTVUITemplateItemViewController* _currentViewController;
	long long _selectedIndex;

}

@property (nonatomic,retain) SiriTVUITemplateHighlightGroupView * view; 
@property (nonatomic,retain) SiriTVUIHighlightGroupViewTemplateItem * templateItem; 
@property (assign,nonatomic) long long selectedIndex;                                            //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(BOOL)supportsSwipeDismissal;
-(void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(void)loadView;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
@end

