/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, ISURLOperation, NSString;

@interface IKLoadRecord : NSObject {

	BOOL _loadCompleted;
	NSURL* _URL;
	ISURLOperation* _opertaion;
	NSString* _scriptStr;

}

@property (nonatomic,retain) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) ISURLOperation * opertaion;              //@synthesize opertaion=_opertaion - In the implementation block
@property (assign,nonatomic) BOOL loadCompleted;                      //@synthesize loadCompleted=_loadCompleted - In the implementation block
@property (nonatomic,retain) NSString * scriptStr;                    //@synthesize scriptStr=_scriptStr - In the implementation block
-(ISURLOperation *)opertaion;
-(void)setOpertaion:(ISURLOperation *)arg1 ;
-(BOOL)loadCompleted;
-(void)setLoadCompleted:(BOOL)arg1 ;
-(NSString *)scriptStr;
-(void)setScriptStr:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
@end

