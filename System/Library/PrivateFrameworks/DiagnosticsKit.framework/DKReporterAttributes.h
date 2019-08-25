/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/DKExtensionAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSExtension, NSUUID, NSString, NSSet;

@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying> {

	BOOL _headless;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _version;
	NSSet* _manifest;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * manifest;                             //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                      //@synthesize extension=_extension - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;              //@synthesize headless=_headless - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)isHeadless;
-(NSSet *)manifest;
-(id)initWithExtension:(id)arg1 ;
-(void)_validateAndAddDomain:(NSString*)arg1 withInfo:(NSDictionary*)arg2 toManifest:(NSMutableSet*)arg3 ;
-(void)_validateAndAddExtensionManifest:(NSDictionary*)arg1 toManifest:(NSMutableSet*)arg2 ;
-(BOOL)isEqualToReportGeneratorAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(NSExtension *)extension;
@end
