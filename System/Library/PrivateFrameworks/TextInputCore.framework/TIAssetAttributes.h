/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TIAssetAttributes : NSObject <NSCopying> {

	NSString* _type;
	NSString* _inputModeLevel;
	NSDictionary* _region;

}

@property (nonatomic,readonly) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
@property (nonatomic,readonly) NSDictionary * region;                  //@synthesize region=_region - In the implementation block
+(BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(/*^block*/id)arg3 ;
+(BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(id)assetAttributesWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3 ;
+(BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4 ;
-(id)initWithType:(id)arg1 inputModeLevel:(id)arg2 region:(id)arg3 ;
-(BOOL)containMatchingType:(id)arg1 ;
-(BOOL)containMatchingTypeIn:(id)arg1 ;
-(BOOL)containMatchingInputModeLevel:(id)arg1 ;
-(BOOL)containMatchingInputModeLevelIn:(id)arg1 ;
-(BOOL)containMatchingRegionIn:(id)arg1 shouldLenientlyMatchRegion:(/*^block*/id)arg2 ;
-(BOOL)containMatchingAttributes:(id)arg1 ;
-(NSString *)inputModeLevel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSDictionary *)region;
@end

