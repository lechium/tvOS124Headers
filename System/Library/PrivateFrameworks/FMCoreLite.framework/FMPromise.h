/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMPromise.h>

@class FMFuture, NSString;

@interface FMPromise : NSObject <FMPromise> {

	FMFuture* _future;

}

@property (readonly) FMFuture * future;                             //@synthesize future=_future - In the implementation block
@property (nonatomic,copy) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)finishWithResult:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(BOOL)finishWithError:(id)arg1 ;
-(FMFuture *)future;
-(id)initWithFuture:(id)arg1 ;
-(BOOL)finishWithNoResult;
-(id)init;
-(void)setDescriptor:(NSString *)arg1 ;
-(NSString *)descriptor;
@end

