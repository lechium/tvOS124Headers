/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Engram/Engram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENStableGroupID, NSData;

@interface ENGroupID : NSObject <NSSecureCoding, NSCopying> {

	int _generation;
	ENStableGroupID* _stableGroupID;

}

@property (nonatomic,readonly) ENStableGroupID * stableGroupID;              //@synthesize stableGroupID=_stableGroupID - In the implementation block
@property (nonatomic,readonly) int generation;                               //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithStableGroupID:(id)arg1 generation:(int)arg2 ;
-(BOOL)compare:(id)arg1 withResult:(long long*)arg2 error:(id*)arg3 ;
-(ENStableGroupID *)stableGroupID;
-(int)generation;
-(NSData *)dataRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

