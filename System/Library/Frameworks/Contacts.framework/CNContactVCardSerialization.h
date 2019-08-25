/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNContactVCardSerialization : NSObject
+(id)dataWithContacts:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 environment:(id)arg4 ;
+(id)contactsWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)summaryOfVCard:(id)arg1 error:(id*)arg2 ;
+(id)summaryOfLocationVCard:(id)arg1 error:(id*)arg2 ;
+(id)descriptorForRequiredKeysWithOptions:(id)arg1 ;
+(void)contactsWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)contactsWithMECARDString:(id)arg1 error:(id*)arg2 ;
+(id)contactsWithData:(id)arg1 error:(id*)arg2 ;
+(id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)descriptorForRequiredKeys;
@end

