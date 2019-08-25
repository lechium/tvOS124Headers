/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject

@property (nonatomic,copy) NSArray * additionalEnabledTransitMarkets; 
@property (nonatomic,copy) NSData * clientMetadata; 
@property (nonatomic,copy) NSString * environment; 
+(id)geoServicesData;
+(id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)clientMetadata;
-(id)groupIdentifier;
-(void)setClientMetadata:(NSData *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)additionalEnabledTransitMarkets;
-(void)setAdditionalEnabledTransitMarkets:(NSArray *)arg1 ;
-(NSString *)environment;
@end
