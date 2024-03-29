/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_authentication_credential.h>

@protocol OS_sec_identity, OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_authentication_credential : NSObject <OS_nw_authentication_credential> {

	int type;
	char* username;
	char* password;
	NSObject*<OS_sec_identity> identity;
	NSObject*<OS_xpc_object> valid_authentication_types;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
@end

