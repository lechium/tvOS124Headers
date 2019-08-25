/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSNumber, NSString;

@interface MPModelPlaybackPosition : MPModelObject

@property (assign,nonatomic) double bookmarkTime; 
@property (assign,nonatomic) BOOL shouldRememberBookmarkTime; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,copy) NSNumber * stopTime; 
@property (nonatomic,copy) NSString * storeUbiquitousIdentifier; 
@property (assign,nonatomic) long long userPlayCount; 
+(id)__bookmarkTime_KEY;
+(id)__shouldRememberBookmarkTime_KEY;
+(id)__hasBeenPlayed_KEY;
+(id)__startTime_KEY;
+(id)__stopTime_KEY;
+(id)__storeUbiquitousIdentifier_KEY;
+(id)__userPlayCount_KEY;
@end

