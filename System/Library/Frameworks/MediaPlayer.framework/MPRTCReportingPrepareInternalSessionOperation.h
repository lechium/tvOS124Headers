/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary, NSString;

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation {

	int _clientType;
	NSDictionary* _additionalUserInfo;
	NSString* _clientName;
	long long _clientVersion;
	id _hierarchyToken;
	NSString* _serviceIdentifier;
	long long _sessionID;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSDictionary * additionalUserInfo;              //@synthesize additionalUserInfo=_additionalUserInfo - In the implementation block
@property (nonatomic,copy) NSString * clientName;                          //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic) int clientType;                               //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) long long clientVersion;                      //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) id hierarchyToken;                            //@synthesize hierarchyToken=_hierarchyToken - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                   //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) long long sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) id responseHandler;                             //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
+(BOOL)isRTCReportingSupported;
+(id)RTCReportingFrameworkPath;
-(void)setSessionID:(long long)arg1 ;
-(long long)sessionID;
-(void)setClientType:(int)arg1 ;
-(void)setClientVersion:(long long)arg1 ;
-(void)setHierarchyToken:(id)arg1 ;
-(NSDictionary *)additionalUserInfo;
-(int)clientType;
-(long long)clientVersion;
-(id)hierarchyToken;
-(void)setAdditionalUserInfo:(NSDictionary *)arg1 ;
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
@end

