/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSProcess.h>
#import <libobjc.A.dylib/FBUIProcess.h>

@protocol FBUIProcess <FBSProcess>
@required
-(BOOL)isExtensionProcess;
-(BOOL)isSystemApplicationProcess;
-(BOOL)isApplicationProcess;
-(BOOL)isRunning;

@end


@class NSString;

@interface FBUIProcess : FBSProcess <FBUIProcess>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
-(BOOL)isExtensionProcess;
-(BOOL)isSystemApplicationProcess;
-(BOOL)isApplicationProcess;
-(BOOL)isRunning;
@end

