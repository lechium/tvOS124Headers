/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSLargeTextSliderListController;

@interface PSLargeTextController : PSListController {

	PSLargeTextSliderListController* _sliderListController;
	PSLargeTextSliderListController* _extendedRangeSliderListController;
	BOOL _usesExtendedRange;
	BOOL _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) BOOL showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(id)specifiers;
-(BOOL)showsExtendedRangeSwitch;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

