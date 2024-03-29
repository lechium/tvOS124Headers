/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_UTConcreteType.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSString, NSDictionary, NSData, NSURL, NSArray;

@interface _UTDeclaredType : _UTConcreteType {

	NSObject*<OS_dispatch_queue> _additionalInfoQueue;
	unsigned _flags;
	unsigned _unit;
	NSNumber* _version;
	NSString* _unlocalizedDescription;
	NSString* _localizedDescription;
	NSDictionary* _localizedDescriptionDictionary;
	NSData* _declaringBundleBookmark;
	NSString* _declaringBundleDelegate;
	NSURL* _declaringBundleURL;
	NSString* _kextName;
	NSDictionary* _tagSpecification;
	NSArray* _conformsTo;
	NSArray* _iconFiles;
	NSURL* _parentIconURL;
	NSString* _referenceURLString;

}
+(BOOL)supportsSecureCoding;
-(id)parentIdentifiers;
-(id)referenceURL;
-(id)initWithContext:(LSContext*)arg1 UTTypeID:(unsigned)arg2 UTTypeData:(const SCD_Struct_UT11*)arg3 ;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 checkingParents:(BOOL)arg2 ;
-(id)declaration;
-(id)declaringBundleURL;
-(BOOL)isDeclared;
-(id)tagSpecification;
-(BOOL)_isPublic;
-(BOOL)_isAppleInternal;
-(id)_unlocalizedDescription;
-(id)_localizedDescriptionDictionary;
-(id)_kernelExtensionName;
-(id)_iconURL;
-(BOOL)_isWildcard;
-(id)_iconURLCheckingParents:(BOOL)arg1 ;
-(BOOL)needsWorkaroundFor22092605;
-(BOOL)validateCollectionTypes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isActive;
-(id)version;
@end

