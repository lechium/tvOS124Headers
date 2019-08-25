/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDate;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
+(id)removeFromActivityStream;
+(id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStreamType:(NSString *)arg1 ;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)toDate;
-(void)setToDate:(NSDate *)arg1 ;
-(NSString *)streamType;
-(NSString *)taskType;
-(void)setTaskType:(NSString *)arg1 ;
-(NSString *)activityType;
-(NSString *)visibility;
-(void)setVisibility:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
@end
