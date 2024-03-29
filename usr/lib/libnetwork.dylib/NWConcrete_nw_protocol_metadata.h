/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_protocol_metadata.h>

@class NWConcrete_nw_protocol_definition, NSString;

@interface NWConcrete_nw_protocol_metadata : NSObject <OS_nw_protocol_metadata> {

	NWConcrete_nw_protocol_definition* definition;
	unsigned char identifier[16];
	void* handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDefinition:(id)arg1 identifier:(unsigned char)arg2 ;
-(void)dealloc;
@end

