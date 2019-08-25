/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerDelegateInfoTokens;

}

@property (nonatomic,retain) NSMutableArray * playerDelegateInfoTokens;              //@synthesize playerDelegateInfoTokens=_playerDelegateInfoTokens - In the implementation block
+(Class)playerDelegateInfoTokenType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)playerDelegateInfoTokens;
-(void)addPlayerDelegateInfoToken:(id)arg1 ;
-(void)clearPlayerDelegateInfoTokens;
-(unsigned long long)playerDelegateInfoTokensCount;
-(id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerDelegateInfoTokens:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
