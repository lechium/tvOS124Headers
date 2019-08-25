/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKSessionDelegate.h>
#import <libobjc.A.dylib/GKSessionPrivateDelegate.h>

@protocol OS_dispatch_queue, GKMatchDelegate;
@class GKThreadsafeDictionary, NSMutableSet, NSObject, GKSession, GKConnection, NSMutableDictionary, NSMutableArray, NSData, NSString, NSDictionary, NSArray;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate> {

	unsigned char _version;
	BOOL _needHostScore;
	BOOL _hostScoreForQuery;
	BOOL _recentlyBecameActive;
	unsigned _packetSequenceNumber;
	GKThreadsafeDictionary* _playersByIdentifier;
	NSMutableSet* _connectedPlayerIDs;
	NSObject*<OS_dispatch_queue> _stateChangeQueue;
	id<GKMatchDelegate> _delegateWeak;
	GKSession* _session;
	GKConnection* _connection;
	unsigned long long _expectedPlayerCount;
	NSMutableDictionary* _guestConnections;
	NSMutableDictionary* _guestSessions;
	NSMutableDictionary* _playerEventQueues;
	NSMutableArray* _reinvitedPlayers;
	NSData* _selfBlob;
	id<GKMatchDelegate> _inviteDelegateWeak;
	NSMutableDictionary* _playerPushTokens;
	NSMutableArray* _opponentIDs;
	NSString* _rematchID;
	long long _rematchCount;
	NSDictionary* _networkStatistics;
	NSMutableDictionary* _hostScores;
	/*^block*/id _chooseHostCompletion;

}

@property (nonatomic,retain) GKSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) GKConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * guestConnections;                     //@synthesize guestConnections=_guestConnections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * guestSessions;                        //@synthesize guestSessions=_guestSessions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerEventQueues;                    //@synthesize playerEventQueues=_playerEventQueues - In the implementation block
@property (nonatomic,retain) NSMutableSet * connectedPlayerIDs;                          //@synthesize connectedPlayerIDs=_connectedPlayerIDs - In the implementation block
@property (nonatomic,retain) GKThreadsafeDictionary * playersByIdentifier;               //@synthesize playersByIdentifier=_playersByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * reinvitedPlayers;                          //@synthesize reinvitedPlayers=_reinvitedPlayers - In the implementation block
@property (nonatomic,retain) NSData * selfBlob;                                          //@synthesize selfBlob=_selfBlob - In the implementation block
@property (assign,nonatomic) unsigned char version;                                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) id<GKMatchDelegate> inviteDelegate;                         //@synthesize inviteDelegateWeak=_inviteDelegateWeak - In the implementation block
@property (assign,nonatomic) unsigned packetSequenceNumber;                              //@synthesize packetSequenceNumber=_packetSequenceNumber - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playerPushTokens;                     //@synthesize playerPushTokens=_playerPushTokens - In the implementation block
@property (nonatomic,retain) NSMutableArray * opponentIDs;                               //@synthesize opponentIDs=_opponentIDs - In the implementation block
@property (nonatomic,retain) NSString * rematchID;                                       //@synthesize rematchID=_rematchID - In the implementation block
@property (assign,nonatomic) long long rematchCount;                                     //@synthesize rematchCount=_rematchCount - In the implementation block
@property (nonatomic,retain) NSDictionary * networkStatistics;                           //@synthesize networkStatistics=_networkStatistics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hostScores;                           //@synthesize hostScores=_hostScores - In the implementation block
@property (assign,nonatomic) BOOL needHostScore;                                         //@synthesize needHostScore=_needHostScore - In the implementation block
@property (assign,nonatomic) BOOL hostScoreForQuery;                                     //@synthesize hostScoreForQuery=_hostScoreForQuery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateChangeQueue;              //@synthesize stateChangeQueue=_stateChangeQueue - In the implementation block
@property (nonatomic,copy) id chooseHostCompletion;                                      //@synthesize chooseHostCompletion=_chooseHostCompletion - In the implementation block
@property (assign,nonatomic) BOOL recentlyBecameActive;                                  //@synthesize recentlyBecameActive=_recentlyBecameActive - In the implementation block
@property (nonatomic,readonly) NSArray * players; 
@property (assign,nonatomic) id<GKMatchDelegate> delegate;                               //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPlayerCount;                   //@synthesize expectedPlayerCount=_expectedPlayerCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(GKSession *)arg1 ;
-(GKSession *)session;
-(unsigned long long)expectedPlayerCount;
-(unsigned)packetSequenceNumber;
-(NSMutableArray *)reinvitedPlayers;
-(void)withEventQueueForPlayer:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)sendStateCallbackForPlayer:(id)arg1 state:(long long)arg2 ;
-(void)sendQueuedPacketsForPlayer:(id)arg1 ;
-(void)setGuestConnections:(NSMutableDictionary *)arg1 ;
-(void)setGuestSessions:(NSMutableDictionary *)arg1 ;
-(void)setPlayerPushTokens:(NSMutableDictionary *)arg1 ;
-(void)setOpponentIDs:(NSMutableArray *)arg1 ;
-(void)relayPushNotification:(id)arg1 ;
-(void)localPlayerDidChange:(id)arg1 ;
-(void)setRecentlyBecameActive:(BOOL)arg1 ;
-(void)setSelfBlob:(NSData *)arg1 ;
-(void)getLocalConnectionDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)withEventQueueForPlayer:(id)arg1 create:(/*^block*/id)arg2 perform:(/*^block*/id)arg3 ;
-(void)addPlayers:(id)arg1 ;
-(void)setRematchID:(NSString *)arg1 ;
-(void)setRematchCount:(long long)arg1 ;
-(void)sendVersionData:(unsigned char)arg1 ;
-(id)playerFromPeer:(id)arg1 ;
-(NSData *)selfBlob;
-(void)withEventQueueForPlayer:(id)arg1 createIfNeeded:(BOOL)arg2 perform:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)guestConnections;
-(NSMutableDictionary *)guestSessions;
-(id)nearbyConnectionData;
-(void)setPacketSequenceNumber:(unsigned)arg1 ;
-(id)packet:(unsigned char)arg1 data:(id)arg2 ;
-(id)peerFromPlayer:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 error:(id*)arg4 ;
-(NSString *)rematchID;
-(void)disconnectGuestSessions;
-(GKThreadsafeDictionary *)playersByIdentifier;
-(void)_delegate:(id)arg1 didReceiveData:(id)arg2 forRecipient:(id)arg3 fromPlayer:(id)arg4 ;
-(void)updateRematchID;
-(void)sendStateCallbackToDelegate:(id)arg1 forPlayer:(id)arg2 state:(long long)arg3 ;
-(void)updateStateForPlayer:(id)arg1 state:(long long)arg2 ;
-(void)connectToPlayers:(id)arg1 withPeerDictionaries:(id)arg2 version:(unsigned char)arg3 sessionToken:(id)arg4 cdxTicket:(id)arg5 ;
-(void)relayPush:(id)arg1 ;
-(void)reinviteeAcceptedNotification:(id)arg1 ;
-(void)reinviteeDeclinedNotification:(id)arg1 ;
-(BOOL)sendInviteData:(id)arg1 error:(id*)arg2 ;
-(void)chooseBestHostingPlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setHostScores:(NSMutableDictionary *)arg1 ;
-(void)setChooseHostCompletion:(id)arg1 ;
-(void)calculateHostScore;
-(BOOL)selectHostIfRequestedAndAllScored;
-(void)setHostScoreForQuery:(BOOL)arg1 ;
-(void)sendHostScoreAsQuery:(BOOL)arg1 ;
-(void)addHostScore:(int)arg1 forPlayer:(id)arg2 ;
-(BOOL)haveAllHostScores;
-(void)setNeedHostScore:(BOOL)arg1 ;
-(id)guestPlayers;
-(id)playerForSession:(id)arg1 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
-(void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2 ;
-(id<GKMatchDelegate>)inviteDelegate;
-(id)allIDs;
-(void)conditionallyRelaunchPlayer:(id)arg1 ;
-(BOOL)recentlyBecameActive;
-(void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2 ;
-(void)deferStateCallbackForPlayer:(id)arg1 state:(long long)arg2 ;
-(void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2 ;
-(void)sendData:(id)arg1 forRecipient:(id)arg2 fromPlayer:(id)arg3 ;
-(void)queueData:(id)arg1 withEventQueueForPlayer:(id)arg2 forRecipient:(id)arg3 ;
-(void)setNetworkStatistics:(NSDictionary *)arg1 ;
-(id)dataFromBase64String:(id)arg1 ;
-(BOOL)shouldStartRelay:(id)arg1 ;
-(void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2 ;
-(void)initRelayConnectionForPlayer:(id)arg1 ;
-(void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2 ;
-(void)updateRelayConnectionForPlayer:(id)arg1 ;
-(void)initRelayResponse:(id)arg1 player:(id)arg2 ;
-(void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2 ;
-(void)requestRelayInitForPlayer:(id)arg1 ;
-(void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2 ;
-(void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2 ;
-(void)requestRelayUpdateForPlayer:(id)arg1 ;
-(void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3 ;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(id)playerIDs;
-(void)setInviteDelegate:(id<GKMatchDelegate>)arg1 ;
-(void)preLoadInviter:(id)arg1 sessionToken:(id)arg2 ;
-(void)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2 ;
-(void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2 ;
-(void)inviteeComboMatched:(long long)arg1 ;
-(BOOL)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(long long)arg3 error:(id*)arg4 ;
-(BOOL)sendDataToAllPlayers:(id)arg1 withDataMode:(long long)arg2 error:(id*)arg3 ;
-(id)voiceChatWithName:(id)arg1 ;
-(void)rematchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)chooseBestHostPlayerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4 ;
-(void)session:(id)arg1 networkStatisticsChanged:(id)arg2 ;
-(void)acceptRelayResponse:(id)arg1 player:(id)arg2 ;
-(void)preemptRelay:(id)arg1 ;
-(void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3 ;
-(void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3 ;
-(void)setPlayersByIdentifier:(GKThreadsafeDictionary *)arg1 ;
-(NSMutableSet *)connectedPlayerIDs;
-(void)setConnectedPlayerIDs:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateChangeQueue;
-(void)setStateChangeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)playerEventQueues;
-(void)setPlayerEventQueues:(NSMutableDictionary *)arg1 ;
-(void)setReinvitedPlayers:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)playerPushTokens;
-(NSMutableArray *)opponentIDs;
-(long long)rematchCount;
-(NSDictionary *)networkStatistics;
-(NSMutableDictionary *)hostScores;
-(BOOL)needHostScore;
-(BOOL)hostScoreForQuery;
-(id)chooseHostCompletion;
-(NSArray *)players;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<GKMatchDelegate>)arg1 ;
-(id<GKMatchDelegate>)delegate;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(void)disconnect;
-(GKConnection *)connection;
-(void)setConnection:(GKConnection *)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)connected:(id)arg1 ;
@end

