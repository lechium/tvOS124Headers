/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;              //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (getter=isSuspended) BOOL suspended; 
-(NSOperationQueue *)serialOperationQueue;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)waitUntilEmpty;
-(id)init;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
@end
