/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;

}
+(id)sharedInstance;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
-(id)init;
-(void)addEntry:(id)arg1 ;
@end

