/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSSet, NSDictionary, NSString;

@interface HFServiceStateCharacteristicMatchResult : NSObject <NAIdentifiable> {

	NSSet* _allCharacteristics;
	NSDictionary* _servicesByUUID;
	NSSet* _services;
	NSDictionary* _characteristicsByServiceUUID;

}

@property (nonatomic,copy,readonly) NSSet * services;                                         //@synthesize services=_services - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * servicesByUUID;                            //@synthesize servicesByUUID=_servicesByUUID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allCharacteristics;                               //@synthesize allCharacteristics=_allCharacteristics - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * characteristicsByServiceUUID;              //@synthesize characteristicsByServiceUUID=_characteristicsByServiceUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)matchResultByMergingResults:(id)arg1 ;
-(NSSet *)allCharacteristics;
-(id)initWithServices:(id)arg1 characteristicsByServiceUUID:(id)arg2 ;
-(NSDictionary *)characteristicsByServiceUUID;
-(NSDictionary *)servicesByUUID;
-(id)initWithServices:(id)arg1 characteristics:(id)arg2 ;
-(NSSet *)services;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

