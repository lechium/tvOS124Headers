/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) double value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rating;
+(id)ratingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setProviderId:(NSString *)arg1 ;
-(NSString *)providerId;
-(void)setMaxValue:(double)arg1 ;
-(double)maxValue;
-(id)encodedClassName;
-(long long)count;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setCount:(long long)arg1 ;
@end
