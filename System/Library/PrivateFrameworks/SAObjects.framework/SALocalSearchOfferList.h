/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * providerId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)offerList;
+(id)offerListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setProviderId:(NSString *)arg1 ;
-(NSString *)providerId;
-(id)encodedClassName;
-(void)setOffers:(NSArray *)arg1 ;
-(NSArray *)offers;
@end
