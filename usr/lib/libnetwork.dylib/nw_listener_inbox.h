/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol nw_listener_inbox_delegate, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters;
@class NSObject;

@interface nw_listener_inbox : NSObject {

	NSObject*<nw_listener_inbox_delegate> _delegate;
	NSObject*<OS_nw_endpoint> _local_endpoint;
	NSObject*<OS_nw_interface> _interface;
	NSObject*<OS_nw_parameters> _parameters;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> local_endpoint;              //@synthesize local_endpoint=_local_endpoint - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_interface> interface;                  //@synthesize interface=_interface - In the implementation block
-(NSObject*<OS_nw_endpoint>)local_endpoint;
-(BOOL)cancel;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_nw_interface>)interface;
@end

