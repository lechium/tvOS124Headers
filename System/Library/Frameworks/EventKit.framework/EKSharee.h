/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSPredicate, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (assign,nonatomic) unsigned long long shareeAccessLevel; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,readonly) EKCalendar * owner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)frozenClass;
+(id)shareeWithName:(id)arg1 url:(id)arg2 ;
+(id)_urlForEmailAddress:(id)arg1 andPhoneNumber:(id)arg2 ;
+(unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)arg1 ;
+(int)_calShareeStatusFromEKShareeStatus:(unsigned long long)arg1 ;
+(unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg1 ;
+(int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)arg1 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 ;
+(id)shareeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 externalID:(id)arg4 ;
+(unsigned long long)statusEnumFromString:(id)arg1 ;
+(id)statusStringFromEnum:(unsigned long long)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSPredicate *)contactPredicate;
-(unsigned long long)shareeStatus;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(unsigned long long)shareeAccessLevel;
-(void)setShareeAccessLevel:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 url:(id)arg2 ;
-(id)initWithName:(id)arg1 url:(id)arg2 externalID:(id)arg3 ;
-(int)shareeStatusRaw;
-(void)setShareeStatusRaw:(int)arg1 ;
-(int)shareeAccessLevelRaw;
-(void)setShareeAccessLevelRaw:(int)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)init;
-(NSString *)UUID;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)URL;
-(void)setUUID:(NSString *)arg1 ;
-(EKCalendar *)owner;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
@end

