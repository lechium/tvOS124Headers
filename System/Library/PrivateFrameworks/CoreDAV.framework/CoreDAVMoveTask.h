/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                                  //@synthesize previousETag=_previousETag - In the implementation block
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
-(id)httpMethod;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
-(void)dealloc;
-(id)description;
@end

