/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol FBProcessWatchdogProviding;
@class NSArray, NSDictionary, NSURL;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying> {

	NSArray* _arguments;
	NSDictionary* _environment;
	NSURL* _standardOutputURL;
	NSURL* _standardErrorURL;
	BOOL _waitForDebugger;
	BOOL _disableASLR;
	BOOL _checkForLeaks;
	long long _launchIntent;
	unsigned _launchAssertionFlags;
	id<FBProcessWatchdogProviding> _watchdogProvider;
	double _watchdogExtension;
	double _watchdogScaleFactor;

}

@property (nonatomic,copy) NSArray * arguments;                                            //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSDictionary * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSURL * standardOutputURL;                                    //@synthesize standardOutputURL=_standardOutputURL - In the implementation block
@property (nonatomic,retain) NSURL * standardErrorURL;                                     //@synthesize standardErrorURL=_standardErrorURL - In the implementation block
@property (assign,nonatomic) BOOL waitForDebugger;                                         //@synthesize waitForDebugger=_waitForDebugger - In the implementation block
@property (assign,nonatomic) BOOL disableASLR;                                             //@synthesize disableASLR=_disableASLR - In the implementation block
@property (assign,nonatomic) BOOL checkForLeaks;                                           //@synthesize checkForLeaks=_checkForLeaks - In the implementation block
@property (assign,nonatomic) long long launchIntent;                                       //@synthesize launchIntent=_launchIntent - In the implementation block
@property (assign,nonatomic) unsigned launchAssertionFlags;                                //@synthesize launchAssertionFlags=_launchAssertionFlags - In the implementation block
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider;              //@synthesize watchdogProvider=_watchdogProvider - In the implementation block
@property (assign,nonatomic) double watchdogExtension;                                     //@synthesize watchdogExtension=_watchdogExtension - In the implementation block
@property (assign,nonatomic) double watchdogScaleFactor;                                   //@synthesize watchdogScaleFactor=_watchdogScaleFactor - In the implementation block
-(void)setArguments:(NSArray *)arg1 ;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(id)_initWithExecutionContext:(id)arg1 ;
-(NSURL *)standardOutputURL;
-(NSURL *)standardErrorURL;
-(BOOL)waitForDebugger;
-(BOOL)disableASLR;
-(BOOL)checkForLeaks;
-(long long)launchIntent;
-(unsigned)launchAssertionFlags;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(double)watchdogExtension;
-(double)watchdogScaleFactor;
-(unsigned)_launchAssertionFlags;
-(void)setStandardOutputURL:(NSURL *)arg1 ;
-(void)setStandardErrorURL:(NSURL *)arg1 ;
-(void)setWaitForDebugger:(BOOL)arg1 ;
-(void)setDisableASLR:(BOOL)arg1 ;
-(void)setCheckForLeaks:(BOOL)arg1 ;
-(void)setLaunchIntent:(long long)arg1 ;
-(void)setLaunchAssertionFlags:(unsigned)arg1 ;
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(void)setWatchdogExtension:(double)arg1 ;
-(void)setWatchdogScaleFactor:(double)arg1 ;
-(NSArray *)arguments;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)environment;
@end

