/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRTransactionSourceDelegate;
@class MRTransactionPacketizer, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionSource : NSObject {

	unsigned long long _name;
	MRTransactionPacketizer* _packetizer;
	NSMutableArray* _packets;
	id<MRTransactionSourceDelegate> _delegate;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(void)_processMessage:(id)arg1 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 packets:(id)arg3 delegate:(id)arg4 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)_begin;
-(unsigned long long)name;
@end

