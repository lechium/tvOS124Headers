/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSDownloadHandlerDelegate <NSObject>
@optional
-(void)downloadHandlerDidDisconnect:(id)arg1;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;

@end

