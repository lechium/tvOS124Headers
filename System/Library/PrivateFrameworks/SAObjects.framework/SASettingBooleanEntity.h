/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) BOOL value; 
+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)booleanEntityWithValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)initWithValue:(BOOL)arg1 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(NSNumber *)previousValue;
-(void)setPreviousValue:(NSNumber *)arg1 ;
@end

