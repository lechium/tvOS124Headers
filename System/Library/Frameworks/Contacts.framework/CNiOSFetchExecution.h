/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNiOSFetchExecution : NSObject
+(id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned)arg2 matchInfos:(id*)arg3 options:(unsigned long long)arg4 addressBook:(void*)arg5 environment:(id)arg6 error:(id*)arg7 ;
+(id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 progressiveResults:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 environment:(id)arg7 ;
+(void)_extractContacts:(id*)arg1 matchInfo:(id*)arg2 fromBlockResults:(id)arg3 containsNestedResults:(BOOL)arg4 ;
@end

