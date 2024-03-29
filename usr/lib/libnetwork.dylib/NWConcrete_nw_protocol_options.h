/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_options.h>

@protocol OS_xpc_object;
@class NWConcrete_nw_protocol_definition, NSObject, NSString;

@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options> {

	NWConcrete_nw_protocol_definition* definition;
	nw_protocol* protocol_handle;
	NSObject*<OS_xpc_object> legacy_parameters;
	char* log_id_str;
	void* handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDefinition:(id)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
@end

