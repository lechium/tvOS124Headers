/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MPAVItem, UITableView, MPAlternateTrack, _UIBackdropView, NSString;

@interface _MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	MPAVItem* _avItem;
	UITableView* _tableView;
	BOOL _hasAudio;
	BOOL _hasSubtitles;
	MPAlternateTrack* _originalAudioTrack;
	MPAlternateTrack* _originalSubtitleTrack;
	MPAlternateTrack* _newAudioTrack;
	MPAlternateTrack* _newSubtitleTrack;
	_UIBackdropView* _backdropView;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneButtonTapped:(id)arg1 ;
-(id)initWithAVItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_configurePopover;
-(id)_trackAtIndexPath:(id)arg1 ;
-(void)_applyChanges;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end

