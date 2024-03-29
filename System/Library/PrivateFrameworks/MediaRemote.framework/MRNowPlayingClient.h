/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class _MRNowPlayingPlayerProtobuf, NSObject, NSMutableArray, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingClientProtobuf, NSArray;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {

	_MRNowPlayingPlayerProtobuf* _activePlayer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _playerClients;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                      //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * activePlayerPath; 
@property (nonatomic,readonly) NSArray * playerClients; 
-(id)initWithPlayerPath:(id)arg1 ;
-(BOOL)updateActivePlayerPath:(id)arg1 ;
-(void)mergeClient:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)playerClients;
-(_MRNowPlayingPlayerPathProtobuf *)activePlayerPath;
-(id)nowPlayingPlayerClientForPlayerPath:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(_MRNowPlayingClientProtobuf *)client;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(id)description;
-(id)debugDescription;
@end

