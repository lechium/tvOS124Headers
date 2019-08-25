/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RemoteManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RMSerializableManagedObject.h>

@class NSString;

@interface RMUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, RMSerializableManagedObject> {

	NSString* _address;
	NSString* _type;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)address;
-(id)initWithDSID:(id)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithAddress:(id)arg1 type:(id)arg2 ;
-(id)initWithAddress:(id)arg1 type:(id)arg2 state:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setState:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
@end

