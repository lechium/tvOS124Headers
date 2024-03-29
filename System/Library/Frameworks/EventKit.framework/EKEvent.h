/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarItem.h>
#import <libobjc.A.dylib/EKJunkInvitationProtocol_Private.h>

@class NSString, EKEventStore, EKStructuredLocation, NSDate, EKReadWriteLock, EKCalendarDate, NSNumber, NSArray, EKSuggestedEventInfo, NSURL, EKParticipant;

@interface EKEvent : EKCalendarItem <EKJunkInvitationProtocol_Private> {

	EKStructuredLocation* _cachedLocationPrediction;
	NSDate* _cachedLocationPredictionExpirationDate;
	BOOL _locationPredictionFrozen;
	BOOL _locationPredictionAllowed;
	EKReadWriteLock* _locationPredictionLock;
	BOOL _occurrenceIsAllDay;
	BOOL _requiresDetachDueToSnoozedAlarm;
	int _clearModifiedFlags;
	NSString* _birthdayPersonUniqueID;
	EKCalendarDate* _occurrenceStartDate;
	EKCalendarDate* _occurrenceEndDate;
	EKCalendarDate* _originalOccurrenceStartDate;
	EKCalendarDate* _originalOccurrenceEndDate;
	NSNumber* _originalOccurrenceIsAllDay;

}

@property (nonatomic,retain) NSArray * locations; 
@property (nonatomic,readonly) NSArray * locationsWithoutPrediction; 
@property (nonatomic,copy) EKCalendarDate * occurrenceStartDate;                                       //@synthesize occurrenceStartDate=_occurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * occurrenceEndDate;                                         //@synthesize occurrenceEndDate=_occurrenceEndDate - In the implementation block
@property (assign,nonatomic) BOOL occurrenceIsAllDay;                                                  //@synthesize occurrenceIsAllDay=_occurrenceIsAllDay - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceStartDate;                               //@synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceEndDate;                                 //@synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate - In the implementation block
@property (nonatomic,copy) NSNumber * originalOccurrenceIsAllDay;                                      //@synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay - In the implementation block
@property (assign,nonatomic) BOOL requiresDetachDueToSnoozedAlarm;                                     //@synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm - In the implementation block
@property (assign,nonatomic) int clearModifiedFlags;                                                   //@synthesize clearModifiedFlags=_clearModifiedFlags - In the implementation block
@property (assign,nonatomic) long long privacyLevel; 
@property (nonatomic,readonly) BOOL locationIsAConferenceRoom; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double travelTime; 
@property (nonatomic,readonly) NSDate * startDateIncludingTravel; 
@property (nonatomic,readonly) BOOL isStartDateDirty; 
@property (nonatomic,readonly) BOOL isEndDateDirty; 
@property (nonatomic,readonly) BOOL allowsTravelTimeModifications; 
@property (nonatomic,retain) EKStructuredLocation * travelStartLocation; 
@property (nonatomic,readonly) BOOL automaticLocationGeocodingAllowed; 
@property (assign,nonatomic) long long travelAdvisoryBehavior; 
@property (nonatomic,readonly) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled; 
@property (nonatomic,readonly) BOOL eligibleForTravelAdvisories; 
@property (nonatomic,retain) EKSuggestedEventInfo * suggestionInfo; 
@property (nonatomic,readonly) NSString * locationWithoutPrediction; 
@property (nonatomic,readonly) EKStructuredLocation * preferredLocationWithoutPrediction; 
@property (nonatomic,retain) NSDate * proposedStartDate; 
@property (nonatomic,readonly) BOOL allowsProposedTimeModifications; 
@property (assign,nonatomic) BOOL isPhantom; 
@property (assign,nonatomic) unsigned long long cachedJunkStatus; 
@property (nonatomic,readonly) BOOL isSignificantlyDetached; 
@property (nonatomic,readonly) BOOL isSignificantlyDetachedIgnoringParticipation; 
@property (nonatomic,readonly) NSDate * originalStartDate; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) NSURL * conferenceURL; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (assign,nonatomic) long long participationStatus; 
@property (nonatomic,readonly) long long pendingParticipationStatus; 
@property (nonatomic,retain) NSDate * participationStatusModifiedDate; 
@property (nonatomic,readonly) BOOL allowsParticipationStatusModifications; 
@property (nonatomic,readonly) BOOL allowsAvailabilityModifications; 
@property (nonatomic,readonly) BOOL allowsPrivacyLevelModifications; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (assign,nonatomic) BOOL dateChanged; 
@property (assign,nonatomic) BOOL timeChanged; 
@property (assign,nonatomic) BOOL titleChanged; 
@property (assign,nonatomic) BOOL locationChanged; 
@property (assign,nonatomic) BOOL attendeeComment; 
@property (assign,nonatomic) BOOL attendeeStatus; 
@property (assign,nonatomic) BOOL attendeeProposedStartDate; 
@property (assign,nonatomic) BOOL attendeeDeclinedStartDate; 
@property (assign,nonatomic) BOOL attendeeReplyChanged; 
@property (assign,nonatomic) int externalTrackingStatus; 
@property (nonatomic,copy,readonly) NSDate * initialStartDate; 
@property (nonatomic,copy,readonly) NSDate * initialEndDate; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) BOOL isStatusDirty; 
@property (nonatomic,readonly) BOOL isAllDayDirty; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDateIncludingTravelTime; 
@property (nonatomic,readonly) double durationIncludingTravel; 
@property (nonatomic,readonly) long long travelRoutingMode; 
@property (nonatomic,readonly) BOOL canBeRespondedTo; 
@property (nonatomic,readonly) BOOL canDetachSingleOccurrence; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDate; 
@property (nonatomic,readonly) EKCalendarDate * endCalendarDate; 
@property (assign,nonatomic) long long locationPredictionState; 
@property (nonatomic,readonly) BOOL hasPredictedLocation; 
@property (assign,nonatomic) BOOL firedTTL; 
@property (nonatomic,readonly) BOOL responseMustApplyToAll; 
@property (assign,nonatomic) unsigned long long junkStatus; 
@property (nonatomic,readonly) SCD_Struct_EK2 startDateGr; 
@property (nonatomic,readonly) SCD_Struct_EK2 endDateGr; 
@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) long long availability; 
@property (nonatomic,readonly) BOOL isDetached; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (nonatomic,readonly) NSString * birthdayContactIdentifier; 
@property (nonatomic,readonly) long long birthdayPersonID; 
@property (nonatomic,readonly) NSString * birthdayPersonUniqueID;                                      //@synthesize birthdayPersonUniqueID=_birthdayPersonUniqueID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sendersEmail; 
@property (nonatomic,readonly) NSString * sendersPhoneNumber; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
+(Class)frozenClass;
+(id)eventWithEventStore:(id)arg1 ;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)_locationStringForLocations:(id)arg1 ;
+(long long)_eventAvailabilityForParticipantStatus:(long long)arg1 supportedEventAvailabilities:(unsigned long long)arg2 isAllDayEvent:(BOOL)arg3 ;
+(id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3 ;
+(id)knownKeysToSkipForFutureChanges;
+(id)knownKeysToUseForFutureChanges;
-(BOOL)isMaster;
-(void)setAvailability:(long long)arg1 ;
-(long long)availability;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(NSArray *)locations;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(BOOL)_isAllDay;
-(id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)externalURI;
-(BOOL)couldBeJunk;
-(BOOL)dateChanged;
-(void)setDateChanged:(BOOL)arg1 ;
-(BOOL)timeChanged;
-(void)setTimeChanged:(BOOL)arg1 ;
-(BOOL)locationChanged;
-(void)setLocationChanged:(BOOL)arg1 ;
-(BOOL)titleChanged;
-(void)setTitleChanged:(BOOL)arg1 ;
-(id)_dateForNextOccurrence;
-(void)rebase;
-(void)markAsCommitted;
-(void)markAsSaved;
-(id)committedValueForKey:(id)arg1 ;
-(NSDate *)initialStartDate;
-(NSDate *)initialEndDate;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3 ;
-(id)_generateNewUniqueID;
-(BOOL)requiresDetach;
-(BOOL)allowsSpansOtherThanThisEvent;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)allowsAlarmModifications;
-(BOOL)allowsAttendeesModifications;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)startDateForRecurrence;
-(void)_willCommit;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(unsigned long long)junkStatus;
-(unsigned long long)cachedJunkStatus;
-(void)clearDetectedConferenceURL;
-(id)conferenceURLDetected;
-(NSURL *)conferenceURL;
-(id)_detectConferenceURL;
-(id)_prioritizedConferencesSources;
-(BOOL)_hasChangesForConferenceURLDetection;
-(void)_updateConferenceURL;
-(BOOL)_canWriteConferenceURL;
-(void)setConferenceURL:(NSURL *)arg1 ;
-(void)setIsJunk:(BOOL)arg1 shouldSave:(BOOL)arg2 ;
-(void)setCachedJunkStatus:(unsigned long long)arg1 ;
-(BOOL)_couldBeJunkCommon;
-(void)setNotesCommon:(id)arg1 ;
-(void)setURLCommon:(id)arg1 ;
-(id)conferenceURLForDisplay;
-(void)updateConferenceURLIfNeeded;
-(BOOL)supportsJunkReporting;
-(NSString *)sendersEmail;
-(NSString *)sendersPhoneNumber;
-(BOOL)isStartDateDirty;
-(BOOL)isEndDateDirty;
-(NSDate *)originalStartDate;
-(BOOL)isDetached;
-(NSDate *)proposedStartDate;
-(void)setProposedStartDate:(NSDate *)arg1 ;
-(BOOL)attendeeReplyChanged;
-(NSURL *)externalURL;
-(NSDate *)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(void)setParticipationStatus:(long long)arg1 ;
-(NSDate *)occurrenceDate;
-(id)startDateRaw;
-(void)setStartDateRaw:(id)arg1 ;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(void)setOriginalStartDate:(NSDate *)arg1 ;
-(long long)travelAdvisoryBehavior;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(void)setLocationPredictionState:(long long)arg1 ;
-(BOOL)canForward;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(int)externalTrackingStatus;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(void)setSuggestionInfo:(EKSuggestedEventInfo *)arg1 ;
-(void)setFiredTTL:(BOOL)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(id)_effectiveTimeZone;
-(id)endDateRaw;
-(void)setOccurrenceIsAllDay:(BOOL)arg1 ;
-(BOOL)occurrenceIsAllDay;
-(void)setOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(void)setOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)originalOccurrenceStartDate;
-(EKCalendarDate *)occurrenceStartDate;
-(EKCalendarDate *)originalOccurrenceEndDate;
-(void)_clearLocationPredictionCacheIfNotFrozen;
-(long long)birthdayPersonID;
-(EKCalendarDate *)startCalendarDate;
-(void)setOriginalOccurrenceIsAllDay:(NSNumber *)arg1 ;
-(NSDate *)startDateIncludingTravel;
-(void)_setStartDate:(id)arg1 andClearProposedTimes:(BOOL)arg2 ;
-(void)setOriginalOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)occurrenceEndDate;
-(void)setOriginalOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(void)setEndDateRaw:(id)arg1 ;
-(BOOL)_isInitialOccurrenceDate:(id)arg1 ;
-(SCD_Struct_EK2)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2 ;
-(SCD_Struct_EK2)startDateGr;
-(SCD_Struct_EK2)endDateGr;
-(BOOL)allowsParticipationStatusModifications;
-(BOOL)allowsAvailabilityModifications;
-(id)privacyDescription;
-(BOOL)allowsPrivacyLevelModifications;
-(BOOL)_invitationChangedPropertyForFlag:(unsigned)arg1 ;
-(void)_setInvitationChangedProperty:(BOOL)arg1 forFlag:(unsigned)arg2 ;
-(BOOL)serverSupportedProposeNewTime;
-(void)setPredictedLocationFrozen:(BOOL)arg1 ;
-(id)_updatePredictedLocationCacheIfNeeded;
-(BOOL)_needsPredictedLocationCacheUpdateHoldingLock;
-(id)_updatePredictedLocationCacheIfNeededHoldingLock;
-(void)_clearLocationPredictionCacheIfNotFrozenHoldingLock;
-(BOOL)_validateDurationConstrainedToRecurrenceInterval;
-(BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(long long)arg1 ;
-(BOOL)isAllDayDirty;
-(BOOL)eligibleForTravelAdvisories;
-(BOOL)hasValidEventAction;
-(BOOL)isInvitation;
-(BOOL)_hasExternalIDOrDeliverySource;
-(long long)pendingParticipationStatus;
-(id)_travelTimeInternalDescription;
-(int)clearModifiedFlags;
-(void)setClearModifiedFlags:(int)arg1 ;
-(id)_refreshDateForKey:(id)arg1 ;
-(void)_sendModifiedNote;
-(void)setRequiresDetachDueToSnoozedAlarm:(BOOL)arg1 ;
-(BOOL)validateWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_isParticipationStatusDirty;
-(BOOL)validateRecurrenceRule:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateDatesAndRecurrencesGivenSpan:(long long)arg1 error:(id*)arg2 ;
-(void)_adjustForNewCalendarBeforeCommit;
-(id)committedCopy;
-(BOOL)responseMustApplyToAll;
-(BOOL)requiresDetachDueToSnoozedAlarm;
-(void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3 ;
-(BOOL)_isSimpleRepeatingEvent;
-(BOOL)conformsToRecurrenceRules:(id)arg1 ;
-(BOOL)_isSignificantlyDetachedComparedToMaster:(id)arg1 shouldIgnorePartStat:(BOOL)arg2 ;
-(void)_propagateChangesToDetachedEvents:(id)arg1 significantlyDetachedEvents:(id)arg2 startDateOffset:(id)arg3 duration:(id)arg4 calendar:(id)arg5 ;
-(void)_clearExceptionDatesAndUpdateDetachedOriginalDates;
-(void)_filterExceptionDates;
-(void)_applyTimeChangesToMaster;
-(void)_updateModifiedPropertiesForThisEventAndAllDetachments;
-(void)_updateModifiedProperties;
-(BOOL)isPhantom;
-(id)_updateMasterDate:(id)arg1 forChangeToOccurrenceDate:(id)arg2 fromOriginalOccurrenceDate:(id)arg3 ;
-(void)_addOrganizerToRecentsIfNeeded;
-(void)_addNewAttendeesToRecentsIfNeeded;
-(BOOL)revert;
-(NSNumber *)originalOccurrenceIsAllDay;
-(BOOL)_checkStartDateConstraintAgainstDate:(SCD_Struct_EK2)arg1 timeZone:(id)arg2 error:(id*)arg3 ;
-(BOOL)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2 ;
-(void)_deleteFromOccurrenceDateOnward:(id)arg1 ;
-(void)_deleteThisOccurrence;
-(id)_committedStartDate;
-(void)_updateSelfFromDetachedEventIfNeededForDelete;
-(void)_cancelDetachedEventsWithSpan:(long long)arg1 ;
-(BOOL)_eventIsTheOnlyRemainingOccurrence;
-(BOOL)_noRemainingEarlierOccurrences;
-(BOOL)_shouldCancelInsteadOfDeleteWithSpan:(long long)arg1 ;
-(BOOL)_cancelWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_shouldDeclineInsteadOfDelete;
-(BOOL)_deleteWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)updateEventToEvent:(id)arg1 commit:(BOOL)arg2 ;
-(id)potentialConflictOccurrenceDatesInTimePeriod:(double*)arg1 ;
-(BOOL)_fetchedEventIsConflict:(id)arg1 forStartDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)isTentative;
-(void)_clearAttendeeChangedFlags;
-(void)setAttendeeComment:(BOOL)arg1 ;
-(void)setAttendeeStatus:(BOOL)arg1 ;
-(void)setAttendeeProposedStartDate:(BOOL)arg1 ;
-(void)setAttendeeDeclinedStartDate:(BOOL)arg1 ;
-(BOOL)isStatusDirty;
-(void)setIsPhantom:(BOOL)arg1 ;
-(EKCalendarDate *)startCalendarDateIncludingTravelTime;
-(void)overrideStartDate:(id)arg1 ;
-(double)durationIncludingTravel;
-(EKCalendarDate *)endCalendarDate;
-(SCD_Struct_EK2)startDatePinnedForAllDay;
-(SCD_Struct_EK2)endDatePinnedForAllDay;
-(void)markEventAsAttendeeForward;
-(long long)_parentParticipationStatus;
-(NSString *)birthdayContactIdentifier;
-(void)clearInvitationStatus;
-(BOOL)isProposedTimeEvent;
-(long long)travelRoutingMode;
-(BOOL)allowsTravelTimeModifications;
-(BOOL)locationIsAConferenceRoom;
-(BOOL)attendeeComment;
-(BOOL)attendeeStatus;
-(BOOL)attendeeProposedStartDate;
-(BOOL)attendeeDeclinedStartDate;
-(BOOL)allowsProposedTimeModifications;
-(void)confirmPredictedLocation:(id)arg1 ;
-(void)rejectPredictedLocation;
-(BOOL)hasPredictedLocation;
-(void)setLocationPredictionAllowed:(BOOL)arg1 ;
-(long long)compareStartDateIncludingTravelWithEvent:(id)arg1 ;
-(BOOL)canDetachSingleOccurrence;
-(BOOL)changingAllDayPropertyIsAllowed;
-(BOOL)automaticLocationGeocodingAllowed;
-(BOOL)travelAdvisoryBehaviorIsEffectivelyEnabled;
-(BOOL)hasSelfAttendee;
-(BOOL)canBeRespondedTo;
-(BOOL)commitWithSpan:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isSignificantlyDetached;
-(BOOL)isSignificantlyDetachedIgnoringParticipation;
-(BOOL)hasAttendeeProposedTimes;
-(BOOL)removeWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)privacyLevelString;
-(BOOL)updateEventToEvent:(id)arg1 ;
-(id)scanForConflicts;
-(BOOL)updateWithGeocodedMapItemAndSaveWithCommit:(id)arg1 eventStore:(id)arg2 error:(id*)arg3 ;
-(void)dismissAcceptedProposeNewTimeNotification;
-(NSString *)birthdayPersonUniqueID;
-(void)rollback;
-(BOOL)validate:(id*)arg1 ;
-(NSURL *)launchURL;
-(NSString *)eventIdentifier;
-(BOOL)isAllDay;
-(BOOL)refresh;
-(void)setNotes:(id)arg1 ;
-(EKStructuredLocation *)structuredLocation;
-(long long)locationPredictionState;
-(EKStructuredLocation *)preferredLocationWithoutPrediction;
-(BOOL)firedTTL;
-(NSString *)locationWithoutPrediction;
-(NSArray *)locationsWithoutPrediction;
-(long long)participationStatus;
-(EKSuggestedEventInfo *)suggestionInfo;
-(long long)compareStartDateWithEvent:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)actions;
-(void)reset;
-(double)duration;
-(BOOL)_reset;
-(BOOL)isEditable;
-(void)setURL:(id)arg1 ;
-(long long)status;
-(void)setTimeZone:(id)arg1 ;
-(id)uniqueId;
-(BOOL)isFloating;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setStatus:(long long)arg1 ;
@end

