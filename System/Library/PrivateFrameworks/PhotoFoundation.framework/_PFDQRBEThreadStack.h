/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFDispatchQueue;

@interface _PFDQRBEThreadStack : NSObject {

	_PFDQRBEThreadStack* _next;
	unsigned long long _currentIndex;
	PFDispatchQueue* _activeQueues[8];

}
+(id)stackForCurrentThread;
+(void)initialize;
-(void)pushQueue:(id)arg1 ;
-(void)popQueue;
-(BOOL)containsQueue:(id)arg1 ;
-(BOOL)isEmpty;
@end

