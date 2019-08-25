/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying> {

	NSString* _bundleID;
	NSMutableArray* _syncCommands;

}

@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * syncCommands;              //@synthesize syncCommands=_syncCommands - In the implementation block
+(Class)syncCommandsType;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasBundleID;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)syncCommandsCount;
-(id)syncCommandsAtIndex:(unsigned long long)arg1 ;
-(void)addSyncCommands:(id)arg1 ;
-(void)clearSyncCommands;
-(NSMutableArray *)syncCommands;
-(void)setSyncCommands:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

