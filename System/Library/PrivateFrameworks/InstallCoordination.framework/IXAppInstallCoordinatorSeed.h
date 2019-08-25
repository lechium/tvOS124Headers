/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleID;
	NSUUID* _uniqueIdentifier;
	unsigned long long _creator;
	unsigned long long _intent;

}

@property (nonatomic,copy) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long creator;              //@synthesize creator=_creator - In the implementation block
@property (assign,nonatomic) unsigned long long intent;               //@synthesize intent=_intent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setIntent:(unsigned long long)arg1 ;
-(void)setCreator:(unsigned long long)arg1 ;
-(unsigned long long)creator;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)intent;
-(NSString *)bundleID;
-(NSUUID *)uniqueIdentifier;
@end

