/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDictionary, NSArray;

@interface SAIntentGroupBatchSlotResolutionResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * base64EncodedIntent; 
@property (nonatomic,copy) NSDictionary * slotResolutionMap; 
@property (nonatomic,copy) NSArray * stepResults; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchSlotResolutionResult;
+(id)batchSlotResolutionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)base64EncodedIntent;
-(void)setBase64EncodedIntent:(NSString *)arg1 ;
-(NSDictionary *)slotResolutionMap;
-(void)setSlotResolutionMap:(NSDictionary *)arg1 ;
-(NSArray *)stepResults;
-(void)setStepResults:(NSArray *)arg1 ;
@end

