/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSTimer;

@interface GCControllerMBDelegate : NSObject {

	BTSessionImplRef _session;
	BTPairingAgentImplRef _pairingAgent;
	BTDiscoveryAgentImplRef _discoveryAgent;
	NSTimer* _timer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)startScan;
-(void)scanTimeout:(id)arg1 ;
-(void)fireCompletionHandler;
-(void)stopScan;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

