/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (assign,nonatomic,__weak) id<CoreDAVCopyTaskDelegate> delegate; 
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
-(id)httpMethod;
-(BOOL)validate:(id*)arg1 ;
-(void)dealloc;
@end

