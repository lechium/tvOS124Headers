/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlayerCommandRequest;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation {

	MPCPlayerCommandRequest* _request;
	unsigned long long _options;

}

@property (nonatomic,readonly) MPCPlayerCommandRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                     //@synthesize options=_options - In the implementation block
-(void)execute;
-(id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)options;
-(MPCPlayerCommandRequest *)request;
@end

