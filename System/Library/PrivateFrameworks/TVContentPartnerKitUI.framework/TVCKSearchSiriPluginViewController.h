/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVContentPartnerKitUI/TVCKSearchAppViewController.h>

@class TVCKSearchSiriContext, TVSSSearchResult, NSString;

@interface TVCKSearchSiriPluginViewController : TVCKSearchAppViewController {

	TVCKSearchSiriContext* _siriContext;
	TVSSSearchResult* _searchResult;
	NSString* _pluginMode;
	/*^block*/id _loadingCompletionHandler;

}

@property (nonatomic,copy) id loadingCompletionHandler;                    //@synthesize loadingCompletionHandler=_loadingCompletionHandler - In the implementation block
@property (nonatomic,retain) TVSSSearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSString * pluginMode;                          //@synthesize pluginMode=_pluginMode - In the implementation block
-(void)setSearchResult:(TVSSSearchResult *)arg1 ;
-(TVSSSearchResult *)searchResult;
-(void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1 ;
-(void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(CGPoint)arg3 ;
-(id)siriContext;
-(NSString *)pluginMode;
-(void)setPluginMode:(NSString *)arg1 ;
-(void)_accumulateImageStackViews:(id)arg1 descendingFromView:(id)arg2 ;
-(id)loadingCompletionHandler;
-(void)setLoadingCompletionHandler:(id)arg1 ;
-(void)_didFinishLoading;
-(void)_waitForLoadingToFinish;
-(void)appendBatch:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_launchOptions;
@end
