/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) int status; 
@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantType; 
@property (assign,nonatomic) int pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)defaultPropertiesToLoad;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(id)relations;
-(unsigned)flags;
-(NSDate *)lastModified;
-(int)pendingStatus;
-(void)setPendingStatus:(int)arg1 ;
-(void)setLastModified:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
-(void)setFlags:(unsigned)arg1 ;
-(long long)participantRole;
-(long long)participantType;
-(void)setParticipantRole:(long long)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(int)entityType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
@end

