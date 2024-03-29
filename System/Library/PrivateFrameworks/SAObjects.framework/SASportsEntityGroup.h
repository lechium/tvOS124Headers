/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSString * groupType; 
+(id)entityGroup;
+(id)entityGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)entities;
-(NSString *)groupType;
-(void)setGroupType:(NSString *)arg1 ;
@end

