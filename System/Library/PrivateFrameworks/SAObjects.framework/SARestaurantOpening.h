/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, SAUIAppPunchOut, NSNumber, SACalendar, NSString;

@interface SARestaurantOpening : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * bookingId; 
@property (nonatomic,retain) SAUIAppPunchOut * makeReservationPunchOut; 
@property (nonatomic,copy) NSNumber * partySize; 
@property (nonatomic,retain) SACalendar * timeSlot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)opening;
+(id)openingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)bookingId;
-(void)setBookingId:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)makeReservationPunchOut;
-(void)setMakeReservationPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)partySize;
-(void)setPartySize:(NSNumber *)arg1 ;
-(SACalendar *)timeSlot;
-(void)setTimeSlot:(SACalendar *)arg1 ;
@end

