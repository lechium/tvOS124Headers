/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@interface BWMetadataFormat : BWFormat {

	opaqueCMFormatDescriptionRef _desc;

}
+(id)formatWithMetadataFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(void)initialize;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)_initWithMetadataFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(unsigned)mediaType;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
@end

