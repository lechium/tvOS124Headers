/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRTextInputTraitsProtobuf, NSString;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying> {

	_MRTextInputTraitsProtobuf* _inputTraits;
	NSString* _prompt;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPrompt; 
@property (nonatomic,retain) NSString * prompt;                                     //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) BOOL hasInputTraits; 
@property (nonatomic,retain) _MRTextInputTraitsProtobuf * inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInputTraits:(_MRTextInputTraitsProtobuf *)arg1 ;
-(BOOL)hasPrompt;
-(BOOL)hasInputTraits;
-(_MRTextInputTraitsProtobuf *)inputTraits;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasTitle;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

