/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSString * ownerBundleID; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
+(id)appPluginWithPropertyList:(id)arg1 ;
-(NSDictionary *)entitlements;
-(NSString *)bundleDir;
-(NSString *)entitlementsRelativePath;
-(NSString *)ownerBundleID;
-(NSArray *)groups;
-(id)domain;
@end

