/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPTunnelDelegate <NSObject>
@property (readonly) BOOL isFirstTunnel; 
@required
-(BOOL)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
-(void)tunnelDidConnect:(id)arg1;
-(void)tunnelDidCancel:(id)arg1;

@end
