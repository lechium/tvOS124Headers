/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
+(id)defaultPropertiesToLoad;
+(id)eventWithRandomUUID;
+(id)relations;
-(void)setAvailability:(long long)arg1 ;
-(long long)availability;
-(id)endDate;
-(void)setTravelTime:(id)arg1 ;
-(id)travelTime;
-(void)setEndDate:(id)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(id)organizer;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(unsigned long long)junkStatus;
-(id)conferenceURL;
-(void)setConferenceURL:(id)arg1 ;
-(id)originalStartDate;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(void)setOriginalStartDate:(id)arg1 ;
-(long long)travelAdvisoryBehavior;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(void)setLocationPredictionState:(long long)arg1 ;
-(id)birthdayID;
-(void)setBirthdayID:(id)arg1 ;
-(BOOL)canForward;
-(void)setCanForward:(BOOL)arg1 ;
-(BOOL)disallowProposeNewTime;
-(void)setDisallowProposeNewTime:(BOOL)arg1 ;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(id)suggestedEventInfo;
-(void)setSuggestedEventInfo:(id)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(unsigned)invitationChangedProperties;
-(void)setInvitationChangedProperties:(unsigned)arg1 ;
-(int)externalTrackingStatus;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(void)setSuggestionInfo:(id)arg1 ;
-(void)setFiredTTL:(BOOL)arg1 ;
-(int)entityType;
-(long long)locationPredictionState;
-(BOOL)firedTTL;
-(id)suggestionInfo;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actions;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
@end

