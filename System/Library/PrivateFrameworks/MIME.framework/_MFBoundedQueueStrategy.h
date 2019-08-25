/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFQueueingStrategy.h>

@class NSString;

@interface _MFBoundedQueueStrategy : NSObject <MFQueueingStrategy> {

	/*^block*/id _overflowHandler;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) id overflowHandler;                       //@synthesize overflowHandler=_overflowHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(void)enqueueObject:(id)arg1 buffer:(id)arg2 ;
-(NSString *)descriptionType;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(id)overflowHandler;
-(void)dealloc;
-(unsigned long long)capacity;
@end

