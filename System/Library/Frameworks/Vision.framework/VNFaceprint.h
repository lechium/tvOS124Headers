/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNSerializing.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSData, NSString;

@interface VNFaceprint : NSObject <NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding> {

	unsigned long long _requestRevision;
	unsigned _platform;
	unsigned _profile;
	NSData* _faceprint;
	NSString* _key;
	NSString* _faceprintInputPath;

}

@property (nonatomic,retain) NSData * faceprint;                                //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,copy) NSString * key;                                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned platform;                                 //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) unsigned profile;                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * faceprintInputPath;                       //@synthesize faceprintInputPath=_faceprintInputPath - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
-(void)setProfile:(unsigned)arg1 ;
-(NSData *)faceprint;
-(unsigned)platform;
-(void)setFaceprint:(NSData *)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(unsigned long long)requestRevision;
-(id)serializeStateAndReturnError:(id*)arg1 ;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
-(id)_serializeVersion1StateAndReturnError:(id*)arg1 ;
-(id)_serializeVersion2StateAndReturnError:(id*)arg1 ;
-(NSString *)faceprintInputPath;
-(void)setFaceprintInputPath:(NSString *)arg1 ;
-(void)setPlatform:(unsigned)arg1 ;
-(unsigned)profile;
-(id)computeDistanceToFaceprint:(id)arg1 withDistanceFunction:(long long)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end

