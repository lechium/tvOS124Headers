/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVMediaControllerHosting;
@class VUIMediaInfo, IKViewElement, IKAppContext, UIViewController, NSArray;

@interface VUINowPlayingInfo : NSObject {

	unsigned long long _playbackContext;
	VUIMediaInfo* _mediaInfo;
	IKViewElement* _viewElement;
	IKAppContext* _appContext;
	UIViewController*<TVMediaControllerHosting> _mediaControllerHost;
	NSArray* _mediaItems;

}

@property (nonatomic,readonly) unsigned long long playbackContext;                                         //@synthesize playbackContext=_playbackContext - In the implementation block
@property (nonatomic,retain) VUIMediaInfo * mediaInfo;                                                     //@synthesize mediaInfo=_mediaInfo - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKAppContext * appContext;                                                    //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) UIViewController*<TVMediaControllerHosting> mediaControllerHost;              //@synthesize mediaControllerHost=_mediaControllerHost - In the implementation block
@property (nonatomic,retain) NSArray * mediaItems;                                                         //@synthesize mediaItems=_mediaItems - In the implementation block
-(id)initWithPlaybackContext:(unsigned long long)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(IKAppContext *)appContext;
-(unsigned long long)playbackContext;
-(UIViewController*<TVMediaControllerHosting>)mediaControllerHost;
-(VUIMediaInfo *)mediaInfo;
-(void)setMediaInfo:(VUIMediaInfo *)arg1 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(void)setMediaControllerHost:(UIViewController*<TVMediaControllerHosting>)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
@end
