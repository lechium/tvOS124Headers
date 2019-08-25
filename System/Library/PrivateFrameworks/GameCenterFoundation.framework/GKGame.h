/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKGameInternal, NSDictionary, NSNumber, NSString, GKStoreItemInternal;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {

	GKGameInternal* _internal;
	long long _environment;

}

@property (retain) GKGameInternal * internal;                                      //@synthesize internal=_internal - In the implementation block
@property (assign) long long environment;                                          //@synthesize environment=_environment - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered; 
@property (nonatomic,readonly) NSDictionary * gameDescriptor; 
@property (nonatomic,readonly) NSNumber * adamID; 
@property (nonatomic,readonly) NSNumber * externalVersion; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) unsigned char platform; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultCategory; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem; 
@property (nonatomic,readonly) GKGameInfo gameInfo; 
@property (nonatomic,readonly) BOOL supportsMultiplayer; 
@property (nonatomic,readonly) BOOL supportsTurnBasedMultiplayer; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installedGame; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
+(id)currentGameIncludingGameCenter:(BOOL)arg1 ;
+(void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2 ;
+(void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadTopGamesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)updateGames:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)currentGame;
+(BOOL)isPreferences;
+(BOOL)isGameCenter;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setEnvironment:(long long)arg1 ;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)gameDescriptor;
-(GKGameInfo)gameInfo;
-(BOOL)isStoreItemUnexpired;
-(void)loadGameRatingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)submitRating:(float)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)getFriendPlayersForLeaderboard:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getFriendPlayersForAchievement:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isGameCenter;
-(GKGameInternal *)internal;
-(void)setInternal:(GKGameInternal *)arg1 ;
-(BOOL)isDownloading;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)environment;
-(NSString *)cacheKey;
-(BOOL)isInstalled;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

