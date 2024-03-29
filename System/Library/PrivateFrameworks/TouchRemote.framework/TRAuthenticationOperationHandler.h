/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler, NSString;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler> {

	TRCompanionAuthOperationHandler* _companionAuthHandler;
	TRProxyAuthOperationHandler* _proxyAuthHandler;

}

@property (nonatomic,retain) TRCompanionAuthOperationHandler * companionAuthHandler;              //@synthesize companionAuthHandler=_companionAuthHandler - In the implementation block
@property (nonatomic,retain) TRProxyAuthOperationHandler * proxyAuthHandler;                      //@synthesize proxyAuthHandler=_proxyAuthHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(TRProxyAuthOperationHandler *)proxyAuthHandler;
-(void)setProxyAuthHandler:(TRProxyAuthOperationHandler *)arg1 ;
-(TRCompanionAuthOperationHandler *)companionAuthHandler;
-(void)setCompanionAuthHandler:(TRCompanionAuthOperationHandler *)arg1 ;
-(id)initWithCompanionAuthHandler:(/*^block*/id)arg1 proxyAuthHandler:(/*^block*/id)arg2 ;
@end

