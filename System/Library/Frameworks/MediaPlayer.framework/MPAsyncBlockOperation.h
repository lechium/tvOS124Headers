/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@interface MPAsyncBlockOperation : MPAsyncOperation {

	/*^block*/id _startHandler;

}

@property (nonatomic,copy,readonly) id startHandler;              //@synthesize startHandler=_startHandler - In the implementation block
-(void)execute;
-(id)initWithStartHandler:(/*^block*/id)arg1 ;
-(id)startHandler;
@end
