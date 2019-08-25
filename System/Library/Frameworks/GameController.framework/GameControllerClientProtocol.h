/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GameControllerClientProtocol <NSObject>
@optional
-(void)addControllerForAppStoreRemote:(id)arg1;

@required
-(void)addController:(id)arg1;
-(void)removeController:(id)arg1;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
-(void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4;
-(void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5;
-(void)replyConnectedHosts:(id)arg1;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;

@end

