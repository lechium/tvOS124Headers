/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKUsageNotificationServerExportedInterface.h>

@class NSXPCListener, NSMutableSet, NSString;

@interface PKUsageNotificationServer : PDXPCService <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {

	NSXPCListener* _listener;
	NSMutableSet* _connections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initializeUsageNotificationServer;
-(void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2 ;
-(void)notifyPaymentPassIdentifierUsed:(id)arg1 withTransactionInfo:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

