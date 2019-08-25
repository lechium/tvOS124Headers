/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNDistinctUntilChangedObservable : CNObservable {

	id<CNObservable> _observable;
	id _lastObservedResult;

}
-(id)initWithObservable:(id)arg1 ;
-(BOOL)_resultIsDistinctFromLastResult:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
@end

