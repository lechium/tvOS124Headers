/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _extension;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * extension;              //@synthesize extension=_extension - In the implementation block
+(id)withName:(id)arg1 extension:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithName:(id)arg1 extension:(id)arg2 ;
-(BOOL)isEqualToBundleResourceDescriptor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)extension;
@end

