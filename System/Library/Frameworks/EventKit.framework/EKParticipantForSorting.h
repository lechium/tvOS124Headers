/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject <NSCopying> {

	BOOL _isEmail;
	BOOL _isPhone;
	EKParticipant* _participant;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}

@property (assign,nonatomic,__weak) EKParticipant * participant;              //@synthesize participant=_participant - In the implementation block
@property (nonatomic,copy) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * cachedDisplayName;                      //@synthesize cachedDisplayName=_cachedDisplayName - In the implementation block
@property (assign,nonatomic) BOOL isEmail;                                    //@synthesize isEmail=_isEmail - In the implementation block
@property (assign,nonatomic) BOOL isPhone;                                    //@synthesize isPhone=_isPhone - In the implementation block
+(id)participantForSortingWithEKParticipant:(id)arg1 ;
+(id)contactStore;
-(void)setIsEmail:(BOOL)arg1 ;
-(BOOL)isEmail;
-(void)setCachedDisplayName:(NSString *)arg1 ;
-(void)setIsPhone:(BOOL)arg1 ;
-(NSString *)cachedDisplayName;
-(BOOL)isPhone;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(EKParticipant *)participant;
-(void)setParticipant:(EKParticipant *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)displayName;
@end

