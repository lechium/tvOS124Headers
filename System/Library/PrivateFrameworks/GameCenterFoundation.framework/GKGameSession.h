/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GKCloudPlayer, NSArray, NSDate, NSMutableDictionary;

@interface GKGameSession : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	GKCloudPlayer* _owner;
	NSArray* _players;
	NSDate* _lastModifiedDate;
	GKCloudPlayer* _lastModifiedPlayer;
	long long _maxNumberOfConnectedPlayers;
	NSString* _serverChangeTag;
	NSMutableDictionary* _playerStates;

}

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) GKCloudPlayer * owner; 
@property (nonatomic,retain) NSArray * players; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) GKCloudPlayer * lastModifiedPlayer; 
@property (nonatomic,retain) NSString * serverChangeTag; 
@property (assign,nonatomic) long long maxNumberOfConnectedPlayers; 
@property (nonatomic,retain) NSMutableDictionary * playerStates; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * owner;                              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSArray * players;                                  //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                          //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * lastModifiedPlayer;                 //@synthesize lastModifiedPlayer=_lastModifiedPlayer - In the implementation block
@property (nonatomic,retain) NSString * serverChangeTag;                         //@synthesize serverChangeTag=_serverChangeTag - In the implementation block
@property (assign,nonatomic) long long maxNumberOfConnectedPlayers;              //@synthesize maxNumberOfConnectedPlayers=_maxNumberOfConnectedPlayers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerStates;                 //@synthesize playerStates=_playerStates - In the implementation block
@property (nonatomic,readonly) NSArray * badgedPlayers; 
+(id)gk_sessionEventListeners;
+(void)addEventListener:(id)arg1 ;
+(void)removeEventListener:(id)arg1 ;
+(void)postSession:(id)arg1 didAddPlayer:(id)arg2 ;
+(void)postSession:(id)arg1 didRemovePlayer:(id)arg2 ;
+(void)postSession:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3 ;
+(void)postSession:(id)arg1 player:(id)arg2 didSaveData:(id)arg3 ;
+(void)postSession:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3 ;
+(void)postSession:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4 ;
+(void)getZonesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)loadSessionsInContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)loadSessionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)removeSessionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getSessionsForZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)saveData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)descriptionSubstitutionMap;
-(void)setLastModifiedPlayer:(GKCloudPlayer *)arg1 ;
-(void)setServerChangeTag:(NSString *)arg1 ;
-(void)setMaxNumberOfConnectedPlayers:(long long)arg1 ;
-(GKCloudPlayer *)lastModifiedPlayer;
-(NSString *)serverChangeTag;
-(long long)maxNumberOfConnectedPlayers;
-(void)updateWithSession:(id)arg1 ;
-(void)getShareURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnectionState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)playersWithConnectionState:(long long)arg1 ;
-(void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)clearBadgeForPlayers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)badgedPlayers;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlayerStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)playerStates;
-(void)setPlayers:(NSArray *)arg1 ;
-(NSArray *)players;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(GKCloudPlayer *)owner;
-(void)setOwner:(GKCloudPlayer *)arg1 ;
@end

