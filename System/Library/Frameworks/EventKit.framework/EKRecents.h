/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@interface EKRecents : NSObject
+(Class)crRecentContactsLibraryClass;
+(NSObject*)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3 ;
+(id)crRecentsDomainCalendarString;
+(id)crAddressKindEmailString;
+(void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3 ;
+(id)crAddressKindPhoneNumberString;
+(BOOL)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 ;
@end

