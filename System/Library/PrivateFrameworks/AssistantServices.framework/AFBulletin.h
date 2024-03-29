/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletin, NSString, NSDate, NSArray;

@interface AFBulletin : NSObject <NSSecureCoding> {

	BOOL _read;
	BOOL _allDay;
	BOOL _previewRestricted;
	BBBulletin* _bbBulletin;
	NSString* _bulletinID;
	NSString* _recordID;
	NSDate* _date;
	NSDate* _endDate;
	NSString* _message;
	NSString* _modalAlertContentMessage;
	NSDate* _recencyDate;
	NSString* _sectionID;
	long long _sectionSubtype;
	NSString* _subtitle;
	NSString* _timeZone;
	NSString* _title;
	NSArray* _intentIDs;
	NSString* _publisherBulletinID;
	NSString* _displayName;

}

@property (assign,getter=isRead,nonatomic) BOOL read;                                 //@synthesize read=_read - In the implementation block
@property (nonatomic,readonly) BBBulletin * bbBulletin;                               //@synthesize bbBulletin=_bbBulletin - In the implementation block
@property (nonatomic,copy,readonly) NSString * bulletinID;                            //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * modalAlertContentMessage;              //@synthesize modalAlertContentMessage=_modalAlertContentMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * recencyDate;                             //@synthesize recencyDate=_recencyDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) long long sectionSubtype;                              //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentIDs;                              //@synthesize intentIDs=_intentIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherBulletinID;                   //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) BOOL previewRestricted;                                //@synthesize previewRestricted=_previewRestricted - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)previewRestricted;
-(NSDate *)recencyDate;
-(NSString *)bulletinID;
-(long long)sectionSubtype;
-(NSString *)publisherBulletinID;
-(NSArray *)intentIDs;
-(BBBulletin *)bbBulletin;
-(NSString *)modalAlertContentMessage;
-(BOOL)isRead;
-(NSString *)recordID;
-(void)setBulletin:(id)arg1 ;
-(BOOL)isAllDay;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(NSString *)subtitle;
-(NSString *)sectionID;
-(NSDate *)date;
-(NSString *)timeZone;
-(NSString *)displayName;
@end

