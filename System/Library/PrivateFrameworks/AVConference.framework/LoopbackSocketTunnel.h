/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LoopbackSocketTunnelDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface LoopbackSocketTunnel : NSObject {

	unsigned short _port;
	int sockFD;
	sockaddr_in sa;
	sockaddr_in vtpSA;
	NSObject* optionalArg;
	NSObject*<LoopbackSocketTunnelDelegate> _delegate;
	BOOL foundVTPIP;

}

@property (assign) NSObject * optionalArg; 
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(int)sendPacketToVTP:(id)arg1 ;
-(void)getIPPort:(tagIPPORT*)arg1 ;
-(void)getVTPIPPort:(tagIPPORT*)arg1 ;
-(void)setVTPIP:(tagIPPORT*)arg1 ;
-(void)shutdownSocket;
-(int)serverLoopProc;
-(NSObject *)optionalArg;
-(void)setOptionalArg:(NSObject *)arg1 ;
@end
