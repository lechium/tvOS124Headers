/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VCAudioSessionDelegate;
@class VCAudioSessionMediaProperties;

@interface VCAudioSessionClient : NSObject <NSCopying> {

	id<VCAudioSessionDelegate> _notificationClient;
	VCAudioSessionMediaProperties* _mediaProperties;
	unsigned char _clientType;

}

@property (assign,nonatomic) unsigned char clientType;                                     //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) id<VCAudioSessionDelegate> notificationClient; 
@property (nonatomic,retain) VCAudioSessionMediaProperties * mediaProperties;              //@synthesize mediaProperties=_mediaProperties - In the implementation block
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned char)clientType;
-(void)setMediaProperties:(VCAudioSessionMediaProperties *)arg1 ;
-(id<VCAudioSessionDelegate>)notificationClient;
-(void)setNotificationClient:(id<VCAudioSessionDelegate>)arg1 ;
-(VCAudioSessionMediaProperties *)mediaProperties;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
