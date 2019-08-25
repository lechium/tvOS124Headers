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

@class CPLResourceIdentity, CPLScopedIdentifier, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _backgroundDownloadTaskIdentifier;
	BOOL _canGenerateDerivative;
	CPLResourceIdentity* _identity;
	CPLScopedIdentifier* _itemScopedIdentifier;
	unsigned long long _resourceType;
	unsigned long long _sourceResourceType;

}

@property (nonatomic,retain) CPLResourceIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * itemScopedIdentifier;              //@synthesize itemScopedIdentifier=_itemScopedIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long resourceType;                       //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceResourceType;                 //@synthesize sourceResourceType=_sourceResourceType - In the implementation block
@property (assign,nonatomic) BOOL canGenerateDerivative;                            //@synthesize canGenerateDerivative=_canGenerateDerivative - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier; 
+(unsigned long long)countOfResourceTypes;
+(void)enumerateResourceTypesWithBlock:(/*^block*/id)arg1 ;
+(id)normalizedResourcesFromResources:(id)arg1 resourcePerResourceType:(id*)arg2 ;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(unsigned long long)resourceTypeFromShortDecription:(id)arg1 ;
+(BOOL)shouldIgnoreResourceTypeOnUpload:(unsigned long long)arg1 ;
+(BOOL)hasPriorityBoostForResourceType:(unsigned long long)arg1 ;
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(id)shortDescriptionForResourceType:(unsigned long long)arg1 ;
+(float)derivativeGenerationThreshold;
+(unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1 ;
+(BOOL)cplShouldGenerateDerivatives;
+(BOOL)supportsSecureCoding;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(id)bestFileNameForResource;
-(unsigned long long)sourceResourceType;
-(void)setItemScopedIdentifier:(CPLScopedIdentifier *)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(unsigned long long)_backgroundDownloadTaskIdentifier;
-(void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1 ;
-(BOOL)shouldCopy;
-(BOOL)shouldApplyDataProtection;
-(unsigned long long)estimatedResourceSize;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 ;
-(BOOL)canGenerateDerivative;
-(CPLScopedIdentifier *)itemScopedIdentifier;
-(void)setCanGenerateDerivative:(BOOL)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)initWithResourceIdentity:(id)arg1 itemScopedIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
-(BOOL)isTrackedForUpload;
-(void)setSourceResourceType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPLResourceIdentity *)identity;
-(void)setIdentity:(CPLResourceIdentity *)arg1 ;
@end

