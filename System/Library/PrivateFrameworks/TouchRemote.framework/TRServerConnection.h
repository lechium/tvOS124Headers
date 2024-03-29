/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection {

	SFService* _service;

}

@property (assign,nonatomic,__weak) SFService * service;              //@synthesize service=_service - In the implementation block
-(SFService *)service;
-(void)setService:(SFService *)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)invalidate;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
@end

