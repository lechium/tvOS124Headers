/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWFormat.h>

@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {

	NSArray* _metadataIdentifiers;

}
+(id)formatWithMetadataIdentifiers:(id)arg1 ;
+(void)initialize;
-(id)_initWithMetadataIdentifiers:(id)arg1 ;
-(unsigned)mediaType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
@end

