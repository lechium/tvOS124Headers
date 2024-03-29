/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _IDToProperty;
	NSMutableDictionary* _propertyToID;
	NSObject*<OS_dispatch_queue> _dirtyQueue;
	BOOL _dirty;

}

@property (nonatomic,readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
+(id)enclosedClassTypes;
+(id)classTypes;
+(BOOL)supportsSecureCoding;
-(void)forceImportSecureProperties:(id)arg1 ;
-(id)allSecurePropertyIDs;
-(void)removeSecureProperty:(id)arg1 ;
-(id)securePropertyForID:(id)arg1 ;
-(id)storeSecureProperty:(id)arg1 ;
-(void)forceWriteSecurePropertyID:(id)arg1 withValue:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)dirty;
@end

