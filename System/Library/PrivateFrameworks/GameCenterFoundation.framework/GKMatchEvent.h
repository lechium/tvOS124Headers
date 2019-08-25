/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, GKPlayer;

@interface GKMatchEvent : NSObject {

	NSData* _data;
	GKPlayer* _recipientPlayer;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) GKPlayer * recipientPlayer;              //@synthesize recipientPlayer=_recipientPlayer - In the implementation block
-(GKPlayer *)recipientPlayer;
-(void)setRecipientPlayer:(GKPlayer *)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

