/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy {

	NSArray* _events;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
-(id)allEvents;
-(id)initWithEvents:(id)arg1 ;
@end

