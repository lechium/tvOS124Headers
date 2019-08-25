/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlaybackViewController.h>

@class IKPlaylistElement, TVPPlaybackReportingEventCollection;

@interface TVCKPlaylistViewController : TVPPlaybackViewController {

	IKPlaylistElement* _playlistElement;
	BOOL _wasPlayingBackgroundAudio;
	TVPPlaybackReportingEventCollection* _eventCollection;

}
-(void)_findExtrasMainVideoBackgroundFromNavigationController:(id)arg1 andStop:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)updateWithViewElement:(id)arg1 ;
-(id)_storeMediaItemsForVideoElement:(id)arg1 ;
-(id)_auxMediaItemForVideoElement:(id)arg1 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 initialPlaybackType:(long long)arg3 ;
@end

