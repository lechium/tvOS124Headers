/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	NSString* _formattedString;
	NSData* _data;

}

@property (readonly) unsigned long long length; 
@property (copy,readonly) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSString * formattedString;                             //@synthesize formattedString=_formattedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(id)initWithAddressData:(id)arg1 ;
-(NSString *)propertyDescription;
-(NSString *)formattedString;
-(id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
@end

