/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask {

	NSArray* _tasks;

}

@property (nonatomic,readonly) NSArray * tasks;              //@synthesize tasks=_tasks - In the implementation block
-(id)initWithName:(id)arg1 tasks:(id)arg2 ;
-(id)runSubtask:(id)arg1 error:(id*)arg2 ;
-(void)cancelSubtasks;
-(id)run:(id*)arg1 ;
-(NSArray *)tasks;
-(id)description;
-(BOOL)cancel;
@end

