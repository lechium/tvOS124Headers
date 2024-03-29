/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NRPBMutableDevice, NSMutableDictionary, NSUUID;

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NRPBMutableDevice* _protobuf;
	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSUUID * pairingID; 
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isArchived; 
@property (nonatomic,readonly) BOOL migratable; 
@property (nonatomic,retain) NSMutableDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NRPBMutableDevice * protobuf;                  //@synthesize protobuf=_protobuf - In the implementation block
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)diffsToActivate:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToPair:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2 ;
+(id)diffsToClearStatusCodeAndCompatibilityState;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)propertyForName:(id)arg1 ;
-(void)setProtobuf:(NRPBMutableDevice *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)migratable;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(id)_createIndex:(id)arg1 ;
-(void)removePropertyForName:(id)arg1 ;
-(id)allPropertyNames;
-(NRPBMutableDevice *)protobuf;
-(BOOL)isArchived;
-(BOOL)supportsCapability:(id)arg1 ;
-(NSUUID *)pairingID;
-(BOOL)isPaired;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isActive;
-(void)invalidate;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)properties;
@end

