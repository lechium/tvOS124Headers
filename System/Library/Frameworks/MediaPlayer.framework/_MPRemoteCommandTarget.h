/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MPRemoteCommandTarget : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(id)initWithTargetBlock:(/*^block*/id)arg1 ;
-(long long)invokeWithRemoteCommandEvent:(id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end
