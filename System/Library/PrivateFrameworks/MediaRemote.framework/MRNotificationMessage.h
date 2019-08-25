/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString, NSDictionary, _MRNowPlayingPlayerPathProtobuf;

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * notification; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(NSDictionary *)userInfo;
-(unsigned long long)type;
-(id)initWithNotification:(id)arg1 ;
-(NSString *)notification;
@end
