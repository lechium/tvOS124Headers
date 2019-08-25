/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNTask : NSObject {

	BOOL _cancelled;
	NSString* _name;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(id)taskWithBlock:(/*^block*/id)arg1 ;
+(id)taskWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)taskWithName:(id)arg1 subtasks:(id)arg2 ;
+(id)taskWithResult:(id)arg1 ;
+(id)taskWithName:(id)arg1 result:(id)arg2 ;
+(id)taskWithError:(id)arg1 ;
+(id)taskWithName:(id)arg1 error:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)run:(id*)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(id)initWithName:(id)arg1 ;
-(id)run;
@end
