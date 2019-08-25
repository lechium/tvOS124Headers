/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSProcessIdentity.h>
#import <libobjc.A.dylib/FBSProcess.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FBSProcessHandle, BSMachPortTaskNameRight, BSAuditToken;

@interface BSProcessHandle : NSObject <FBSProcessIdentity, FBSProcess, BSXPCCoding, NSSecureCoding> {

	int _pid;
	NSString* _name;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _bundlePath;
	BSMachPortTaskNameRight* _taskNameRight;
	BSAuditToken* _auditToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
@property (nonatomic,copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BSMachPortTaskNameRight * taskNameRight;                     //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                                             //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                           //@synthesize bundlePath=_bundlePath - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken;                                   //@synthesize auditToken=_auditToken - In the implementation block
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
+(id)processHandleForPID:(int)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 ;
+(id)processHandle;
+(id)processHandleForXPCConnection:(id)arg1 ;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_fbs_isApplication;
-(FBSProcessHandle *)handle;
-(long long)type;
-(id)initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithCurrentProcess;
-(id)_initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(BOOL)_isRunningWithCertainty:(out BOOL*)arg1 ;
-(void)setJobLabel:(NSString *)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;
-(id)initWithTaskNameRight:(id)arg1 ;
-(int)pid;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)bundlePath;
-(BOOL)isValid;
-(void)setBundlePath:(NSString *)arg1 ;
-(BSAuditToken *)auditToken;
@end
