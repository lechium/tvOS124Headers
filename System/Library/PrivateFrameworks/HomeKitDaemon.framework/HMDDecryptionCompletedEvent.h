/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDecryptionCompletedEvent : HMDLogEvent {

	BOOL _didDecryptionFail;

}

@property (assign,nonatomic) BOOL didDecryptionFail;              //@synthesize didDecryptionFail=_didDecryptionFail - In the implementation block
+(id)decryptionCompletedWithFailure:(BOOL)arg1 ;
+(id)uuid;
-(id)initWithFailure:(BOOL)arg1 ;
-(BOOL)didDecryptionFail;
-(void)setDidDecryptionFail:(BOOL)arg1 ;
@end

