/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface VUIAsynchronousOperation : NSOperation {

	int _state;

}
-(BOOL)isAsynchronous;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end

