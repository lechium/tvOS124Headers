/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableDictionary, NSNumber;

@interface MPPlaybackUserDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsHighQualityMusicStreamingOnCellular;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	int _musicEQPreset;
	long long _musicRepeatType;
	long long _musicShuffleType;
	BOOL _soundCheckEnabled;
	BOOL _speakerRouteEnabled;
	NSMutableDictionary* _lastSiriPlaybackContextIDs;
	vector<int, std::__1::allocator<int> >* _notifyTokens;
	NSObject*<OS_dispatch_queue> _userDefaultsMutationQueue;

}

@property (nonatomic,readonly) BOOL allowsHighQualityMusicStreamingOnCellular; 
@property (nonatomic,readonly) int musicEQPreset;                                                            //@synthesize musicEQPreset=_musicEQPreset - In the implementation block
@property (assign,nonatomic) long long musicRepeatType; 
@property (assign,nonatomic) long long musicShuffleType; 
@property (nonatomic,readonly) BOOL soundCheckEnabled; 
@property (nonatomic,readonly) BOOL speakerRouteEnabled; 
@property (nonatomic,readonly) unsigned long long preferredVideosAssetQualityOnCellular; 
@property (nonatomic,readonly) unsigned long long preferredVideosAssetQualityOnWifi; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled; 
@property (nonatomic,readonly) BOOL shouldUseNewQueueManagement; 
+(id)standardUserDefaults;
-(unsigned long long)preferredVideosAssetQualityOnCellular;
-(unsigned long long)preferredVideosAssetQualityOnWifi;
-(BOOL)allowsHighQualityMusicStreamingOnCellular;
-(long long)_calculateCurrentMusicRepeatType;
-(long long)_calculateCurrentMusicShuffleType;
-(int)_calculateCurrentMusicEQPreset;
-(void)_addNotificationObserver:(/*^block*/id)arg1 forUserDefaultKey:(CFStringRef)arg2 ;
-(void)_mobileiPodPrefsDidChange;
-(void)_postRepeatShuffleTypeGlobalNotification;
-(long long)musicRepeatType;
-(long long)musicShuffleType;
-(void)setMusicRepeatType:(long long)arg1 ;
-(void)setMusicShuffleType:(long long)arg1 ;
-(BOOL)soundCheckEnabled;
-(BOOL)speakerRouteEnabled;
-(id)isPrivateListeningEnabled;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(BOOL)shouldUseNewQueueManagement;
-(id)lastSiriPlaybackContextIDForPlayerID:(id)arg1 ;
-(void)setLastSiriPlaybackContextID:(id)arg1 forPlayerID:(id)arg2 ;
-(int)musicEQPreset;
-(id)init;
-(void)dealloc;
@end

