/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSXPCConnection* _client;
	id _reactorID;
	NSFileAccessNode* _itemLocation;
	unsigned _effectiveUserIdentifier;

}

@property (assign) unsigned effectiveUserIdentifier; 
+(void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)setItemLocation:(id)arg1 ;
-(id)itemLocation;
-(id)reactorID;
-(unsigned)effectiveUserIdentifier;
-(void)setEffectiveUserIdentifier:(unsigned)arg1 ;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_clientProxy;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 ;
-(id)client;
-(void)dealloc;
-(id)description;
-(void)invalidate;
@end

