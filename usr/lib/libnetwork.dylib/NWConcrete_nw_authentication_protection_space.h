/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_authentication_protection_space.h>

@protocol OS_nw_endpoint;
@class NSObject, NSString;

@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space> {

	NSObject*<OS_nw_endpoint> endpoint;
	unsigned is_proxy : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

