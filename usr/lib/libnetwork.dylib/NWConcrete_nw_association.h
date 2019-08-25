/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_association.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_path;
@class NSObject, NSString;

@interface NWConcrete_nw_association : NSObject <OS_nw_association> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_path_evaluator> evaluator;
	NSObject*<OS_nw_path> previous_path;
	nw_hash_tableRef handles;
	nw_hash_tableRef connected_flow_handles;
	nw_hash_tableRef cache_entries;
	void* deactivation_timer;
	unsigned dormant : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)redactedDescription;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
@end

