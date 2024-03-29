/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_browse_descriptor.h>

@protocol OS_dispatch_data, OS_nw_interface;
@class NSObject, NSString;

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {

	int type;
	char* bonjour_type;
	char* bonjour_domain;
	NSObject*<OS_dispatch_data> custom_data;
	/*^block*/id browse_block;
	NSObject*<OS_nw_interface> interface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

