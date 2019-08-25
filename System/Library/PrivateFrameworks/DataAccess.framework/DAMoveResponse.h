/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject {

	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;

}

@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * sourceID;                               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * destID;                                 //@synthesize destID=_destID - In the implementation block
@property (nonatomic,retain) DAMessageMoveRequest * origRequest;              //@synthesize origRequest=_origRequest - In the implementation block
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setDestID:(NSString *)arg1 ;
-(DAMessageMoveRequest *)origRequest;
-(NSString *)destID;
-(id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3 ;
-(void)setOrigRequest:(DAMessageMoveRequest *)arg1 ;
-(id)description;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end

