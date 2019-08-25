/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@protocol RTPersistenceContextDelegate;
@interface RTPersistenceContext : NSManagedObjectContext {

	long long _mirroringQualityOfService;
	id<RTPersistenceContextDelegate> _delegate;

}

@property (__weak) id<RTPersistenceContextDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mirroringQualityOfService;              //@synthesize mirroringQualityOfService=_mirroringQualityOfService - In the implementation block
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processError:(inout id*)arg1 ;
-(long long)mirroringQualityOfService;
-(void)setMirroringQualityOfService:(long long)arg1 ;
-(void)setDelegate:(id<RTPersistenceContextDelegate>)arg1 ;
-(id<RTPersistenceContextDelegate>)delegate;
-(BOOL)save:(id*)arg1 ;
@end

