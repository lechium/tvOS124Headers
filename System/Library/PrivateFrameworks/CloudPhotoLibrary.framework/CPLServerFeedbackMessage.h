/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying> {

	NSMutableArray* _keysAndValues;

}

@property (nonatomic,retain) NSMutableArray * keysAndValues;              //@synthesize keysAndValues=_keysAndValues - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addKeysAndValues:(id)arg1 ;
-(unsigned long long)keysAndValuesCount;
-(id)keysAndValuesAtIndex:(unsigned long long)arg1 ;
-(void)clearKeysAndValues;
-(NSMutableArray *)keysAndValues;
-(void)setKeysAndValues:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
