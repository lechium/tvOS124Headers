/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_instance_stub.h>

@class NSString;

@interface NWConcrete_nw_protocol_instance_stub : NSObject <OS_nw_protocol_instance_stub> {

	nw_protocol* protocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(nw_protocol*)getProtocolStructure;
-(id)initWithProtocol:(nw_protocol*)arg1 ;
-(void)dealloc;
@end

