/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBAttachmentMetadata.h>

@class NSUUID, NSURL;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (nonatomic,copy) NSUUID * UUID; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSURL * URL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

