/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_browser.h>

@protocol OS_nw_browse_descriptor, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_path, OS_dispatch_queue, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_browser : NSObject <OS_nw_browser> {

	os_unfair_lock_s lock;
	NSObject*<OS_nw_browse_descriptor> descriptor;
	NSObject*<OS_nw_parameters> parameters;
	DNSServiceRef_tRef dns_service;
	DNSServiceRef_tRef dns_service_secondary_pointer;
	int dns_error;
	NSObject*<OS_nw_path_evaluator> browse_evaluator;
	NSObject*<OS_nw_path> current_browse_path;
	/*^block*/id update_handler;
	/*^block*/id cancel_handler;
	NSObject*<OS_dispatch_queue> client_queue;
	NSObject*<OS_nw_array> endpoint_array;
	NSObject*<OS_nw_array> path_endpoint_array;
	void* internally_retained_object;
	unsigned is_custom_browser : 1;
	unsigned is_nexus_only_browser : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDescriptor:(id)arg1 parameters:(id)arg2 ;
-(void)dealloc;
@end

