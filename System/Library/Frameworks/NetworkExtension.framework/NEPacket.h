/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NEFlowMetaData;

@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _protocolFamily;
	NSData* _data;
	NEFlowMetaData* _metadata;

}

@property (copy,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (readonly) unsigned char protocolFamily;              //@synthesize protocolFamily=_protocolFamily - In the implementation block
@property (readonly) NEFlowMetaData * metadata;                 //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(NEFlowMetaData *)metadata;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 metadata:(id)arg3 ;
-(unsigned char)protocolFamily;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 signingIdentifier:(id)arg3 processUUID:(id)arg4 ;
-(id)initWithData:(id)arg1 protocolFamily:(unsigned char)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
@end

