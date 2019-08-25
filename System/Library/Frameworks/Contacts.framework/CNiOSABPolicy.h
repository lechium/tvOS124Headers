/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPolicy.h>

@interface CNiOSABPolicy : CNPolicy {

	void* _iOSABPolicy;
	void* _fakePerson;
	BOOL _abSourceIsContentReadonly;

}
-(BOOL)isReadonly;
-(id)initWithAddressBookPolicy:(void*)arg1 readOnly:(BOOL)arg2 ;
-(id)_orderedLabels:(id)arg1 withOrder:(id)arg2 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(void)dealloc;
@end

