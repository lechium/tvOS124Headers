/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, MPIdentifierSet, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding> {

	BOOL _libraryContent;
	NSDictionary* _dictionary;
	MPIdentifierSet* _identifiers;
	NSString* _itemKind;

}

@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemKind;                                 //@synthesize itemKind=_itemKind - In the implementation block
@property (getter=isLibraryContent,nonatomic,readonly) BOOL libraryContent;              //@synthesize libraryContent=_libraryContent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;                           //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(MPIdentifierSet *)identifiers;
-(NSString *)itemKind;
-(BOOL)isLibraryContent;
-(NSDictionary *)dictionary;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

