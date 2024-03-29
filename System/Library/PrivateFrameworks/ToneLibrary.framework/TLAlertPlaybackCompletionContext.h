/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface TLAlertPlaybackCompletionContext : NSObject {

	/*^block*/id _completionHandler;
	long long _playbackCompletionType;
	NSError* _error;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long playbackCompletionType;              //@synthesize playbackCompletionType=_playbackCompletionType - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(void)setPlaybackCompletionType:(long long)arg1 ;
-(long long)playbackCompletionType;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

