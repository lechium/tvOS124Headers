/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight {

	unsigned _flags;
	NSString* _targetObjectID;

}

@property (copy) NSString * targetObjectID;                    //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (assign,nonatomic) BOOL tracksInParent; 
-(void)setTargetObjectID:(NSString *)arg1 ;
-(void)demolish;
-(NSString *)targetObjectID;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(BOOL)isSnapshot;
-(id)initWithImprint:(id)arg1 ;
-(BOOL)tracksInParent;
-(void)setTracksInParent:(BOOL)arg1 ;
-(id)description;
-(id)snapshot;
@end

