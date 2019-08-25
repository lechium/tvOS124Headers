/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) double timestamp; 
+(Class)frozenClass;
-(void)setUniqueKey:(NSString *)arg1 ;
-(NSString *)uniqueKey;
-(id)semanticIdentifier;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 ;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
-(void)setTimestampAsDate:(id)arg1 ;
-(id)timestampAsDate;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)relatedEvent;
-(NSString *)opaqueKey;
-(id)description;
-(id)copy;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
@end
