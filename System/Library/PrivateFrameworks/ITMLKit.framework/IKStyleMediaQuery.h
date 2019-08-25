/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IKStyleMediaQuery : NSObject <NSCopying> {

	NSString* _identifier;
	BOOL _isNegated;
	NSString* _mediaType;
	NSDictionary* _featureValues;

}

@property (nonatomic,readonly) BOOL isNegated;                                   //@synthesize isNegated=_isNegated - In the implementation block
@property (nonatomic,retain,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * featureValues;              //@synthesize featureValues=_featureValues - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
+(id)mediaQueryListWithCSSMediaQuery:(id)arg1 ;
-(id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(BOOL)arg3 ;
-(BOOL)isNegated;
-(NSString *)mediaType;
-(NSDictionary *)featureValues;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
