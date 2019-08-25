/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOSearchAttributionSource, NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {

	GEOSearchAttributionSource* _source;
	NSArray* _logoPaths;
	NSArray* _snippetLogoPaths;
	NSString* _displayName;
	unsigned _attributionRequirementsMask;

}

@property (nonatomic,readonly) GEOSearchAttributionSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned requirementsMask;                        //@synthesize attributionRequirementsMask=_attributionRequirementsMask - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) NSArray * attributionApps; 
+(BOOL)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)attributionApps;
-(BOOL)hasAttributionRequirement:(int)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(BOOL)supportsActionURLs;
-(NSString *)webBaseActionURL;
-(unsigned)requirementsMask;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(BOOL)shouldOpenInAppStore;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(void)addLogoPath:(id)arg1 ;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)version;
-(GEOSearchAttributionSource *)source;
-(NSString *)displayName;
-(id)dictionaryRepresentation;
@end

