/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKPaymentHostEndpointRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _registrySerialQueue;
	NSMutableDictionary* _hostIdentifierToEndpointMap;
	NSMutableDictionary* _processIdentifierToHostIdentifiersMap;

}
-(void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(id)takeListenerEndpointForHostIdentifier:(id)arg1 ;
-(void)removeListenerEndpointsForProcessIdentifier:(int)arg1 ;
-(id)init;
-(id)debugDescription;
@end

