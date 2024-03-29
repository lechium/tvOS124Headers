/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPCollection, SAMPMediaItem, NSArray, NSString;

@interface SAMPSteerMusic : SADomainCommand

@property (nonatomic,retain) SAMPCollection * currentListeningToCollection; 
@property (nonatomic,retain) SAMPMediaItem * currentListeningToItem; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * steerableBlob; 
+(id)steerMusic;
+(id)steerMusicWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(SAMPCollection *)currentListeningToCollection;
-(void)setCurrentListeningToCollection:(SAMPCollection *)arg1 ;
-(SAMPMediaItem *)currentListeningToItem;
-(void)setCurrentListeningToItem:(SAMPMediaItem *)arg1 ;
-(NSString *)steerableBlob;
-(void)setSteerableBlob:(NSString *)arg1 ;
@end

