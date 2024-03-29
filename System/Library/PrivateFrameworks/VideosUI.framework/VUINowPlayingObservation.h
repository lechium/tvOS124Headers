/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VUINowPlayingObservation : NSObject {

	BOOL _playing;
	NSString* _nowPlayingAppBundleIdentifier;

}

@property (assign,getter=isPlaying,nonatomic) BOOL playing;                       //@synthesize playing=_playing - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingAppBundleIdentifier;              //@synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier - In the implementation block
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)nowPlayingAppBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 isPlaying:(BOOL)arg2 ;
-(void)setNowPlayingAppBundleIdentifier:(NSString *)arg1 ;
@end

