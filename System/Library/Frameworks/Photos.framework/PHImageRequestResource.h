/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLResourceIdentity.h>

@protocol PLUniformTypeIdentifierIdentity;
@class NSString;

@interface PHImageRequestResource : NSObject <PLResourceIdentity> {

	short _resourceType;
	short _version;
	unsigned _recipeID;
	unsigned _orientation;
	id<PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
	long long _unorientedWidth;
	long long _unorientedHeight;

}

@property (nonatomic,readonly) short resourceType;                                                       //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) short version;                                                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned recipeID;                                                        //@synthesize recipeID=_recipeID - In the implementation block
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;              //@synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID - In the implementation block
@property (nonatomic,readonly) unsigned orientation;                                                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) long long unorientedWidth;                                                //@synthesize unorientedWidth=_unorientedWidth - In the implementation block
@property (nonatomic,readonly) long long unorientedHeight;                                               //@synthesize unorientedHeight=_unorientedHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(short)resourceType;
-(id)initWithResource:(id)arg1 ;
-(unsigned)recipeID;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(long long)unorientedWidth;
-(long long)unorientedHeight;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSString *)description;
-(short)version;
-(unsigned)orientation;
@end

