/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MFAATokenManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)requestMetadataForToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)confirmActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)_init;
@end

