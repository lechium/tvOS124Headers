/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/DADataElement.h>

@class NSString, NSNumber, NSArray, NSDate, ASToDoRecurrence, NSTimeZone;

@interface ASToDo : ASChangedCollectionLeaf <DADataElement> {

	void* _calTask;
	NSString* _body;
	NSNumber* _bodyTruncated;
	NSArray* _categories;
	NSNumber* _complete;
	NSDate* _dateCompleted;
	NSDate* _dueDate;
	NSDate* _utcDueDate;
	NSNumber* _importance;
	NSNumber* _reminderIsSet;
	NSDate* _reminderDateTime;
	NSNumber* _sensitivity;
	NSDate* _startTime;
	NSDate* _utcStartTime;
	NSString* _subject;
	ASToDoRecurrence* _recurrence;

}

@property (assign,nonatomic) void* calTask;                                              //@synthesize calTask=_calTask - In the implementation block
@property (nonatomic,retain) NSString * body;                                            //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSNumber * bodyTruncated;                                   //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSNumber * complete;                                        //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSDate * dateCompleted;                                     //@synthesize dateCompleted=_dateCompleted - In the implementation block
@property (nonatomic,retain) NSDate * dueDate;                                           //@synthesize dueDate=_dueDate - In the implementation block
@property (setter=setUTCDueDate:,nonatomic,retain) NSDate * utcDueDate;                  //@synthesize utcDueDate=_utcDueDate - In the implementation block
@property (nonatomic,retain) NSNumber * importance;                                      //@synthesize importance=_importance - In the implementation block
@property (nonatomic,retain) NSNumber * reminderIsSet;                                   //@synthesize reminderIsSet=_reminderIsSet - In the implementation block
@property (nonatomic,retain) NSDate * reminderDateTime;                                  //@synthesize reminderDateTime=_reminderDateTime - In the implementation block
@property (nonatomic,retain) NSNumber * sensitivity;                                     //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                         //@synthesize startTime=_startTime - In the implementation block
@property (setter=setUTCStartTime:,nonatomic,retain) NSDate * utcStartTime;              //@synthesize utcStartTime=_utcStartTime - In the implementation block
@property (nonatomic,retain) NSString * subject;                                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) ASToDoRecurrence * recurrence;                              //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,readonly) NSTimeZone * dueDateTimeZone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(id)toDoWithCalTask:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(void)setCategories:(NSArray *)arg1 ;
-(ASToDoRecurrence *)recurrence;
-(NSDate *)dueDate;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)setRecurrence:(ASToDoRecurrence *)arg1 ;
-(NSTimeZone *)dueDateTimeZone;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setReminderDateTime:(NSDate *)arg1 ;
-(void)setReminderIsSet:(NSNumber *)arg1 ;
-(void)setUTCStartTime:(id)arg1 ;
-(void)setUTCDueDate:(id)arg1 ;
-(void)setDateCompleted:(NSDate *)arg1 ;
-(void)setSensitivity:(NSNumber *)arg1 ;
-(void)setImportance:(NSNumber *)arg1 ;
-(NSDate *)dateCompleted;
-(NSDate *)utcDueDate;
-(NSDate *)utcStartTime;
-(void)setCalTask:(void*)arg1 ;
-(void)_loadAttributesFromCalTask:(void*)arg1 forAccount:(id)arg2 ;
-(id)initWithCalTask:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(id)_bestGuessTimeZoneWithLocalDate:(id)arg1 utcDate:(id)arg2 ;
-(NSNumber *)sensitivity;
-(void*)calTask;
-(NSNumber *)importance;
-(NSDate *)reminderDateTime;
-(NSNumber *)reminderIsSet;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)loadCalRecordForAccount:(id)arg1 ;
-(BOOL)saveServerIDToCalendar;
-(BOOL)deleteFromCalendar;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(long long)dataclass;
-(void)loadClientIDs;
-(NSNumber *)bodyTruncated;
-(void)setBodyTruncated:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSNumber *)complete;
-(void)setComplete:(NSNumber *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSArray *)categories;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
@end

