/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>
#import <libobjc.A.dylib/MTEventFilter.h>

@class NSString;

@interface MTFinalValidationFilter : MTObject <MTEventFilter> {

	BOOL _shouldApplyDeRes;

}

@property (assign,nonatomic) BOOL shouldApplyDeRes;                 //@synthesize shouldApplyDeRes=_shouldApplyDeRes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)apply:(id)arg1 ;
-(void)setShouldApplyDeRes:(BOOL)arg1 ;
-(BOOL)shouldApplyDeRes;
-(void)validateFields:(id)arg1 ;
@end

