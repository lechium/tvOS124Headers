/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CNObservableEvent : NSObject

@property (nonatomic,readonly) unsigned long long eventType; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSError * error; 
+(id)eventWithResult:(id)arg1 ;
+(id)completionEvent;
+(id)failureEventWithError:(id)arg1 ;
-(unsigned long long)eventType;
-(BOOL)hasValue;
-(void)dematerializeWithObserver:(id)arg1 ;
-(id)value;
-(NSError *)error;
@end

