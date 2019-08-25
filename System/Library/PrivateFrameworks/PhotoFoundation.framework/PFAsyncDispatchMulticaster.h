/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFMulticaster.h>

@class PFDispatchQueue;

@interface PFAsyncDispatchMulticaster : PFMulticaster {

	PFDispatchQueue* _sendQueue;

}
+(void)initialize;
-(void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(id)_defaultDistributionQueue;
-(void)_distributeAsyncDispatchSelector:(SEL)arg1 to:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(void)flushMessagesAndNotify:(/*^block*/id)arg1 ;
-(id)init;
-(void)resume;
-(void)suspend;
@end

