/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcher.h>

@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSXPCListenerEndpoint, NSArray;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher> {

	NSXPCConnection* _connection;
	NSMutableArray* _tokenIDs;
	NSMutableDictionary* _removalHandlers;
	/*^block*/id _insertionHandler;

}

@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) NSArray * tokenIDs; 
-(id)initWithEndpoint:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)insertedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setupWithConnection:(id)arg1 ;
-(void)setInsertionHandler:(/*^block*/id)arg1 ;
-(NSArray *)tokenIDs;
-(id)initWithInsertionHandler:(/*^block*/id)arg1 ;
-(void)addRemovalHandler:(/*^block*/id)arg1 forTokenID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSXPCListenerEndpoint *)endpoint;
@end

