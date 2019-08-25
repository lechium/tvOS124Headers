/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletinUpdate.h>

@interface BBBulletinRemoveUpdate : BBBulletinUpdate {

	BOOL _shouldSync;

}

@property (nonatomic,readonly) BOOL shouldSync;              //@synthesize shouldSync=_shouldSync - In the implementation block
+(id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)shouldSync;
-(id)typeDescription;
-(id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

