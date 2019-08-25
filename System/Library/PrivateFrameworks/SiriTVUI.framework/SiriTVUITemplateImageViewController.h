/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSURL, UITraitCollection, SiriTVUITemplateImageView, SiriTVUIImageViewTemplateItem;

@interface SiriTVUITemplateImageViewController : SiriTVUITemplateItemViewController {

	NSURL* _currentImageURL;
	UITraitCollection* _previousTraitCollection;
	BOOL _hasAppeared;

}

@property (nonatomic,retain) SiriTVUITemplateImageView * view; 
@property (nonatomic,retain) SiriTVUIImageViewTemplateItem * templateItem; 
@property (assign,nonatomic) BOOL hasAppeared;                                          //@synthesize hasAppeared=_hasAppeared - In the implementation block
-(void)setHasAppeared:(BOOL)arg1 ;
-(BOOL)hasAppeared;
-(void)_updateImageWithTraitCollection:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
@end
