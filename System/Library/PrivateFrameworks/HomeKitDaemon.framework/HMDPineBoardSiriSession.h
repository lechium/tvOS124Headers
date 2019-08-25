/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDSiriSession.h>

@protocol PBSMediaRemoteServiceInterface;
@class PBSMediaRemoteSiriContext;

@interface HMDPineBoardSiriSession : HMDSiriSession {

	PBSMediaRemoteSiriContext* _siriUIContext;
	id<PBSMediaRemoteServiceInterface> _siriUIProxy;

}

@property (nonatomic,retain) PBSMediaRemoteSiriContext * siriUIContext;                   //@synthesize siriUIContext=_siriUIContext - In the implementation block
@property (nonatomic,retain) id<PBSMediaRemoteServiceInterface> siriUIProxy;              //@synthesize siriUIProxy=_siriUIProxy - In the implementation block
-(void)_createPBContext;
-(id<PBSMediaRemoteServiceInterface>)siriUIProxy;
-(void)setSiriUIProxy:(id<PBSMediaRemoteServiceInterface>)arg1 ;
-(PBSMediaRemoteSiriContext *)siriUIContext;
-(void)setSiriUIContext:(PBSMediaRemoteSiriContext *)arg1 ;
-(BOOL)activate;
-(id)initWithIdentifier:(id)arg1 ;
-(void)deactivate;
@end

