/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKSearchAppViewController.h>

@class TVCKSearchSiriContext, TVSSContentItem;

@interface TVCKSearchContentItemViewController : TVCKSearchAppViewController {

	TVCKSearchSiriContext* _siriContext;
	BOOL _userDriven;
	BOOL _playTrailer;
	TVSSContentItem* _contentItem;

}

@property (nonatomic,retain) TVSSContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (assign,nonatomic) BOOL userDriven;                            //@synthesize userDriven=_userDriven - In the implementation block
@property (assign,nonatomic) BOOL playTrailer;                           //@synthesize playTrailer=_playTrailer - In the implementation block
-(BOOL)playTrailer;
-(void)setPlayTrailer:(BOOL)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(TVSSContentItem *)contentItem;
-(id)siriContext;
-(id)initWithContentItem:(id)arg1 userDriven:(BOOL)arg2 playTrailer:(BOOL)arg3 ;
-(void)setContentItem:(TVSSContentItem *)arg1 ;
-(void)viewDidLoad;
-(id)_launchOptions;
@end

