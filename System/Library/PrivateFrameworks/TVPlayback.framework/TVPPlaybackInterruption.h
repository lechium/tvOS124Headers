/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlaybackInterruptable.h>

@class TVPPlaybackInterruptionCenter, NSUUID, NSString;

@interface TVPPlaybackInterruption : NSObject <TVPPlaybackInterruptable> {

	TVPPlaybackInterruptionCenter* _interruptionCenter;
	NSUUID* _interruptionID;
	long long _state;

}

@property (nonatomic,retain) TVPPlaybackInterruptionCenter * interruptionCenter;              //@synthesize interruptionCenter=_interruptionCenter - In the implementation block
@property (nonatomic,copy) NSUUID * interruptionID;                                           //@synthesize interruptionID=_interruptionID - In the implementation block
@property (assign,nonatomic) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)interruptionWillBegin;
-(void)interruptionDidBegin;
-(void)interruptionWillEnd;
-(void)interruptionDidEnd;
-(NSUUID *)interruptionID;
-(void)setInterruptionID:(NSUUID *)arg1 ;
-(TVPPlaybackInterruptionCenter *)interruptionCenter;
-(void)setInterruptionCenter:(TVPPlaybackInterruptionCenter *)arg1 ;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end

