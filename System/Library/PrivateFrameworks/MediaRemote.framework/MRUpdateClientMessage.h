/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingClientProtobuf;

@interface MRUpdateClientMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * client; 
-(id)initWithClient:(id)arg1 ;
-(_MRNowPlayingClientProtobuf *)client;
-(unsigned long long)type;
@end

