/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVPlayback/TVPAudioRoutingControllerDelegate.h>
#import <TVPlayback/TVPTableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSIndexPath, TVPTableView, TVPAudioRoutingController, NSArray, NSString;

@interface TVPMusicSpeakerSelectionViewController : UIViewController <TVPAudioRoutingControllerDelegate, TVPTableViewDelegate, UITableViewDataSource> {

	NSIndexPath* _selectedIndexPath;
	TVPTableView* _tableView;
	TVPAudioRoutingController* _routingController;
	NSArray* _knownRoutes;
	NSArray* _otherRoutes;
	NSString* _lastFocusedRouteID;

}

@property (nonatomic,retain) TVPTableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) TVPAudioRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,retain) NSArray * knownRoutes;                                      //@synthesize knownRoutes=_knownRoutes - In the implementation block
@property (nonatomic,retain) NSArray * otherRoutes;                                      //@synthesize otherRoutes=_otherRoutes - In the implementation block
@property (nonatomic,retain) NSString * lastFocusedRouteID;                              //@synthesize lastFocusedRouteID=_lastFocusedRouteID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVPAudioRoutingController *)routingController;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(NSArray *)knownRoutes;
-(NSArray *)otherRoutes;
-(void)setKnownRoutes:(NSArray *)arg1 ;
-(void)setOtherRoutes:(NSArray *)arg1 ;
-(id)_indexPathForAudioRoute:(id)arg1 ;
-(id)_routeForIndexPath:(id)arg1 ;
-(void)setLastFocusedRouteID:(NSString *)arg1 ;
-(NSString *)lastFocusedRouteID;
-(id)_indexPathForAudioRouteID:(id)arg1 ;
-(void)setRoutingController:(TVPAudioRoutingController *)arg1 ;
-(TVPTableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(TVPTableView *)arg1 ;
-(void)didReceiveMemoryWarning;
@end

