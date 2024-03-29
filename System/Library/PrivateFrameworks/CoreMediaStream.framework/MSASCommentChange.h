/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSASComment;

@interface MSASCommentChange : NSObject {

	int _deletionIndex;
	int _type;
	MSASComment* _comment;

}

@property (nonatomic,retain) MSASComment * comment;              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) int deletionIndex;                  //@synthesize deletionIndex=_deletionIndex - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
-(void)setComment:(MSASComment *)arg1 ;
-(MSASComment *)comment;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
@end

