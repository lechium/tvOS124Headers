/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol HFMediaValueSource <NSObject>
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer; 
@property (nonatomic,readonly) BOOL hasPendingWrites; 
@property (nonatomic,readonly) NSError * cachedPlaybackStateWriteError; 
@required
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(BOOL)hasPendingWrites;
-(long long)lastPlaybackStateForProfile;
-(id)writePlaybackState:(long long)arg1;
-(NSError *)cachedPlaybackStateWriteError;

@end
