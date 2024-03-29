/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPRelatedContent.h>
#import <libobjc.A.dylib/TVNextVideoViewControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol TVPPlayback, TVPMediaItem;
@class NSObject, TVLDocument, TVLVideoPlayerElement, TVLRelatedPlaybackElement, TVLListViewDataSource, NSString;

@interface TVLRelatedContent : TVPRelatedContent <TVNextVideoViewControllerDelegate, UITableViewDelegate> {

	id<TVPPlayback> _player;
	NSObject*<TVPMediaItem> _mediaItem;
	TVLDocument* _feedDocument;
	TVLVideoPlayerElement* _videoPlayerElement;
	TVLRelatedPlaybackElement* _relatedPlaybackElement;
	TVLListViewDataSource* _tableViewDataSource;

}

@property (nonatomic,retain) id<TVPPlayback> player;                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;                               //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) TVLDocument * feedDocument;                                      //@synthesize feedDocument=_feedDocument - In the implementation block
@property (nonatomic,retain) TVLVideoPlayerElement * videoPlayerElement;                      //@synthesize videoPlayerElement=_videoPlayerElement - In the implementation block
@property (nonatomic,retain) TVLRelatedPlaybackElement * relatedPlaybackElement;              //@synthesize relatedPlaybackElement=_relatedPlaybackElement - In the implementation block
@property (nonatomic,retain) TVLListViewDataSource * tableViewDataSource;                     //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setPlayer:(id<TVPPlayback>)arg1 ;
-(id<TVPPlayback>)player;
-(TVLDocument *)feedDocument;
-(void)setFeedDocument:(TVLDocument *)arg1 ;
-(TVLListViewDataSource *)tableViewDataSource;
-(void)setTableViewDataSource:(TVLListViewDataSource *)arg1 ;
-(void)evaluateJavascriptForEvent:(id)arg1 atIndexPath:(id)arg2 ;
-(TVLRelatedPlaybackElement *)relatedPlaybackElement;
-(TVLVideoPlayerElement *)videoPlayerElement;
-(void)setVideoPlayerElement:(TVLVideoPlayerElement *)arg1 ;
-(void)setRelatedPlaybackElement:(TVLRelatedPlaybackElement *)arg1 ;
-(void)startPlayingVideoForNextVideoViewController:(id)arg1 ;
-(void)nextVideoViewControllerWillAppear:(id)arg1 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end

