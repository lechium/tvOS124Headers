/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_service_connector.h>

@protocol OS_nw_listener, OS_nw_parameters, OS_dispatch_queue, OS_nw_dictionary;
@class NSObject, NSString;

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {

	NSObject*<OS_nw_listener> listener;
	unsigned state;
	NSObject*<OS_nw_parameters> clientParameters;
	NSObject*<OS_dispatch_queue> serviceConnectorQueue;
	unsigned long long uniqueID;
	unsigned short localPortHBO;
	/*^block*/id serviceAvailableBlock;
	NSObject*<OS_nw_dictionary> pendingIncomingRequests;
	NSObject*<OS_nw_dictionary> activeConnections;
	NSObject*<OS_nw_dictionary> activeOutgoingRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

