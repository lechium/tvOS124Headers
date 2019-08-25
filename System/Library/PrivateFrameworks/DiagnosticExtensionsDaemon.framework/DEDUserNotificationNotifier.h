/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDNotifier.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class DEDNotifierConfiguration, NSString, UNUserNotificationCenter, NSObject;

@interface DEDUserNotificationNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding> {

	DEDNotifierConfiguration* _config;
	NSString* _bugSessionIdentifier;
	UNUserNotificationCenter* _center;
	NSObject*<OS_os_log> _log;

}

@property (__weak) DEDNotifierConfiguration * config;               //@synthesize config=_config - In the implementation block
@property (retain) NSString * bugSessionIdentifier;                 //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (retain) UNUserNotificationCenter * center;               //@synthesize center=_center - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(BOOL)supportsSecureCoding;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)scheduleNotification;
-(NSString *)bugSessionIdentifier;
-(void)cancelNotification;
-(id)createNotificationCenter;
-(void)setBugSessionIdentifier:(NSString *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCenter:(UNUserNotificationCenter *)arg1 ;
-(UNUserNotificationCenter *)center;
-(NSObject*<OS_os_log>)log;
-(DEDNotifierConfiguration *)config;
-(void)setConfig:(DEDNotifierConfiguration *)arg1 ;
@end

