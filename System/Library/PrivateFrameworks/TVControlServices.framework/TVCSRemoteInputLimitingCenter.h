/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVCSRemoteInputLimiting.h>

@class NSXPCConnection, NSString;

@interface TVCSRemoteInputLimitingCenter : NSObject <TVCSRemoteInputLimiting> {

	BOOL _applicationActive;
	BOOL _viewServiceActive;
	NSXPCConnection* _connection;
	long long _limitCount;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long limitCount;                                           //@synthesize limitCount=_limitCount - In the implementation block
@property (assign,getter=isApplicationActive,nonatomic) BOOL applicationActive;              //@synthesize applicationActive=_applicationActive - In the implementation block
@property (assign,getter=isViewServiceActive,nonatomic) BOOL viewServiceActive;              //@synthesize viewServiceActive=_viewServiceActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(long long)limitCount;
-(void)setLimitCount:(long long)arg1 ;
-(void)setApplicationActive:(BOOL)arg1 ;
-(BOOL)isApplicationActive;
-(id)_server;
-(BOOL)isViewServiceActive;
-(BOOL)_isActiveWithApplicationActivity:(BOOL)arg1 viewServiceActivity:(BOOL)arg2 ;
-(void)setViewServiceActive:(BOOL)arg1 ;
-(void)beginLimitingRemoteInput;
-(void)endLimitingRemoteInput;
-(id)init;
-(void)dealloc;
-(BOOL)_isActive;
-(void)_willResignActive;
-(void)_didBecomeActive;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
