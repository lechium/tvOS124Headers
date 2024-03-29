/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPClientProperties : NSObject {

	int _pid;
	BOOL _registered;
	CFFileDescriptorRef _fdref;
	CFMessagePortRef _remotePort;
	int _remoteAddress;
	int _serverFD;

}

@property (assign) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (getter=didRegister) BOOL registered;              //@synthesize registered=_registered - In the implementation block
@property (assign) CFFileDescriptorRef fdref;                //@synthesize fdref=_fdref - In the implementation block
@property (assign) CFMessagePortRef remotePort;              //@synthesize remotePort=_remotePort - In the implementation block
@property (assign) int remoteAddress;                        //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (assign) int serverFD;                             //@synthesize serverFD=_serverFD - In the implementation block
-(void)setPid:(int)arg1 ;
-(void)setFdref:(CFFileDescriptorRef)arg1 ;
-(void)setRemotePort:(CFMessagePortRef)arg1 ;
-(BOOL)didRegister;
-(CFFileDescriptorRef)fdref;
-(CFMessagePortRef)remotePort;
-(int)serverFD;
-(void)setServerFD:(int)arg1 ;
-(int)remoteAddress;
-(void)setRemoteAddress:(int)arg1 ;
-(int)pid;
-(void)dealloc;
-(void)setRegistered:(BOOL)arg1 ;
@end

