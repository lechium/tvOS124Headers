/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _keyAsset;
	NSString* _containerIdentifier;
	long long _position;

}

@property (nonatomic,copy) NSString * containerIdentifier;                 //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long position;                           //@synthesize position=_position - In the implementation block
@property (assign,getter=isKeyAsset,nonatomic) BOOL keyAsset;              //@synthesize keyAsset=_keyAsset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg1 ;
-(id)proposedIdentifierForItemIdentifier:(id)arg1 ;
-(BOOL)isKeyAsset;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setKeyAsset:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
@end

