/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>

@class NSString;

@interface UnitTestSchemeUpgradeTaskDelegate : NSObject <NSURLSessionTaskDelegatePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTestDisposition:(int)arg1 ;
-(BOOL)testPassed:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

