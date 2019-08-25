/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_xpc_object;
@class NSObject;

@interface NWConcrete_nw_hostname_endpoint : NWConcrete_nw_endpoint {

	char* hostname;
	unsigned short port;
	NSObject*<OS_xpc_object> txt_record;

}
-(id)copyDictionary;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)initWithHostname:(const char*)arg1 port:(unsigned short)arg2 ;
-(void)dealloc;
-(unsigned)type;
-(unsigned short)port;
@end
