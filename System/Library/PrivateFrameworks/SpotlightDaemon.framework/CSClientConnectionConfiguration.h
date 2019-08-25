/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CSClientConnectionConfiguration : NSObject {

	BOOL _internal;
	BOOL _searchInternal;
	BOOL _isExtension;
	BOOL _privateIndexNonSandboxAllowed;
	BOOL _quotaDisabled;
	int _pid;
	unsigned _euid;
	unsigned _egid;
	NSObject*<OS_xpc_object> _connection;
	NSString* _protectionClass;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * protectionClass;                      //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned euid;                                   //@synthesize euid=_euid - In the implementation block
@property (nonatomic,readonly) unsigned egid;                                   //@synthesize egid=_egid - In the implementation block
@property (nonatomic,readonly) BOOL internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) BOOL searchInternal;                             //@synthesize searchInternal=_searchInternal - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) BOOL privateIndexNonSandboxAllowed;              //@synthesize privateIndexNonSandboxAllowed=_privateIndexNonSandboxAllowed - In the implementation block
@property (nonatomic,readonly) BOOL quotaDisabled;                              //@synthesize quotaDisabled=_quotaDisabled - In the implementation block
-(unsigned)euid;
-(NSString *)protectionClass;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)isExtension;
-(BOOL)internal;
-(int)pid;
-(unsigned)egid;
-(BOOL)searchInternal;
-(BOOL)privateIndexNonSandboxAllowed;
-(BOOL)quotaDisabled;
-(NSString *)bundleID;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

