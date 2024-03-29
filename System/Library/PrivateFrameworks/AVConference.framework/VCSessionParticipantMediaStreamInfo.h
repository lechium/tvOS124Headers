/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCMediaStream, NSMutableArray, NSArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject {

	VCMediaStream* _stream;
	NSMutableArray* _streamConfigs;

}

@property (nonatomic,retain) VCMediaStream * stream;                 //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSArray * streamConfigs;              //@synthesize streamConfigs=_streamConfigs - In the implementation block
-(NSArray *)streamConfigs;
-(void)addStreamConfig:(id)arg1 ;
-(void)setStream:(VCMediaStream *)arg1 ;
-(VCMediaStream *)stream;
-(id)init;
-(void)dealloc;
@end

